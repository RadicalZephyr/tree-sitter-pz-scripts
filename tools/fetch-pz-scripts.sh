#!/usr/bin/env bash
#
# Fetch Project Zomboid's shipped media/scripts/ for use as grammar test data.
#
# The dedicated server (Steam app 380870) is a Tool app that anonymous SteamCMD
# is entitled to, so this needs no Steam account and no copy of the game. Build
# 42 is the `public` branch; Build 41 is frozen on `legacy41`.
#
#   ./tools/fetch-pz-scripts.sh          # Build 42 (default)
#   ./tools/fetch-pz-scripts.sh b41      # Build 41.78.21
#   ./tools/fetch-pz-scripts.sh both
#
# Scripts land in tmp/pz-scripts/<build>/, which is gitignored. They are The
# Indie Stone's copyrighted game data — use them to find syntax the grammar
# mishandles and to write reduced corpus cases, but do not commit them.
#
# The full server payload is ~7 GB for B42 and ~5 GB for B41; only the ~10 MB of
# media/scripts/ is kept. Pass KEEP_SERVER=1 to leave the install in place.
#
# Requirements: curl, tar, and a 32-bit loader — SteamCMD ships as a 32-bit
# binary. On Debian/Ubuntu:
#
#   sudo dpkg --add-architecture i386 && sudo apt-get update
#   sudo apt-get install lib32gcc-s1 libc6:i386 libstdc++6:i386
#
# SteamCMD talks to Steam's CM servers on TCP 27017, falling back to a
# WebSocket transport on 443, and pulls content over HTTP on port 80. A network
# that only permits CONNECT-proxied HTTPS will not carry it.

set -euo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
WORK="${REPO_ROOT}/tmp/pz-scripts"
STEAMCMD_DIR="${WORK}/steamcmd"
APPID=380870
STEAMCMD_URL="https://steamcdn-a.akamaihd.net/client/installer/steamcmd_linux.tar.gz"

log() { printf '==> %s\n' "$*" >&2; }
die() { printf 'error: %s\n' "$*" >&2; exit 1; }

ensure_steamcmd() {
  if [[ -x "${STEAMCMD_DIR}/steamcmd.sh" ]]; then return; fi
  log "installing SteamCMD into ${STEAMCMD_DIR}"
  mkdir -p "${STEAMCMD_DIR}"
  curl -fsSL "${STEAMCMD_URL}" | tar -xz -C "${STEAMCMD_DIR}"
  [[ -x "${STEAMCMD_DIR}/steamcmd.sh" ]] || die "SteamCMD did not unpack as expected"
}

# fetch <build-label> [steam-beta-branch]
fetch() {
  local build="$1" branch="${2:-}"
  local install="${WORK}/server-${build}" dest="${WORK}/${build}"
  local -a beta=()
  [[ -n "${branch}" ]] && beta=(-beta "${branch}")

  log "pulling app ${APPID}${branch:+ (branch ${branch})} into ${install}"
  # force_install_dir must precede login, and app_update must follow it.
  ( cd "${STEAMCMD_DIR}" && ./steamcmd.sh \
      +@sSteamCmdForcePlatformType linux \
      +force_install_dir "${install}" \
      +login anonymous \
      +app_update "${APPID}" ${beta[@]+"${beta[@]}"} validate \
      +quit )

  [[ -d "${install}/media/scripts" ]] \
    || die "no media/scripts/ in ${install} — the download may have failed"

  log "extracting media/scripts to ${dest}"
  rm -rf "${dest}"
  mkdir -p "${dest}"
  cp -r "${install}/media/scripts/." "${dest}/"

  if [[ -z "${KEEP_SERVER:-}" ]]; then
    log "removing the ${build} server install (KEEP_SERVER=1 to retain it)"
    rm -rf "${install}"
  fi

  printf '%s: %s files, %s lines, %s\n' \
    "${build}" \
    "$(find "${dest}" -name '*.txt' | wc -l | tr -d ' ')" \
    "$(find "${dest}" -name '*.txt' -exec cat {} + | wc -l | tr -d ' ')" \
    "$(du -sh "${dest}" | cut -f1)"
}

main() {
  local target="${1:-b42}"
  case "${target}" in
    b42|b41|both) ;;
    *) die "unknown build '${target}' (expected b42, b41, or both)" ;;
  esac

  mkdir -p "${WORK}"
  ensure_steamcmd

  case "${target}" in
    b42)  fetch b42 ;;
    b41)  fetch b41 legacy41 ;;
    both) fetch b42; fetch b41 legacy41 ;;
  esac
}

main "$@"
