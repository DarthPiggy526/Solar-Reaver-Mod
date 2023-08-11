class CfgPatches {
	class SR_UAV {
		requiredaddons[] = {
			"A3_Drones_F_Air_F_Gamma_UAV_01",
			"ace_common",
			"ace_mk6mortar",
			"AmbientLife" // Skull Probe Addon
		};
		requiredversion = 1.0;
		units[] = {"SR_B_UAV_AR2i","SR_O_UAV_AR2i","SR_I_UAV_AR2i"};
		weapons[] = {"SR_B_AR2i_Packed","SR_O_AR2i_Packed","SR_I_AR2i_Packed"};
		magazines[] = {};
	};
};

class RCWSOptics;
class Optics_Armored {
	class Wide: RCWSOptics {};
};
class Optics_Gunner_MBT_01: Optics_Armored {
	class Wide: Wide {};
};
class ITC_Land_Optics_IGS: Optics_Gunner_MBT_01 {
	class Wide: Wide {
		initFov = 0.174;
		minFov = 0.174;
		maxFov = 0.174;
		visionMode[] = {"Normal","NVG"};
		thermalMode[] = {};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
		gunnerOpticsEffect[] = {};
	};
};

#include "CfgFunctions.hpp"

#include "RscInGameUI.hpp"

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"