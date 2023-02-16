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
		displayName = "[SR] Empty Resupply";
		author = "Tengu";
		maximumLoad = 40000;
		ACE_maxWeightCarry = 40000;
		ACE_maxWeightDrag = 40000;
		editorCategory = "SR_EditorCategory_Solar_Reavers";
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
		displayName = "[SR] Recon Resupply";
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
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
			class xx_Steve_Trig_Exitus_BoltgunMag
			{
				magazine = "Steve_Trig_Exitus_BoltgunMag";
				count = 70;
			};
			class xx_Steve_Phob_Atrox_BoltgunMag
			{
				magazine = "Steve_Phob_Atrox_BoltgunMag";
				count = 20;
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
			class xx_TIOW_Mars_HeavyBolterMag_85rnd
			{
				magazine = "TIOW_Mars_HeavyBolterMag_85rnd";
				count = 15;
			};
		};
		class TransportWeapons
		{
			class xx_TIOW_SM_Rocket_1
			{
				weapon = "TIOW_SM_Rocket_1";
				count = 1;
			};
			class xx_TIOW_SM_Rocket_1
			{
				weapon = "TIOW_Mars_HeavyBolter";
				count = 1;
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
				count = 2;
			};
			class xx_ACE_elasticBandage{
				name = "ACE_elasticBandage";
				count = 25;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 6;
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
		};
	};

	class SR_SupplyPod_Tactical: SR_SupplyPod_Empty
	{
		displayName = "[SR] Tactical Resupply";
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 100;
			};
			class xx_Steve_Phob_BoltgunMag
			{
				magazine = "Steve_Phob_BoltgunMag";
				count = 40;
			};
			class xx_TIOW_Mars_HeavyBolterMag_85rnd
			{
				magazine = "TIOW_Mars_HeavyBolterMag_85rnd";
				count = 20;
			};
			class xx_TIOW_SM_Plasmagun_Mag
			{
				magazine = "TIOW_SM_Plasmagun_Mag";
				count = 60;
			};
			class xx_SR_Meltagun_Mag
			{
				magazine = "SR_Meltagun_Mag";
				count = 20;
			};
			class xx_SR_Master_Crafted_Meltagun_Mag
			{
				magazine = "SR_Master_Crafted_Meltagun_Mag";
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
				count = 25;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 6;
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
		};
	};

	class SR_SupplyPod_Devastator: SR_SupplyPod_Empty
	{
		displayName = "[SR] Devastator Resupply";
		class TransportMagazines
		{
			class xx_TIOW_Mars_HeavyBolterMag_85rnd
			{
				magazine = "TIOW_Mars_HeavyBolterMag_85rnd";
				count = 60;
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
			class xx_Steve_SM_Lascannon_Mag
			{
				magazine = "Steve_SM_Lascannon_Mag";
				count = 20;
			};
			class xx_Steve_30k_MultiMelta_Mag
			{
				magazine = "Steve_30k_MultiMelta_Mag";
				count = 20;
			};
			class xx_Steve_Rotor_Cannon_Mag
			{
				magazine = "Steve_Rotor_Cannon_Mag";
				count = 20;
			};
			class xx_TIOW_SM_PlasmaCannon_Mag
			{
				magazine = "TIOW_SM_PlasmaCannon_Mag";
				count = 20;
			};
			class xx_BT_AC_Relic_APMag
			{
				magazine = "BT_AC_Relic_APMag";
				count = 20;
			};
			class xx_BT_AC_Relic_APCRMag
			{
				magazine = "BT_AC_Relic_APCRMag";
				count = 20;
			};
			class xx_BT_AC_Relic_HEMag
			{
				magazine = "BT_AC_Relic_HEMag";
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
				count = 25;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 6;
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
		};
	};

	class SR_SupplyPod_Assault: SR_SupplyPod_Empty
	{
		displayName = "[SR] Assault Resupply";
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
//			class xx_SR_Master_Crafted_Phobos_BoltPistol_Mag
//			{
//				magazine = "SR_Master_Crafted_Phobos_BoltPistol_Mag";
//				count = 20;
//			};
//			class xx_SR_Master_Crafted_Tigrus_BoltPistol_Mag
//			{
//				magazine = "SR_Master_Crafted_Tigrus_BoltPistol_Mag";
//				count = 20;
//			};
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
				count = 25;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 6;
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
		};
	};

	class SR_SupplyPod_Command: SR_SupplyPod_Empty
	{
		displayName = "[SR] Command Resupply";
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 20;
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
		{};
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
				count = 25;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 6;
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
		};
	};

	class SR_SupplyPod_Medical: SR_SupplyPod_Empty
	{
		displayName = "[SR] Medical Resupply";
		class TransportMagazines
		{
			class xx_TIOW_30rnd_GodwynBoltgunMag
			{
				magazine = "TIOW_30rnd_GodwynBoltgunMag";
				count = 40;
			};

		};
		class TransportWeapons
		{
			class xx_TIOW_GodwynBoltgun_6
			{
				weapon = "TIOW_GodwynBoltgun_6";
				count = 1;
			};
		};
		class TransportItems
		{
			class xx_TIOW_sm_frag_grenade_mag{
				magazine = "TIOW_sm_frag_grenade_mag";
				name = 8;
			};
			class xx_TIOW_sm_krak_grenade_mag{
				magazine = "TIOW_sm_krak_grenade_mag";
				name = 8;
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
				count = 250;
			};
			class xx_ACE_bloodIV_500{
				name = "ACE_bloodIV_500";
				count = 50;
			};
			class xx_ACE_adenosine{
				name = "ACE_adenosine";
				count = 50;
			};
			class xx_ACE_morphine{
				name = "ACE_morphine";
				count = 50;
			};
			class xx_ACE_epinephrine{
				name = "ACE_epinephrine";
				count = 50;
			};
			class xx_ACE_splint{
				name = "ACE_splint";
				count = 50;
			};
			class xx_ACE_tourniquet{
				name = "ACE_tourniquet";
				count = 50;
			};
//			class xx_XI_p_TombRobber{
//				name = "XI_p_TombRobber";
//				count = 20;
//			};
//			class xx_XI_p_SealNGo{
//				name = "XI_p_SealNGo";
//				count = 40;
//			};
//			class xx_XI_p_Sealant{
//				name = "XI_p_Sealant";
//				count = 40;
//			};
		};
	};
};