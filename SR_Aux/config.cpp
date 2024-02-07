#define _ARMA_

class CfgPatches
{
	class SR_Aux
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.6;
		version = 0.2;
		requiredAddons[] = {"A3_Characters_F","A3_Data_F_Mark","IC_weapons_base","Ork_Gubbinz_full"};
		author = "Tengu";

		skipWhenMissingDependencies = 1;
	};
};


class cfgWeapons
{
	class ic_feudalArmour_Vest1;
	class TSR_inq_armor1: ic_feudalArmour_Vest1
	{
		author = "Winchester";
		scope = 2;
		displayName = "[TSR] Stormtrooper Armor";
		hiddenSelections[] = {"Camo","camo1"};
		descriptionShort = "Flak Level II";
		hiddenSelectionsTextures[] = {"\IC_Departmento_Munitorum\IC_FeudalGuard\data\ic_feudalArmourBL_co.paa","\SR_Aux\textures\sr_inq_armor1.paa"};
	};
	class TSR_inq_armor2: ic_feudalArmour_Vest1
	{
		author = "Winchester";
		scope = 2;
		displayName = "[TSR] Stormtrooper Armor (TL)";
		hiddenSelections[] = {"Camo","camo1"};
		descriptionShort = "Flak Level II";
		hiddenSelectionsTextures[] = {"\IC_Departmento_Munitorum\IC_FeudalGuard\data\ic_feudalArmourBL_co.paa","\SR_Aux\textures\sr_inq_armor2.paa"};
	};
	class TSR_inq_armor3: ic_feudalArmour_Vest1
	{
		author = "Winchester";
		scope = 2;
		displayName = "[TSR] Stormtrooper Armor (SL)";
		hiddenSelections[] = {"Camo","camo1"};
		descriptionShort = "Flak Level II";
		hiddenSelectionsTextures[] = {"\IC_Departmento_Munitorum\IC_FeudalGuard\data\ic_feudalArmourBL_co.paa","\SR_Aux\textures\sr_inq_armor3.paa"};
	};
	class TSR_inq_armor4: ic_feudalArmour_Vest1
	{
		author = "Winchester";
		scope = 2;
		displayName = "[TSR] Stormtrooper Armor (PL)";
		hiddenSelections[] = {"Camo","camo1"};
		descriptionShort = "Flak Level II";
		hiddenSelectionsTextures[] = {"\IC_Departmento_Munitorum\IC_FeudalGuard\data\ic_feudalArmourBL_co.paa","\SR_Aux\textures\sr_inq_armor4.paa"};
	};
	class TSR_inq_armor5: ic_feudalArmour_Vest1
	{
		author = "Winchester";
		scope = 2;
		displayName = "[TSR] Stormtrooper Armor (Medicae)";
		hiddenSelections[] = {"Camo","camo1"};
		descriptionShort = "Flak Level II";
		hiddenSelectionsTextures[] = {"\IC_Departmento_Munitorum\IC_FeudalGuard\data\ic_feudalArmourBL_co.paa","\SR_Aux\textures\sr_inq_armor5.paa"};
	};

	class Ork_Back_Pack_1;
	class TSR_Ork_Backpack: Ork_Back_Pack_1
	{
		author = "Tengu";
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		displayName = "[TSR] Ork Back Pack";
		maximumLoad = 500;
		mass = 5;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};
	class Ork_BP_3;
	class TSR_Ork_Bosspole: Ork_BP_3
	{
		author = "Tengu";
		scope = 2;
		scopeCurator = 2;
		scopearsenal = 2;
		displayName = "[TSR] Freebooter Bosspole";
		maximumLoad = 500;
		mass = 5;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};







};
