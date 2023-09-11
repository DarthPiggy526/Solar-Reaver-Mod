class CfgVehicles {
	class Man;
    class CAManBase: Man {
      class ACE_SelfActions {
        class ACE_Equipment {
          class ITC_Land_Unpack {
			displayName = "Unpack";
            condition = "[ACE_player] call SR_UAV_fnc_canunpack";
            statement = "";
            exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
            showDisabled = 0;
            priority = 0;
            // Skull Probes
            class SR_Unpack_AR2i_B {
              displayName = "Skull Probe [NATO]";
              condition = "'SR_B_AR2i_Packed' in (items _player)";
              statement = "['SR_B_AR2i_Packed',_player] call SR_UAV_fnc_unPack";
			  priority = 1;
              showDisabled = 1;
              exceptions[] = {"isNotInside","isNotSitting"};
              enableInside = 0;
            };
            class SR_Unpack_AR2i_O: SR_Unpack_AR2i_B {
              displayName = "Skull Probe [CSAT]";
              condition = "'SR_O_AR2i_Packed' in (items _player)";
              statement = "['SR_O_AR2i_Packed',_player] call SR_UAV_fnc_unPack";
            };
            class SR_Unpack_AR2i_I: SR_Unpack_AR2i_B {
              displayName = "Skull Probe [AAF]";
              condition = "'SR_I_AR2i_Packed' in (items _player)";
              statement = "['SR_I_AR2i_Packed',_player] call SR_UAV_fnc_unPack";
            };
            
            // Tarantula Turrets
            class SR_Unpack_Tarantula_B {
              displayName = "Tarantula Turret [NATO]";
              condition = "'SR_B_Tarantula_Sentry_Packed' in (items _player)";
              statement = "['SR_B_Tarantula_Sentry_Packed',_player] call SR_UAV_fnc_unPack";
			  priority = 1;
              showDisabled = 1;
              exceptions[] = {"isNotInside","isNotSitting"};
              enableInside = 0;
            };
            class SR_Unpack_Tarantula_O {
              displayName = "Tarantula Turret [CSAT]";
              condition = "'SR_O_Tarantula_Sentry_Packed' in (items _player)";
              statement = "['SR_O_Tarantula_Sentry_Packed',_player] call SR_UAV_fnc_unPack";
			  priority = 1;
              showDisabled = 1;
              exceptions[] = {"isNotInside","isNotSitting"};
              enableInside = 0;
            };
            class SR_Unpack_Tarantula_I {
              displayName = "Tarantula Turret [AAF]";
              condition = "'SR_I_Tarantula_Sentry_Packed' in (items _player)";
              statement = "['SR_I_Tarantula_Sentry_Packed',_player] call SR_UAV_fnc_unPack";
			  priority = 1;
              showDisabled = 1;
              exceptions[] = {"isNotInside","isNotSitting"};
              enableInside = 0;
            };
          };
        };
      };
    };
    
    // Skull Probes
    class Air;
    class Helicopter: Air {
        class ACE_Actions {
            class ACE_MainActions {};
        };
        class Turrets {
            class MainTurret;
        };
    };
    class Helicopter_Base_F: Helicopter {
        class ACE_Actions: ACE_Actions{
            class ACE_MainActions: ACE_MainActions {};
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };
	class UAV_01_base_F: Helicopter_Base_F	{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};

	class SR_UAV_AR2i_base: UAV_01_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                    turretInfoType = "ITC_Land_RscOptics_UAV_gunner";
            };
        };
		model="\WHambientlife\model\servoskull.p3d";
    };
	class SR_B_UAV_AR2i: SR_UAV_AR2i_base {
		author = "Toadball";
		displayName = "Skull Probe [NATO]";
		itc_land_PacksTo = "SR_B_AR2i_Packed";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"propeller1_rotation", 1}, {"propeller1_blur_rotation", 1}, {"propeller2_rotation", 0}, {"propeller2_blur_rotation", 0}, {"propeller3_rotation", 1}, {"propeller3_blur_rotation", 1}, {"propeller4_rotation", 0}, {"propeller4_blur_rotation", 0}, {"propeller1_hide", 0}, {"propeller1_blur_hide", 0}, {"propeller2_hide", 0}, {"propeller2_blur_hide", 0}, {"propeller3_hide", 0}, {"propeller3_blur_hide", 0}, {"propeller4_hide", 0}, {"propeller4_blur_hide", 0}, {"mainturret", 0}, {"maingun", -0.05}};
			hide[] = {"zasleh", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.15;
			verticalOffsetWorld = -0.001;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		accuracy = 0.5;
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "((alive _target) && ( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call SR_UAV_fnc_Pack";
				};

			};
		};

	};
	class SR_O_UAV_AR2i: SR_UAV_AR2i_base {
		author = "Toadball";
		displayName = "Skull Probe [CSAT]";
		itc_land_PacksTo = "SR_O_AR2i_Packed";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"propeller1_rotation", 1}, {"propeller1_blur_rotation", 1}, {"propeller2_rotation", 0}, {"propeller2_blur_rotation", 0}, {"propeller3_rotation", 1}, {"propeller3_blur_rotation", 1}, {"propeller4_rotation", 0}, {"propeller4_blur_rotation", 0}, {"propeller1_hide", 0}, {"propeller1_blur_hide", 0}, {"propeller2_hide", 0}, {"propeller2_blur_hide", 0}, {"propeller3_hide", 0}, {"propeller3_blur_hide", 0}, {"propeller4_hide", 0}, {"propeller4_blur_hide", 0}, {"mainturret", 0}, {"maingun", -0.05}};
			hide[] = {"zasleh", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.15;
			verticalOffsetWorld = -0.001;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_01_F.jpg";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		accuracy = 0.5;
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "((alive _target) && ( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call SR_UAV_fnc_Pack";
				};

			};
		};

	};
	class SR_I_UAV_AR2i: SR_UAV_AR2i_base {
		author = "Toadball";
		displayName = "Skull Probe [AFF]";
		itc_land_PacksTo = "SR_I_AR2i_Packed";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"propeller1_rotation", 1}, {"propeller1_blur_rotation", 1}, {"propeller2_rotation", 0}, {"propeller2_blur_rotation", 0}, {"propeller3_rotation", 1}, {"propeller3_blur_rotation", 1}, {"propeller4_rotation", 0}, {"propeller4_blur_rotation", 0}, {"propeller1_hide", 0}, {"propeller1_blur_hide", 0}, {"propeller2_hide", 0}, {"propeller2_blur_hide", 0}, {"propeller3_hide", 0}, {"propeller3_blur_hide", 0}, {"propeller4_hide", 0}, {"propeller4_blur_hide", 0}, {"mainturret", 0}, {"maingun", -0.05}};
			hide[] = {"zasleh", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.15;
			verticalOffsetWorld = -0.001;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_01_F.jpg";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
		accuracy = 0.5;
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "((alive _target) && ( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call SR_UAV_fnc_Pack";
				};

			};
		};

	};
    
    
    
    // Tarantula Turrets
    class TarantulaSentry;
    class Turrets;
    class MainTurret;
    class SR_B_Tarantula_Sentry: TarantulaSentry {
        author = "Waagheur";
		displayName = "Tarantula Turret [NATO]";
		itc_land_PacksTo = "SR_B_Tarantula_Sentry_Packed";
        
        scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		accuracy = 0.5;
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		// class ACE_Actions: ACE_Actions {
			// class ACE_MainActions: ACE_MainActions {
				// class ITC_Land_PackDarter {
					// displayName = "Repack UAV";
					// condition = "((alive _target) && ( ACE_Player distance _target ) < 5) && ( count (( UAVControl _target) select 1 ) < 1 )";
					// statement = "[_target,_player] call SR_UAV_fnc_Pack";
				// };

			// };
		// };
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                weapons[]=
				{
					"SR_Low_Range_IG_HeavyBolter"
				};
            };
        };
    };
    class SR_O_Tarantula_Sentry: TarantulaSentry {
        author = "Waagheur";
		displayName = "Tarantula Turret [CSAT]";
		itc_land_PacksTo = "SR_O_Tarantula_Sentry_Packed";
        
        scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		accuracy = 0.5;
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		// class ACE_Actions: ACE_Actions {
			// class ACE_MainActions: ACE_MainActions {
				// class ITC_Land_PackDarter {
					// displayName = "Repack UAV";
					// condition = "((alive _target) && ( ACE_Player distance _target ) < 5) && ( count (( UAVControl _target) select 1 ) < 1 )";
					// statement = "[_target,_player] call SR_UAV_fnc_Pack";
				// };

			// };
		// };
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                weapons[]=
				{
					"SR_Low_Range_IG_HeavyBolter"
				};
            };
        };
    };
    class SR_I_Tarantula_Sentry: TarantulaSentry {
        author = "Waagheur";
		displayName = "Tarantula Turret [AAF]";
		itc_land_PacksTo = "SR_I_Tarantula_Sentry_Packed";
        
        scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
		accuracy = 0.5;
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		// class ACE_Actions: ACE_Actions {
			// class ACE_MainActions: ACE_MainActions {
				// class ITC_Land_PackDarter {
					// displayName = "Repack UAV";
					// condition = "((alive _target) && ( ACE_Player distance _target ) < 5) && ( count (( UAVControl _target) select 1 ) < 1 )";
					// statement = "[_target,_player] call SR_UAV_fnc_Pack";
				// };

			// };
		// };
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                weapons[]=
				{
					"SR_Low_Range_IG_HeavyBolter"
				};
            };
        };
    };
};
