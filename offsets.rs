#![allow(non_snake_case, non_upper_case_globals)]

// Created using https://github.com/a2x/cs2-dumper
// 2023-10-13 17:32:09.515938900 UTC

pub mod client_dll {
    pub const dwEntityList: usize = 0x178DC58;
    pub const dwForceBackward: usize = 0x16950A0;
    pub const dwForceCrouch: usize = 0x1695370;
    pub const dwForceForward: usize = 0x1695010;
    pub const dwForceJump: usize = 0x16952E0;
    pub const dwForceLeft: usize = 0x1695130;
    pub const dwForceRight: usize = 0x16951C0;
    pub const dwGlobalVars: usize = 0x1690EC8;
    pub const dwInterfaceLinkList: usize = 0x1974098;
    pub const dwLocalPlayerController: usize = 0x17DC4E8;
    pub const dwLocalPlayerPawn: usize = 0x187AFC8;
    pub const dwPlantedC4: usize = 0x18815E0;
    pub const dwViewAngles: usize = 0x18DAAF0;
    pub const dwViewMatrix: usize = 0x187BAB0;
}

pub mod engine2_dll {
    pub const dwNetworkGameClient: usize = 0x486AB0;
    pub const dwNetworkGameClient_maxClients: usize = 0x250;
    pub const dwNetworkGameClient_signOnState: usize = 0x240;
}