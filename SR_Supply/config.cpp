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
			"SR_Vehicle_Service",
			"SR_SupplyPod_Empty",
			"SR_SupplyPod_Seeker",
			"SR_SupplyPod_Marauder",
			"SR_SupplyPod_Breacher",
			"SR_SupplyPod_Tactical",
			"SR_SupplyPod_Devastator",
			"SR_SupplyPod_Assault",
			"SR_SupplyPod_Medical"
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
//				count = 40;
//			};
//			class xx_ACE_bloodIV_500{
//				name = "ACE_bloodIV_500";
//				count = 8;
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
//			class xx_SR_AdrenalStims{
//				name = "SR_AdrenalStims";
//				count = 16;
//			};
//			class xx_SR_Item_TraumaClearer{
//				name = "SR_Item_TraumaClearer";
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


class CfgFunctions {
	class SR_Servicing
	{
		class SR_ServicingBox
		{
			class canService
			{
				file = "\SR_Supply\Scripts\fn_canService.sqf";
			};
			class service
			{
				file = "\SR_Supply\Scripts\fn_service.sqf";
			};
		};
	};
};
//	class Bones
//	{
//		class Servicing
//		{
//			class canService
//			{
//				file = "\SR_Supply\Scripts\fn_canService.sqf";
//			};
//			class service
//			{
//				file = "\SR_Supply\Scripts\fn_service.sqf";
//			};
//		};
//	};
//};

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




	class LandVehicle;
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class arca_aircraft_service
				{
					displayName = "Service Vehicle";
					condition = "_this call SR_Servicing_fnc_canService";
					statement = "_this call SR_Servicing_fnc_service";
					icon = "";
				};
			};
		};
	};
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class arca_aircraft_service
				{
					displayName = "Service Vehicle";
					condition = "_this call SR_Servicing_fnc_canService";
					statement = "_this call SR_Servicing_fnc_service";
					icon = "";
				};
			};
		};
	};
	class Air;
	class Helicopter: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class arca_aircraft_service
				{
					displayName = "Service Vehicle";
					condition = "_this call SR_Servicing_fnc_canService";
					statement = "_this call SR_Servicing_fnc_service";
					icon = "";
				};
			};
		};
	};
	class Plane: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class arca_aircraft_service
				{
					displayName = "Service Vehicle";
					condition = "_this call SR_Servicing_fnc_canService";
					statement = "_this call SR_Servicing_fnc_service";
					icon = "";
				};
			};
		};
	};









	class Box_NATO_Wps_F;
	class SR_Vehicle_Service: Box_NATO_Wps_F
	{
		author = "Mokka";
		displayName = "[TSR] Vehicle Servicing Kit";
		arca_aircraft_canService = 1;
		arca_aircraft_service_repairOnly = 0;
		maximumLoad = 100;
		class TransportBackpacks{};
		class TransportItems{};
		class TransportMagazines{};
		class TransportWeapons{};
	};









class NATO_Box_Base;
class OPTRE_Ammo_Rack_Weapons;
	class SR_SupplyPod_Empty: NATO_Box_Base
	{
		displayName = "[TSR] Empty Resupply";
		author = "Tengu";
		maximumLoad = 400000;
		ACE_maxWeightCarry = 400000;
		ACE_maxWeightDrag = 400000;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "SR_EdSubcat_Supply";
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		transportMaxMagazines = 10000;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\OPTRE_Misc\Crates\data\SupplyPod_co.paa"};
		icon = "\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		supplyRadius = 2.5;
		armor = 10000;
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};


	class SR_SupplyPod_Seeker: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Seeker Resupply";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"SR_Supply\Textures\SupplyPod_Seeker_CO.paa"};
		class TransportMagazines
		{
			class xx_Steve_Trig_Exitus_BoltgunMag
			{
				magazine = "Steve_Trig_Exitus_BoltgunMag";
				count = 70;
			};
            class xx_Primaris_Dos_S_Bolt_RifleMag
            {
                magazine = "Primaris_Dos_S_Bolt_RifleMag";
                count = 70;
            }
			class xx_Steve_Phob_Atrox_BoltgunMag
			{
				magazine = "Steve_Phob_Atrox_BoltgunMag";
				count = 30;
			};
			class xx_Steve_30k_combi_seek_Mag
			{
				magazine = "Steve_30k_combi_seek_Mag";
				count = 30;
			};
			class xx_Steve_30k_Tig_Combi_Mag
			{
				magazine = "Steve_30k_Tig_Combi_Mag";
				count = 30;
			};
			class xx_SR_LasFusil_Mag
			{
				magazine = "SR_LasFusil_Mag";
				count = 40;
			};
			class xx_TIOW_SM_Rocket_Frag_Mag
			{
				magazine = "TIOW_SM_Rocket_Frag_Mag";
				count = 15;
			};
			class xx_TIOW_SM_Rocket_Krak_Mag
			{
				magazine = "TIOW_SM_Rocket_Krak_Mag";
				count = 10;
			};

		};
		class TransportWeapons
		{

		};
		class TransportItems
		{
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 8;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 2;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_adenosine{
				name = "ACE_adenosine";
				count = 8;
			};
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 8;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
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
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_SR_Item_TraumaClearer{
				name = "SR_Item_TraumaClearer";
				count = 16;
			};
		};
	};


	class SR_SupplyPod_Marauder: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Marauder Resupply";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SR_Supply\Textures\SupplyPod_Marauder_CO.paa"};
		class TransportMagazines
		{
			class xx_SR_Lascutter_Mag
			{
				magazine = "SR_Lascutter_Mag";
				count = 70;
			};
			class xx_Primaris_Dos_H_Bolt_RifleMag
			{
				magazine = "Primaris_Dos_H_Bolt_RifleMag";
				count = 20;
			};
			class xx_Steve_Rotor_Cannon_Mag
			{
				magazine = "Steve_Rotor_Cannon_Mag";
				count = 20;
			};
			class xx_TIOW_SM_Storm_Box_Mag
			{
				magazine = "TIOW_SM_Storm_Box_Mag";
				count = 20;
			};
			class xx_TIOW_SM_Storm_Clip_Mag
			{
				magazine = "TIOW_SM_Storm_Clip_Mag";
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
			class xx_TIOW_SM_Rocket_Frag_Mag
			{
				magazine = "TIOW_SM_Rocket_Frag_Mag";
				count = 15;
			};
			class xx_TIOW_SM_Rocket_Krak_Mag
			{
				magazine = "TIOW_SM_Rocket_Krak_Mag";
				count = 10;
			};

		};
		class TransportWeapons
		{

		};
		class TransportItems
		{
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 8;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 2;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_adenosine{
				name = "ACE_adenosine";
				count = 8;
			};
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 8;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
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
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_SR_Item_TraumaClearer{
				name = "SR_Item_TraumaClearer";
				count = 16;
			};
		};
	};






//[Astartes] Bolter-Plasma Combi



	class SR_SupplyPod_Tactical: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Tactical Resupply";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SR_Supply\Textures\SupplyPod_Tactical_CO.paa"};
		class TransportMagazines
		{

			class xx_TIOW_30rnd_GodwynBoltgunMag // Godwyn Boltgun
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 100;
			};
			class xx_Steve_Phob_BoltgunMag // Phobos Boltgun
			{
				magazine = "Steve_Phob_BoltgunMag";
				count = 40;
			};
			class xx_Steve_Trig_BoltgunMag // Tigrus Boltgun
			{
				magazine = "Steve_Trig_BoltgunMag";
				count = 70;
			};
			class xx_Steve_30k_combi_seek_Mag // Tigrus Seeker Ammo.
			{
				magazine = "Steve_30k_combi_seek_Mag";
				count = 30;
			};
			class xx_Steve_30k_Tig_Combi_Mag // Tigrus Combi Boltgun
			{
				magazine = "Steve_30k_Tig_Combi_Mag";
				count = 30;
			};
			class xx_Steve_Trig_Exitus_BoltgunMag // Tigrus Exitus Boltgun
			{
				magazine = "Steve_Trig_Exitus_BoltgunMag";
				count = 70;
			};
			class xx_TIOW_Mars_HeavyBolterMag_85rnd // Heavy Bolter
			{
				magazine = "TIOW_Mars_HeavyBolterMag_85rnd";
				count = 20;
			};
			class xx_Steve_Rotor_Cannon_Mag // Rotor Cannon
			{
				magazine = "Steve_Rotor_Cannon_Mag";
				count = 20;
			};
			class xx_SR_Meltagun_Mag // Meltagun
			{
				magazine = "SR_Meltagun_Mag";
				count = 20;
			};
			class xx_SR_Lascutter_Mag // Lascutter
			{
				magazine = "SR_Lascutter_Mag";
				count = 70;
			};
			class xx_TIOW_SM_Plasmagun_Mag // Ragefire Plasma Gun
			{
				magazine = "TIOW_SM_Plasmagun_Mag";
				count = 60;
			};
			class xx_TIOW_CombiPlas_Mag // Ragefire Plasma Gun
			{
				magazine = "TIOW_CombiPlas_Mag";
				count = 60;
			};
			class xx_Steve_SM_Plasmagun_Mag // Ryza Thunderbolt Plasma Gun
			{
				magazine = "Steve_SM_Plasmagun_Mag";
				count = 60;
			};
			class xx_Steve_Sm_Pellet // Shotgun Buckshot
			{
				magazine = "Steve_Sm_Pellet";
				count = 40;
			};
			class xx_Steve_Sm_Solid // Shotgun Slugs
			{
				magazine = "Steve_Sm_Solid";
				count = 40;
			};
			class xx_TIOW_SM_Rocket_Frag_Mag // Missile Frag
			{
				magazine = "TIOW_SM_Rocket_Frag_Mag";
				count = 15;
			};
			class xx_TIOW_SM_Rocket_Krak_Mag // Missile Krak
			{
				magazine = "TIOW_SM_Rocket_Krak_Mag";
				count = 10;
			};
			class xx_Steve_30k_Meltagun_Mag // Primus Meltagun
			{
				magazine = "Steve_Steve_30k_Meltagun_Mag";
				count = 20;
			};
			class xx_TIOW_SM_Storm_Box_Mag // Storm Bolter Box
			{
				magazine = "TIOW_SM_Storm_Box_Mag";
				count = 20;
			};
			class xx_TIOW_SM_Storm_Clip_Mag // Storm Bolter Clip
			{
				magazine = "TIOW_SM_Storm_Clip_Mag";
				count = 20;
			};
			class xx_Primaris_Dos_Bolt_RifleMag // BoltRifle
			{
				magazine = "Primaris_Dos_Bolt_RifleMag";
				count = 100;
			};
			class xx_Primaris_Dos_H_Bolt_RifleMag // Auto BoltRifle
			{
				magazine = "Primaris_Dos_H_Bolt_RifleMag";
				count = 100;
			};
			class xx_Primaris_Dos_C_Bolt_RifleMag // Carbine BoltRifle
			{
				magazine = "Primaris_Dos_C_Bolt_RifleMag";
				count = 100;
			};
            class xx_Primaris_Dos_S_Bolt_RifleMag // Stalker BoltRifle
            {
                magazine = "Primaris_Dos_S_Bolt_RifleMag";
                count = 70;
            }
			class xx_Steve_Phob_BoltPistolMag // Phobos Pistol
			{
				magazine = "Steve_Phob_BoltPistolMag";
				count = 50;
			};
			class xx_Steve_Trig_BoltPistolMag // Tigrus Pistol
			{
				magazine = "Steve_Trig_BoltPistolMag";
				count = 50;
			};
			class xx_Steve_SM_PlasmaPistol_Mag // Plasma Pistol
			{
				magazine = "Steve_SM_PlasmaPistol_Mag";
				count = 20;
			};
		};
		class TransportWeapons
		{

		};
		class TransportItems
		{
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 8;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 2;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_adenosine{
				name = "ACE_adenosine";
				count = 8;
			};
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 8;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
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
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_SR_Item_TraumaClearer{
				name = "SR_Item_TraumaClearer";
				count = 16;
			};
		};
	};

	class SR_SupplyPod_Devastator: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Devastator Resupply";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SR_Supply\Textures\SupplyPod_Devastator_CO.paa"};
		class TransportMagazines
		{
			class xx_Steve_30k_MultiMelta_Mag
			{
				magazine = "Steve_30k_MultiMelta_Mag";
				count = 70;
			};
			class xx_Steve_30k_PlasmaCannon_Mag
			{
				magazine = "Steve_30k_PlasmaCannon_Mag";
				count = 70;
			};
			class xx_TIOW_SM_PlasmaCannon_Mag
			{
				magazine = "TIOW_SM_PlasmaCannon_Mag";
				count = 70;
			};
			class xx_Steve_Autocannon12RndHEMag
			{
				magazine = "Steve_Autocannon12RndHEMag";
				count = 70;
			};
			class xx_Steve_SM_Lascannon_Mag
			{
				magazine = "Steve_SM_Lascannon_Mag";
				count = 70;
			};
			class xx_Steve_30k_Rocket_Krak_Mag
			{
				magazine = "Steve_30k_Rocket_Krak_Mag";
				count = 70;
			};
			class xx_Steve_30k_Rocket_Frag_Mag
			{
				magazine = "Steve_30k_Rocket_Frag_Mag";
				count = 70;
			};

		};
		class TransportWeapons
		{

		};
		class TransportItems
		{
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 8;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 2;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_adenosine{
				name = "ACE_adenosine";
				count = 8;
			};
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 8;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
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
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_SR_Item_TraumaClearer{
				name = "SR_Item_TraumaClearer";
				count = 16;
			};
		};
	};















	class SR_SupplyPod_Breacher: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Breacher Resupply";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SR_Supply\Textures\SupplyPod_Breacher_CO.paa"};
		class TransportMagazines
		{
			class xx_SR_Lascutter_Mag
			{
				magazine = "SR_Lascutter_Mag";
				count = 70;
			};
			class xx_Steve_Phob_BoltgunMag
			{
				magazine = "Steve_Phob_BoltgunMag";
				count = 70;
			};
			class xx_Steve_Trig_BoltgunMag
			{
				magazine = "Steve_Trig_BoltgunMag";
				count = 70;
			};

			class xx_Steve_Sm_Pellet
			{
				magazine = "Steve_Sm_Pellet";
				count = 40;
			};
			class xx_Steve_Sm_Solid
			{
				magazine = "Steve_Sm_Solid";
				count = 40;
			};
		};
		class TransportWeapons
		{

		};
		class TransportItems
		{
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 8;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 2;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_adenosine{
				name = "ACE_adenosine";
				count = 8;
			};
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 8;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
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
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_SR_Item_TraumaClearer{
				name = "SR_Item_TraumaClearer";
				count = 16;
			};
		};
	};






















	class SR_SupplyPod_Assault: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Assault Resupply";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SR_Supply\Textures\SupplyPod_Assault_CO.paa"};
		class TransportMagazines
		{
			class xx_Steve_Phob_BoltPistolMag
			{
				magazine = "Steve_Phob_BoltPistolMag";
				count = 50;
			};
			class xx_Steve_Trig_BoltPistolMag
			{
				magazine = "Steve_Trig_BoltPistolMag";
				count = 50;
			};
			class xx_Steve_SM_PlasmaPistol_Mag
			{
				magazine = "Steve_SM_PlasmaPistol_Mag";
				count = 20;
			};
		};
		class TransportWeapons
		{};
		class TransportItems
		{
			class xx_AOD_L_GravFuel{
				name = "AOD_L_GravFuel";
				count = 20;
			};
			class xx_AOD_M_GravFuel{
				name = "AOD_M_GravFuel";
				count = 40;
			};
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 8;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 2;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 40;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 8;
			};
			class xx_ACE_adenosine{
				name = "ACE_adenosine";
				count = 8;
			};
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 8;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
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
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 16;
			};
			class xx_SR_Item_TraumaClearer{
				name = "SR_Item_TraumaClearer";
				count = 16;
			};
		};
	};







	class SR_SupplyPod_Medical: SR_SupplyPod_Empty
	{
		displayName = "[TSR] Medical Resupply";
		hiddenSelectionsTextures[] = {"SR_Supply\Textures\SupplyPod_Medical_CO.paa"};
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 50;
			};
		};
		class TransportWeapons
		{
			class xx_TIOW_GodwynBoltgun_6
			{
				magazine = "TIOW_GodwynBoltgun_6";
				count = 5;
			};
		};
		class TransportItems
		{
			class xx_TIOW_sm_frag_grenade_mag{
				name = "TIOW_sm_frag_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				name = "TIOW_sm_krak_grenade_mag";
				count = 8;
			};
			class xx_TIOW_sm_smoke_grenade_mag{
				name = "TIOW_sm_smoke_grenade_mag";
				count = 8;
			};
			class xx_SmokeShellPurple{
				name = "SmokeShellPurple";
				count = 20;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 100;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 40;
			};
			class xx_ACE_bloodIV{
				name = "ACE_bloodIV";
				count = 20;
			};
			class xx_WBK_NarthBlood{
				name = "WBK_NarthBlood";
				count = 9;
			};
			class xx_ACE_adenosine{
				name = "ACE_adenosine";
				count = 20;
			};
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 20;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
				count = 20;
			};
			class xx_ACE_splint{
				name = "ACE_splint";
				count = 40;
			};
			class xx_ACE_tourniquet{
				name = "ACE_tourniquet";
				count = 40;
			};
			class xx_SR_AdrenalStims{
				name = "SR_AdrenalStims";
				count = 40;
			};
			class xx_SR_Item_TraumaClearer{
				name = "SR_Item_TraumaClearer";
				count = 40;
			};
		};
	};
};