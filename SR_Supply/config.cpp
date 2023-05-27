#define _ARMA_

class CfgPatches
{
	class SR_Supply
	{
		name = "Solar Reavers Supply Mod";
		author = "Tengu";
		requiredVersion = 0.002;
		requiredAddons[] = 
		{
			"SR_Core";
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		units[] = 
		{
			"SR_SupplyPod_Empty",
			"SR_SupplyPod_Recon",
			"SR_SupplyPod_Tactical",
			"SR_SupplyPod_Devastator",
			"SR_SupplyPod_Assualt",
			"SR_SupplyPod_Medical",
			"SR_SupplyPod_Command"
		};
	};
};


//Ammo Guide
//
//Recon
//Godwyn 							TIOW_30rnd_GodwynBoltgunMag
//Shotgun							Steve_Sm_Pellet	Steve_Sm_Solid
//Exitus Bolter						Steve_Trig_Exitus_BoltgunMag
//Atrox Bolter						Steve_Phob_Atrox_BoltgunMag
//Master Crafted Exitus Bolter 		Same as Exitus Bolter
//Missile Launcher					TIOW_SM_Rocket_Frag_Mag TIOW_SM_Rocket_Krak_Mag
//Heavy Bolter						TIOW_Mars_HeavyBolterMag_85rnd
//Artificier Heavy Bolter 			Same as Heavy Bolter
//
//Tacticool
//Godwyn Bolter 					TIOW_30rnd_GodwynBoltgunMag
//Master Crafted Godwyn Bolter 		Same as Godwyn Bolter
//Phobos Bolter 					Steve_Phob_BoltgunMag
//Heavy Bolter 						TIOW_Mars_HeavyBolterMag_85rnd
//Artificier Heavy Bolter 			Same as Heavy Bolter
//Ragefire Plasma Gun 				TIOW_SM_Plasmagun_Mag
//Meltagun 							SR_Meltagun_Mag
//Master Crafted Plasma Gun 		Same as Plasma Gun
//Master Crafted Meltagun 			SR_Master_Crafted_Meltagun_Mag
//
//Devastator
//Heavy Bolter 						TIOW_Mars_HeavyBolterMag_85rnd
//Missile Launcher 					TIOW_SM_Rocket_Frag_Mag TIOW_SM_Rocket_Krak_Mag
//Lascannon							Steve_SM_Lascannon_Mag
//Mediant Multi-melta				Steve_30k_MultiMelta_Mag
//Rotor Cannon						Steve_Rotor_Cannon_Mag
//Ragefire Plasma Cannon 			TIOW_SM_PlasmaCannon_Mag
//Kalibrax Autocannon 				TBD
//Master Crafted Heavy Bolter 		Same as Heavy Bolter
//Master Crafted Lascannon 			Same as Lascannon
//
//Assault
//Phobos Pistol 					Steve_Phob_BoltPistolMag
//Tigrus Pistol 					Steve_Trig_BoltPistolMag
//Master Crafted Phobos Pistol 		SR_Master_Crafted_Phobos_BoltPistol_Mag
//Master Crafted Tigrus Pistol 		SR_Master_Crafted_Tigrus_BoltPistol_Mag
//Ryza Plasma Pistol 				Steve_SM_PlasmaPistol_Mag
//Large Fuel						AOD_L_GravFuel
//Medium Fuel 						AOD_M_GravFuel
//Small Fuel 						AOD_S_GravFuel
//
//Command
//Mars Pattern Storm Bolter 		TIOW_SM_Storm_Box_Mag
//Tigrus Bolter 					Steve_Trig_BoltgunMag
//Tigrus Combi Seeker  				Steve_30k_Tig_Combi_Mag Steve_30k_Tig_Combi_Mag
//Tigrus Combi Melta 				Share same Combi Ammo Steve_30k_CombiMelta_Mag
//Tigrus Combi Plasma 				Share same Combi Ammo Steve_30k_CombiPlas_Mag
//
//Medical Supplies
//[XI] Tomb Robbers					XI_p_TombRobber
//[XI] SealNGo 						XI_p_SealNGo
//[XI] Sealant 						XI_p_Sealant
//Adeonosine 						ACE_adenosine
//Morphine 							ACE_morphine
//Epinephrine 						ACE_epinephrine
//Blood 250ml						ACE_bloodIV_250
//Blood 500ml						ACE_bloodIV_500
//Blood 1l							ACE_bloodIV
//Splint 							ACE_splint
//Tourniquet 						ACE_tourniquet
//Bandage Elastic 					ACE_elasticBandage
//Defibrillator 					adv_aceCPR_AED
//Bodybag 							ACE_bodyBag
//
//Grenades in General
//Frag								TIOW_sm_frag_grenade_mag
//Krak								TIOW_sm_krak_grenade_mag
//Smoke								TIOW_sm_smoke_grenade_mag
//Melta (Throwable)					ML700_melta_bomb_magazine
//Melta (Placeable)					AV_MeltaBomb_Mag
//Smoke 							TIOW_sm_smoke_grenade_mag	
//Smoke Blue						SmokeShellBlue	
//Smoke Green 						SmokeShellGreen 	
//Smoke Orange 						SmokeShellOrange	
//Smoke Purple						SmokeShellPurple	
//Smoke Red							SmokeShellRed	
//Smoke Yellow						SmokeShellYellow	



//Medical Template
//		class TransportItems
//		{
//			class xx_TIOW_sm_frag_grenade_mag{
//				name = "TIOW_sm_frag_grenade_mag";
//				count = 8;
//			};
//			class xx_TIOW_sm_krak_grenade_mag{
//				name = "TIOW_sm_krak_grenade_mag";
//				count = 8;
//			};
//			class xx_TIOW_sm_smoke_grenade_mag{
//				name = "TIOW_sm_smoke_grenade_mag";
//				count = 8;
//			};
//			class xx_SmokeShellPurple{
//				name = "SmokeShellPurple";
//				count = 2;
//			};
//			class xx_ACE_elasticBandage{
//				name = "ACE_elasticBandage";
//				count = 25;
//			};
//			class xx_ACE_bloodIV_500{
//				name = "ACE_bloodIV_500";
//				count = 6;
//			};
//			class xx_ACE_adenosine{
//				name = "ACE_adenosine";
//				count = 8;
//			};
//			class xx_ACE_morphine{
//				name = "ACE_morphine";
//				count = 8;
//			};
//			class xx_ACE_epinephrine{
//				name = "ACE_epinephrine";
//				count = 8;
//			};
//			class xx_ACE_splint{
//				name = "ACE_splint";
//				count = 16;
//			};
//			class xx_ACE_tourniquet{
//				name = "ACE_tourniquet";
//				count = 16;
//			};
//		};

class ACEX_Fortify_Presets
{
	class SR_Fortify_Objects 
	{
		displayName = "Solar Reavers";
		objects[] = {
			{"TIOW_Dragons_Teeth",3},
			{"WH40k_Barricade_dow2",5},
			{"Land_Sandbag_Straight",5},
			{"Land_Sandbag_Straight",5},
			{"Land_Sandbag_Static",5},
			{"Land_TIOW_adl_single",5},
			{"Land_TIOW_adl_double",10},
			{"Land_Plank_01_4m_F",10},
			{"Land_Razorwire_F",10},
			{"Land_Barrier",10},
			{"RF_Bunker",50},
		};
	};
};


class Extended_InitPost_EventHandlers {
    class SR_SupplyPod_Empty {
        class SR_initCarry {
            init = "(_this select 0) setVariable [""ace_dragging_ignoreWeightCarry"",true,true]";
        };
        class SR_initDrag {
            init = "(_this select 0) setVariable [""ace_dragging_ignoreWeightDrag"",true,true]";
        };
    };
};

class CfgVehicles{
class box_NATO_Equip_F;
//class OPTRE_Ammo_SupplyPod_Empty;
	class SR_SupplyPod_Empty: box_NATO_Equip_F
	{
		displayName = "[TSR] Empty Resupply";
		author = "Tengu";
		maximumLoad = 40000;
		ACE_maxWeightCarry = 40000;
		ACE_maxWeightDrag = 40000;
		editorCategory = "EdCat_Supplies"; // Can't be another category for it to be in zeus
		editorSubcategory = "SR_EdSubcat_Supply";
//		model = "Arma3 Mods\Harakoni\SupplyPod.p3d";
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		hiddenSelections[] = {'camo'};
		hiddenSelectionsTextures[] = {"\OPTRE_Misc\Crates\data\SupplyPod_co.paa"};
		icon = "\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		supplyRadius = 2.5;
		armor = 1000;
//		class DestructionEffects
//		{
//			class HouseDestr
//			{
//				simulation = "destroy";
//				type = "DelayedDestructionAmmoBox";
//				position = "";
//				intensity = 1;
//				interval = 1;
//				lifeTime = 6;
//			};
//		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};


	class SR_SupplyPod_Recon: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Recon Resupply";
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 120;
			};
			class xx_Primaris_Dos_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_Bolt_RifleMag";
				count = 120;
			};
			class xx_Steve_Trig_Exitus_BoltgunMag
			{
				magazin = "Steve_Trig_Exitus_BoltgunMag";
				count = 160;
			};
			class xx_Steve_Trig_Exitus_BoltgunMag_K
			{
				magazine = "Steve_Trig_Exitus_BoltgunMag_K";
				count = 40;
			};
			class xx_Steve_Trig_Exitus_BoltgunMag_DF
			{
				magazine = "Steve_Trig_Exitus_BoltgunMag_DF";
				count = 40;
			};
			class xx_Steve_Trig_Exitus_BoltgunMag_INF
			{
				magazine = "Steve_Trig_Exitus_BoltgunMag_INF";
				count = 40;
			};
			class xx_Primaris_Dos_S_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_S_Bolt_RifleMag";
				count = 120;
			};
			class xx_Steve_Trig_NewCombiBoltgunMag
			{
				magazine = "Steve_Trig_NewCombiBoltgunMag";
				count = 100;
			};
			class xx_Steve_Trig_NewCombiBoltgunMag_K
			{
				magazine = "Steve_Trig_NewCombiBoltgunMag_K";
				count = 20;
			};
			class xx_Steve_Trig_NewCombiBoltgunMag_DF
			{
				magazine = "Steve_Trig_NewCombiBoltgunMag_DF";
				count = 20;
			};
			class xx_Steve_Trig_NewCombiBoltgunMag_INF
			{
				magazine = "Steve_Trig_NewCombiBoltgunMag_INF";
				count = 20;
			};
			class xx_Steve_Phob_Atrox_BoltgunMag
			{
				magazine = "Steve_Phob_Atrox_BoltgunMag";
				count = 100;
			};
			class xx_Steve_Phob_Atrox_BoltgunMag_K
			{
				magazine = "Steve_Phob_Atrox_BoltgunMag_K";
				count = 20;
			};
			class xx_Steve_Phob_Atrox_BoltgunMag_DF
			{
				magazine = "Steve_Phob_Atrox_BoltgunMag_DF";
				count = 20;
			};
			class xx_TIOW_SM_Rocket_Frag_Mag
			{
				magazine = "TIOW_SM_Rocket_Frag_Mag";
				count = 20;
			};
			class xx_TIOW_SM_Rocket_Krak_Mag
			{
				magazine = "TIOW_SM_Rocket_Krak_Mag";
				count = 20;
			};
		};
		class TransportWeapons
		{
			class xx_TIOW_GodwynBoltgun_2
			{
				weapon = "TIOW_GodwynBoltgun_2";
				count = 5;
			};
			class xx_Primaris_Dos_Bolt_Rifle
			{
				weapon = "Primaris_Dos_Bolt_Rifle";
				count = 5;
			};
			class xx_Web_Melee_KnifeSM
			{
				weapon = "Web_Melee_KnifeSM";
				count = 5;
			};
			class xx_Steve_NewExitus_1
			{
				weapon = "Steve_NewExitus_1";
				cout = 5;
			};
			class xx_TIOW_SM_Rocket_1
			{
				weapon = "TIOW_SM_Rocket_1";
				count = 1;
			};
		};
		class TransportItems
		{
			class xx_AV_MeltaBomb_Mag
			{
				name = "AV_MeltaBomb_Mag";
				count = 10;
			};
			class xx_ML700_melta_bomb_magazine
			{
				name = "ML700_melta_bomb_magazine";
				count = 10;
			};
			class xx_AV_Servo_UAV_Packed
			{
				name = "AV_Servo_UAV_Packed";
				count = 2;
			};
			class xx_ACE_UAVBattery
			{
				name = "ACE_UAVBattery";
				count = 10;
			};
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 16;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
				count = 16;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_splint{
				name = "ACE_splint";
				count = 16;
			};
			class xx_ACE_tourniquet{
				name = "ACE_tourniquet";
				count = 16;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_AV_AdrenalStims{
				name = "AV_AdrenalStims";
				count = 16;
			};
			class xx_ACE_CableTie{
				name = "ACE_CableTie";
				count = 8;
			};
			class xx_ACE_EntrenchingTool{
				name = "ACE_EntrenchingTool";
				count = 4;
			};
			class xx_ACE_Fortify{
				name = "ACE_Fortify";
				count = 2;
			};
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 32;
			};
			class xx_SmokeShellBlue{
				name = "SmokeShellBlue";
				count = 16;
			};
			class xx_SmokeShellGreen{
				name = "SmokeShellGreen";
				count = 16;
			};
			class xx_SmokeShellOrange{
				name = "SmokeShellOrange";
				count = 16;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 16;
			};
			class xx_SmokeShellRed{
				name = "SmokeShellRed";
				count = 16;
			};
			class xx_SmokeShellYellow{
				name = "SmokeShellYellow";
				count = 16;
			};
		};
	};

	class SR_SupplyPod_Tactical: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Tactical Resupply";
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 200;
			};
			class xx_Primaris_Dos_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_Bolt_RifleMag";
				count = 200;
			};
			class xx_TIOW_SM_Rocket_Frag_Mag
			{
				magazine = "TIOW_SM_Rocket_Frag_Mag";
				count = 20;
			};
			class xx_TIOW_SM_Rocket_Krak_Mag
			{
				magazine = "TIOW_SM_Rocket_Krak_Mag";
				count = 20;
			};
			class xx_Steve_Sm_Solid
			{
				magazine = "Steve_Sm_Solid";
				count = 50;
			};
			class xx_Steve_Sm_Pellet
			{
				magazine = "Steve_Sm_Pellet";
				count = 50;
			};
			class xx_Steve_Trig_Exitus_BoltgunMag
			{
				magazin = "Steve_Trig_Exitus_BoltgunMag";
				count = 50;
			};
			class xx_Steve_Trig_Exitus_BoltgunMag_K
			{
				magazine = "Steve_Trig_Exitus_BoltgunMag_K";
				count = 20;
			};
			class xx_Steve_Trig_Exitus_BoltgunMag_DF
			{
				magazine = "Steve_Trig_Exitus_BoltgunMag_DF";
				count = 20;
			};
			class xx_Steve_Trig_Exitus_BoltgunMag_INF
			{
				magazine = "Steve_Trig_Exitus_BoltgunMag_INF";
				count = 20;
			};
			class xx_Primaris_Dos_S_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_S_Bolt_RifleMag";
				count = 50;
			};
			class xx_SR_Lascutter_Mag
			{
				magazine = "SR_Lascutter_Mag";
				count = 50;
			};
			class xx_Steve_Phob_BoltgunMag
			{
				magazine = "Steve_Phob_BoltgunMag";
				count = 100;
			};
			class xx_Steve_Phob_BoltgunMag_K
			{
				magazine = "Steve_Phob_BoltgunMag_K";
				count = 100;
			};
			class xx_Steve_Phob_BoltgunMag_DF
			{
				magazine = "Steve_Phob_BoltgunMag_DF";
				count = 100;
			};
			class xx_Primaris_Dos_H_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_H_Bolt_RifleMag";
				count = 100;
			};
			class xx_Primaris_Dos_C_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_C_Bolt_RifleMag";
				count = 100;
			};
			class xx_SR_Meltagun_Mag
			{
				magazine = "SR_Meltagun_Mag";
				count = 50;
			};
			class xx_TIOW_SM_Plasmagun_Mag
			{
				magazine = "TIOW_SM_Plasmagun_Mag";
				count = 50;
			};
			class xx_TIOW_SM_Overcharge_Plasmagun_Mag
			{
				magazine = "TIOW_SM_Overcharge_Plasmagun_Mag";
				count = 30;
			};
			class xx_TIOW_SM_Storm_Clip_Mag
			{
				magazine = "TIOW_SM_Storm_Clip_Mag";
				count = 80;
			};
			class xx_TIOW_SM_Storm_Box_Mag
			{
				magazine = "TIOW_SM_Storm_Box_Mag";
				count = 50;
			};
			class xx_Steve_SM_Plasmagun_Mag
			{
				magazine = "Steve_SM_Plasmagun_Mag";
				count = 50;
			};
			class xx_Steve_SM_Overcharge_Plasmagun_Mag
			{
				magazine = "Steve_SM_Overcharge_Plasmagun_Mag";
				count = 30;
			};
			class xx_Steve_Trig_BoltgunMag
			{
				magazine = "Steve_Trig_BoltgunMag";
				count = 100;
			};
			class xx_Steve_Trig_BoltgunMag_K
			{
				magazine = "Steve_Trig_BoltgunMag_K";
				count = 100;
			};
			class xx_Steve_Trig_BoltgunMag_DF
			{
				magazine = "Steve_Trig_BoltgunMag_DF";
				count = 100;
			};
			class xx_Steve_Trig_BoltgunMag_INF
			{
				magazine = "Steve_Trig_BoltgunMag_INF";
				count = 100;
			};
			class xx_Steve_30k_Meltagun_Mag
			{
				magazine = "Steve_30k_Meltagun_Mag";
				count = 50;
			};
			class xx_TIOW_CombiPlas_Mag
			{
				magazine = "TIOW_CombiPlas_Mag";
				count = 20;
			};
			class xx_TIOW_CombiPlas_OVER_Mag
			{
				magazine = "TIOW_CombiPlas_OVER_Mag";
				count = 10;
			};
			class xx_Steve_Trig_NewCombiBoltgunMag
			{
				magazine = "Steve_Trig_NewCombiBoltgunMag";
				count = 100;
			};
			class xx_Steve_Trig_NewCombiBoltgunMag_K
			{
				magazine = "Steve_Trig_NewCombiBoltgunMag_K";
				count = 20;
			};
			class xx_Steve_Trig_NewCombiBoltgunMag_DF
			{
				magazine = "Steve_Trig_NewCombiBoltgunMag_DF";
				count = 20;
			};
			class xx_Steve_Trig_NewCombiBoltgunMag_INF
			{
				magazine = "Steve_Trig_NewCombiBoltgunMag_INF";
				count = 20;
			};
			class xx_Steve_30k_Tig_Combi_Mag
			{
				magazine = "Steve_30k_Tig_Combi_Mag";
				count = 50;
			};
			class xx_Steve_30k_CombiPlas_Mag
			{
				magazine = "Steve_30k_CombiPlas_Mag";
				count = 20;
			};
			class xx_Steve_30k_CombiPlasOVER_Mag
			{
				magazine = "Steve_30k_CombiPlasOVER_Mag";
				count = 10;
			};
			class xx_Steve_30k_CombiMelta_Mag
			{
				magazine = "Steve_30k_CombiMelta_Mag";
				count = 20;
			};
		};
		class TransportWeapons
		{
			class xx_TIOW_GodwynBoltgun_2
			{
				weapon = "TIOW_GodwynBoltgun_2";
				count = 5;
			};
			class xx_Primaris_Dos_Bolt_Rifle
			{
				weapon = "Primaris_Dos_Bolt_Rifle";
				count = 5;
			};
			class xx_Web_Melee_KnifeSM
			{
				weapon = "Web_Melee_KnifeSM";
				count = 5;
			};
			class xx_TIOW_SM_Rocket_1
			{
				weapon = "TIOW_SM_Rocket_1";
				count = 1;
			};
			class xx_Steve_Shotgun_1
			{
				weapon = "Steve_Shotgun_1";
				count = 2;
			};
			class xx_Steve_NewExitus_1
			{
				weapon = "Steve_NewExitus_1";
				cout = 1;
			};
			class xx_SR_Lascut
			{
				weapon = "SR_Lascut";
				count = 1;
			};
			class xx_SR_Meltagun_1
			{
				weapon = "SR_Meltagun_1";
				count = 1;
			};
			class xx_TIOW_SM_Ragefire_PlasmaGun
			{
				weapon = "TIOW_SM_Ragefire_PlasmaGun";
				count = 1;
			};
			class xx_TIOW_SM_Storm_Bolt_1
			{
				weapon = "TIOW_SM_Storm_Bolt_1";
				count = 1;
			};
		};
		class TransportItems
		{
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 16;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
				count = 16;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_splint{
				name = "ACE_splint";
				count = 16;
			};
			class xx_ACE_tourniquet{
				name = "ACE_tourniquet";
				count = 16;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_AV_AdrenalStims{
				name = "AV_AdrenalStims";
				count = 16;
			};
			class xx_ACE_CableTie{
				name = "ACE_CableTie";
				count = 8;
			};
			class xx_ACE_EntrenchingTool{
				name = "ACE_EntrenchingTool";
				count = 4;
			};
			class xx_ACE_Fortify{
				name = "ACE_Fortify";
				count = 2;
			};
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 32;
			};
			class xx_SmokeShellBlue{
				name = "SmokeShellBlue";
				count = 16;
			};
			class xx_SmokeShellGreen{
				name = "SmokeShellGreen";
				count = 16;
			};
			class xx_SmokeShellOrange{
				name = "SmokeShellOrange";
				count = 16;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 16;
			};
			class xx_SmokeShellRed{
				name = "SmokeShellRed";
				count = 16;
			};
			class xx_SmokeShellYellow{
				name = "SmokeShellYellow";
				count = 16;
			};
		};
	};

	class SR_SupplyPod_Devastator: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Devastator Resupply";
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 100;
			};
			class xx_Primaris_Dos_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_Bolt_RifleMag";
				count = 100;
			};
			class xx_TIOW_SM_Rocket_Frag_Mag
			{
				magazine = "TIOW_SM_Rocket_Frag_Mag";
				count = 30;
			};
			class xx_TIOW_SM_Rocket_Krak_Mag
			{
				magazine = "TIOW_SM_Rocket_Krak_Mag";
				count = 30;
			};
			class xx_STEVE_30k_Rocket_Frag_Mag
			{
				magazine = "STEVE_30k_Rocket_Frag_Mag";
				count = 30;
			};
			class xx_STEVE_30k_Rocket_Krak_Mag
			{
				magazine = "STEVE_30k_Rocket_Krak_Mag";
				count = 30;
			};
			class xx_TIOW_Mars_HeavyBolterMag_85rnd
			{
				magazine = "TIOW_Mars_HeavyBolterMag_85rnd";
				count = 200;
			};
			class xx_Steve_SM_Lascannon_Mag
			{
				magazine = "Steve_SM_Lascannon_Mag";
				count = 50;
			};
			class xx_Steve_Rotor_Cannon_Mag
			{
				magazine = "Steve_Rotor_Cannon_Mag";
				count = 80;
			};
			class xx_Steve_30k_MultiMelta_Mag
			{
				magazine = "Steve_30k_MultiMelta_Mag";
				count = 80;
			};
			class xx_TIOW_SM_PlasmaCannon_Mag
			{
				magazine = "TIOW_SM_PlasmaCannon_Mag";
				count = 80;
			};
			class xx_TIOW_SM_PlasmaCannon_Mag_OC
			{
				magazine = "TIOW_SM_PlasmaCannon_Mag_OC";
				count = 50;
			};
			class xx_STEVE_30k_PlasmaCannon_Mag
			{
				magazine = "STEVE_30k_PlasmaCannon_Mag";
				count = 80;
			};
			class xx_STEVE_30k_PlasmaCannon_OC_Mag
			{
				magazine = "STEVE_30k_PlasmaCannon_OC_Mag";
				count = 50;
			};
			class xx_STEVE_Autocannon12RndHEMag
			{
				magazine = "STEVE_Autocannon12RndHEMag";
				count = 120;
			};
		};
		class TransportWeapons
		{
			class xx_TIOW_GodwynBoltgun_2
			{
				weapon = "TIOW_GodwynBoltgun_2";
				count = 5;
			};
			class xx_Primaris_Dos_Bolt_Rifle
			{
				weapon = "Primaris_Dos_Bolt_Rifle";
				count = 5;
			};
			class xx_Web_Melee_KnifeSM
			{
				weapon = "Web_Melee_KnifeSM";
				count = 5;
			};
			class xx_TIOW_SM_Rocket_1
			{
				weapon = "TIOW_SM_Rocket_1";
				count = 1;
			};
			class xx_TIOW_Mars_HeavyBolter
			{
				weapon = "TIOW_Mars_HeavyBolter";
				count = 3;
			};
			class xx_Steve_SM_Lascan_01
			{
				weapon = "Steve_SM_Lascan_01";
				count = 1;
			};
		};
		class TransportItems
		{
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 16;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
				count = 16;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_splint{
				name = "ACE_splint";
				count = 16;
			};
			class xx_ACE_tourniquet{
				name = "ACE_tourniquet";
				count = 16;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_AV_AdrenalStims{
				name = "AV_AdrenalStims";
				count = 16;
			};
			class xx_ACE_CableTie{
				name = "ACE_CableTie";
				count = 8;
			};
			class xx_ACE_EntrenchingTool{
				name = "ACE_EntrenchingTool";
				count = 4;
			};
			class xx_ACE_Fortify{
				name = "ACE_Fortify";
				count = 2;
			};
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 32;
			};
			class xx_SmokeShellBlue{
				name = "SmokeShellBlue";
				count = 16;
			};
			class xx_SmokeShellGreen{
				name = "SmokeShellGreen";
				count = 16;
			};
			class xx_SmokeShellOrange{
				name = "SmokeShellOrange";
				count = 16;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 16;
			};
			class xx_SmokeShellRed{
				name = "SmokeShellRed";
				count = 16;
			};
			class xx_SmokeShellYellow{
				name = "SmokeShellYellow";
				count = 16;
			};
		};
	};

	class SR_SupplyPod_Assault: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Assault Resupply";
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 100;
			};
			class xx_Primaris_Dos_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_Bolt_RifleMag";
				count = 100;
			};
			class xx_Steve_Trig_BoltPistolMag
			{
				magazine = "Steve_Trig_BoltPistolMag";
				count = 100;
			};
			class xx_Steve_Trig_BoltPistolMag_K
			{
				magazine = "Steve_Trig_BoltPistolMag_K";
				count = 20;
			};
			class xx_Steve_Trig_BoltPistolMag_DF
			{
				magazine = "Steve_Trig_BoltPistolMag_DF";
				count = 20;
			};
			class xx_Steve_Phob_BoltPistolMag
			{
				magazine = "Steve_Phob_BoltPistolMag";
				count = 100;
			};
			class xx_Steve_Phob_BoltPistolMag_K
			{
				magazine = "Steve_Phob_BoltPistolMag_K";
				count = 20;
			};
			class xx_Steve_Phob_BoltPistolMag_DF
			{
				magazine = "Steve_Phob_BoltPistolMag_DF";
				count = 20;
			};
			class xx_Steve_SM_PlasmaPistol_Mag
			{
				magazine = "Steve_SM_PlasmaPistol_Mag";
				count = 50;
			};
			class xx_Steve_SM_Overcharge_PlasmaPistol_Mag
			{
				magazine = "Steve_SM_Overcharge_PlasmaPistol_Mag";
				count = 30;
			};
		};
		class TransportWeapons
		{
			class xx_TIOW_GodwynBoltgun_2
			{
				weapon = "TIOW_GodwynBoltgun_2";
				count = 5;
			};
			class xx_Primaris_Dos_Bolt_Rifle
			{
				weapon = "Primaris_Dos_Bolt_Rifle";
				count = 5;
			};
			class xx_Web_Melee_KnifeSM
			{
				weapon = "Web_Melee_KnifeSM";
				count = 5;
			};
			class xx_STEVE_30k_Tig_Pistol
			{
				weapon = "STEVE_30k_Tig_Pistol";
				count = 5;
			};
			class xx_Web_Melee_Chain_Test
			{
				weapon = "Web_Melee_Chain_Test";
				count = 5;
			};
			class xx_Web_Melee_PowerFists
			{
				weapon = "Web_Melee_PowerFists";
				count = 1;
			};
		};
		class TransportItems
		{
			class xx_30k_Steve_Jump_Pack_5_5
			{
				name = "30k_Steve_Jump_Pack_5_5";
				count = 12;
			};
			class xx_AOD_L_GravFuel{
				name = "AOD_L_GravFuel";
				count = 64;
			};
			class xx_AOD_M_GravFuel{
				name = "AOD_M_GravFuel";
				count = 64;
			};
			class xx_Steve_30k_Combat_S_1_NVG
			{
				name = "Steve_30k_Combat_S_1_NVG";
				count = 5;
			};
			class xx_Web_SM_Storm_S_6_NVG
			{
				name = "Web_SM_Storm_S_6_NVG";
				count = 2;
			};
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 16;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
				count = 16;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_splint{
				name = "ACE_splint";
				count = 16;
			};
			class xx_ACE_tourniquet{
				name = "ACE_tourniquet";
				count = 16;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_AV_AdrenalStims{
				name = "AV_AdrenalStims";
				count = 16;
			};
			class xx_ACE_CableTie{
				name = "ACE_CableTie";
				count = 8;
			};
			class xx_ACE_EntrenchingTool{
				name = "ACE_EntrenchingTool";
				count = 4;
			};
			class xx_ACE_Fortify{
				name = "ACE_Fortify";
				count = 2;
			};
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 32;
			};
			class xx_SmokeShellBlue{
				name = "SmokeShellBlue";
				count = 16;
			};
			class xx_SmokeShellGreen{
				name = "SmokeShellGreen";
				count = 16;
			};
			class xx_SmokeShellOrange{
				name = "SmokeShellOrange";
				count = 16;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 16;
			};
			class xx_SmokeShellRed{
				name = "SmokeShellRed";
				count = 16;
			};
			class xx_SmokeShellYellow{
				name = "SmokeShellYellow";
				count = 16;
			};
		};
	};

	class SR_SupplyPod_Command: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Command Resupply";
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 100;
			};
			class xx_Primaris_Dos_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_Bolt_RifleMag";
				count = 100;
			};
			class xx_TIOW_SM_Storm_Box_Mag
			{
				magazine = "TIOW_SM_Storm_Box_Mag";
				count = 20;
			};
			class xx_Steve_Trig_BoltgunMag
			{
				magazine = "Steve_Trig_BoltgunMag";
				count = 60;
			};
			class xx_Steve_30k_Tig_Combi_Mag
			{
				magazine = "Steve_30k_Tig_Combi_Mag";
				count = 40;
			};
			class xx_Steve_30k_CombiMelta_Mag
			{
				magazine = "Steve_30k_CombiMelta_Mag";
				count = 40;
			};
			class xx_Steve_30k_CombiPlas_Mag
			{
				magazine = "Steve_30k_CombiPlas_Mag";
				count = 40;
			};

		};
		class TransportWeapons
		{
			class xx_TIOW_GodwynBoltgun_2
			{
				weapon = "TIOW_GodwynBoltgun_2";
				count = 5;
			};
			class xx_Primaris_Dos_Bolt_Rifle
			{
				weapon = "Primaris_Dos_Bolt_Rifle";
				count = 5;
			};
			class xx_Web_Melee_KnifeSM
			{
				weapon = "Web_Melee_KnifeSM";
				count = 5;
			};
		};
		class TransportItems
		{
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 16;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
				count = 16;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_splint{
				name = "ACE_splint";
				count = 16;
			};
			class xx_ACE_tourniquet{
				name = "ACE_tourniquet";
				count = 16;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_AV_AdrenalStims{
				name = "AV_AdrenalStims";
				count = 16;
			};
			class xx_ACE_CableTie{
				name = "ACE_CableTie";
				count = 8;
			};
			class xx_ACE_EntrenchingTool{
				name = "ACE_EntrenchingTool";
				count = 4;
			};
			class xx_ACE_Fortify{
				name = "ACE_Fortify";
				count = 2;
			};
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 32;
			};
			class xx_SmokeShellBlue{
				name = "SmokeShellBlue";
				count = 16;
			};
			class xx_SmokeShellGreen{
				name = "SmokeShellGreen";
				count = 16;
			};
			class xx_SmokeShellOrange{
				name = "SmokeShellOrange";
				count = 16;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 16;
			};
			class xx_SmokeShellRed{
				name = "SmokeShellRed";
				count = 16;
			};
			class xx_SmokeShellYellow{
				name = "SmokeShellYellow";
				count = 16;
			};
		};
	};

	class SR_SupplyPod_Medical: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Medical Resupply";
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 100;
			};
			class xx_Primaris_Dos_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_Bolt_RifleMag";
				count = 100;
			};
		};
		class TransportWeapons
		{
			class xx_TIOW_GodwynBoltgun_2
			{
				weapon = "TIOW_GodwynBoltgun_2";
				count = 5;
			};
			class xx_Primaris_Dos_Bolt_Rifle
			{
				weapon = "Primaris_Dos_Bolt_Rifle";
				count = 5;
			};
			class xx_Web_Melee_KnifeSM
			{
				weapon = "Web_Melee_KnifeSM";
				count = 5;
			};
		};
		class TransportItems
		{
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 80;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
				count = 80;
			};
			class xx_ACE_bloodIV{
				name = "ACE_bloodIV";
				count = 32;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 64;
			};
			class xx_ACE_bloodIV_250{
				name = "ACE_bloodIV_250";
				count = 32;
			};
			class xx_ACE_splint{
				name = "ACE_splint";
				count = 80;
			};
			class xx_ACE_tourniquet{
				name = "ACE_tourniquet";
				count = 80;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 160;
			};
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 80;
			};
			class xx_AV_AdrenalStims{
				name = "AV_AdrenalStims";
				count = 80;
			};
			class xx_adv_aceCPR_AED{
				name = "adv_aceCPR_AED";
				count = 80;
			};
			class xx_SR_Item_TraumaClearer{
				name = "SR_Item_TraumaClearer";
				count = 80;
			};
			class xx_SR_Item_InfiBlood{
				name = "SR_Item_InfiBlood";
				count = 80;
			};
			class xx_ACE_CableTie{
				name = "ACE_CableTie";
				count = 8;
			};
			class xx_ACE_EntrenchingTool{
				name = "ACE_EntrenchingTool";
				count = 4;
			};
			class xx_ACE_Fortify{
				name = "ACE_Fortify";
				count = 2;
			};
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 32;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 32;
			};
			class xx_SmokeShellBlue{
				name = "SmokeShellBlue";
				count = 16;
			};
			class xx_SmokeShellGreen{
				name = "SmokeShellGreen";
				count = 16;
			};
			class xx_SmokeShellOrange{
				name = "SmokeShellOrange";
				count = 16;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 16;
			};
			class xx_SmokeShellRed{
				name = "SmokeShellRed";
				count = 16;
			};
			class xx_SmokeShellYellow{
				name = "SmokeShellYellow";
				count = 16;
			};
		};
	};
};
