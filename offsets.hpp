#pragma once

#include <cstddef>

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-13 17:32:09.515186300 UTC

namespace client_dll {
    constexpr std::ptrdiff_t dwEntityList = 0x178DC58;
    constexpr std::ptrdiff_t dwForceBackward = 0x16950A0;
    constexpr std::ptrdiff_t dwForceCrouch = 0x1695370;
    constexpr std::ptrdiff_t dwForceForward = 0x1695010;
    constexpr std::ptrdiff_t dwForceJump = 0x16952E0;
    constexpr std::ptrdiff_t dwForceLeft = 0x1695130;
    constexpr std::ptrdiff_t dwForceRight = 0x16951C0;
    constexpr std::ptrdiff_t dwGlobalVars = 0x1690EC8;
    constexpr std::ptrdiff_t dwInterfaceLinkList = 0x1974098;
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x17DC4E8;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x187AFC8;
    constexpr std::ptrdiff_t dwPlantedC4 = 0x18815E0;
    constexpr std::ptrdiff_t dwViewAngles = 0x18DAAF0;
    constexpr std::ptrdiff_t dwViewMatrix = 0x187BAB0;
}

namespace engine2_dll {
    constexpr std::ptrdiff_t dwNetworkGameClient = 0x486AB0;
    constexpr std::ptrdiff_t dwNetworkGameClient_maxClients = 0x250;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x240;
}