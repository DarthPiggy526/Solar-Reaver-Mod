#define _ARMA_

class CfgPatches
{
	class SR_Chaos
	{
		name = "Solar Reaver Chaos Bits";
		author = "Tengu";
		requiredVersion = 0.002;
		requiredAddons[] = 
		{
			"SR_Core",
			"TIOWSpaceMarines";
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		units[] = 
		{
			"TSR_Chaos1Powerpack_AL", "TSR_Chaos1Powerpack_BL", "TSR_Chaos1Powerpack_DG", "TSR_Chaos1Powerpack_EC", "TSR_Chaos1Powerpack_IW", "TSR_Chaos1Powerpack_NL", "TSR_Chaos1Powerpack_TS", "TSR_Chaos1Powerpack_WB", "TSR_Chaos1Powerpack_WE", "TSR_Chaos2Powerpack_AL", "TSR_Chaos2Powerpack_BL", "TSR_Chaos2Powerpack_DG", "TSR_Chaos2Powerpack_EC", "TSR_Chaos2Powerpack_IW", "TSR_Chaos2Powerpack_NL", "TSR_Chaos2Powerpack_TS", "TSR_Chaos2Powerpack_WB", "TSR_Chaos2Powerpack_WE", "TSR_Chaos3Powerpack_AL", "TSR_Chaos3Powerpack_BL", "TSR_Chaos3Powerpack_DG", "TSR_Chaos3Powerpack_EC", "TSR_Chaos3Powerpack_IW", "TSR_Chaos3Powerpack_NL", "TSR_Chaos3Powerpack_TS", "TSR_Chaos3Powerpack_WB", "TSR_Chaos3Powerpack_WE", "TSR_Mk2Powerpack_AL", "TSR_Mk2Powerpack_BL", "TSR_Mk2Powerpack_DG", "TSR_Mk2Powerpack_EC", "TSR_Mk2Powerpack_IW", "TSR_Mk2Powerpack_NL", "TSR_Mk2Powerpack_TS", "TSR_Mk2Powerpack_WB", "TSR_Mk2Powerpack_WE", "TSR_Mk4Powerpack_AL", "TSR_Mk4Powerpack_BL", "TSR_Mk4Powerpack_DG", "TSR_Mk4Powerpack_EC", "TSR_Mk4Powerpack_IW", "TSR_Mk4Powerpack_NL", "TSR_Mk4Powerpack_TS", "TSR_Mk4Powerpack_WB", "TSR_Mk4Powerpack_WE", "TSR_Mk5Powerpack_AL", "TSR_Mk5Powerpack_BL", "TSR_Mk5Powerpack_DG", "TSR_Mk5Powerpack_EC", "TSR_Mk5Powerpack_IW", "TSR_Mk5Powerpack_NL", "TSR_Mk5Powerpack_TS", "TSR_Mk5Powerpack_WB", "TSR_Mk5Powerpack_WE"
		};
	};
};


class CfgVehicles
{

//Alpha Legion
//Black Legion
//Death Guard
//Emperor's Children
//Iron Warriors
//Night Lords
//Thousand Sons
//World Bearers
//World Eaters



class B_AssaultPack_Base;
	class TSR_Mk4Powerpack_WB: B_AssaultPack_Base
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK4Powerpack_ca.paa";
		displayName = "[TSR] Mk 4 Powerpack (Word Bearers)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WBearers_co.paa"};
		maximumLoad = 500;
		mass = 5;
		armor = 200;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		
	};
	class TSR_Mk5Powerpack_WB: TSR_Mk4Powerpack_WB
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK5Powerpack_ca.paa";
		displayName = "[TSR] Mk 5 Powerpack (Word Bearers)";
		model = "\TIOW_Sm\Marine\Model\MK5_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WBearers_co.paa"};
	};
	class TSR_Mk2Powerpack_WB: TSR_Mk4Powerpack_WB
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Mk 2 Powerpack (Word Bearers)";
		model = "\TIOW_Sm\Marine\Model\MK2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WBearers_co.paa"};
	};
	class TSR_Chaos1Powerpack_WB: TSR_Mk4Powerpack_WB
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Word Bearers)";
		model = "\TIOW_Sm\Marine\Model\MKChaos_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WBearers_co.paa"};
	};
	class TSR_Chaos2Powerpack_WB: TSR_Mk4Powerpack_WB
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Word Bearers)";
		model = "\TIOW_Sm\Marine\Model\MKChaos2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WBearers_co.paa"};
	};
	class TSR_Chaos3Powerpack_WB: TSR_Mk4Powerpack_WB
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Word Bearers)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack_Chaos.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WBearers_co.paa"};
	};
	class TSR_Mk4Powerpack_IW: B_AssaultPack_Base
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK4Powerpack_ca.paa";
		displayName = "[TSR] Mk 4 Powerpack (Iron Warriors)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_IWarriors_co.paa"};
		maximumLoad = 500;
		mass = 5;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	};
	class TSR_Mk5Powerpack_IW: TSR_Mk4Powerpack_IW
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK5Powerpack_ca.paa";
		displayName = "[TSR] Mk 5 Powerpack (Iron Warriors)";
		model = "\TIOW_Sm\Marine\Model\MK5_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_IWarriors_co.paa"};
	};
	class TSR_Mk2Powerpack_IW: TSR_Mk4Powerpack_IW
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Mk 2 Powerpack (Iron Warriors)";
		model = "\TIOW_Sm\Marine\Model\MK2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_IWarriors_co.paa"};
	};
	class TSR_Chaos1Powerpack_IW: TSR_Mk4Powerpack_IW
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Iron Warriors)";
		model = "\TIOW_Sm\Marine\Model\MKChaos_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_IWarriors_co.paa"};
	};
	class TSR_Chaos2Powerpack_IW: TSR_Mk4Powerpack_IW
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Iron Warriors)";
		model = "\TIOW_Sm\Marine\Model\MKChaos2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_IWarriors_co.paa"};
	};
	class TSR_Chaos3Powerpack_IW: TSR_Mk4Powerpack_IW
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Iron Warriors)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack_Chaos.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_IWarriors_co.paa"};
	};
	class TSR_Mk4Powerpack_BL: B_AssaultPack_Base
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK4Powerpack_ca.paa";
		displayName = "[TSR] Mk 4 Powerpack (Black Legion)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_Black_co.paa"};
		maximumLoad = 500;
		mass = 5;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	};
	class TSR_Mk5Powerpack_BL: TSR_Mk4Powerpack_BL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK5Powerpack_ca.paa";
		displayName = "[TSR] Mk 5 Powerpack (Black Legion)";
		model = "\TIOW_Sm\Marine\Model\MK5_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_Black_co.paa"};
	};
	class TSR_Mk2Powerpack_BL: TSR_Mk4Powerpack_BL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Mk 2 Powerpack (Black Legion)";
		model = "\TIOW_Sm\Marine\Model\MK2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_Black_co.paa"};
	};
	class TSR_Chaos1Powerpack_BL: TSR_Mk4Powerpack_BL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Black Legion)";
		model = "\TIOW_Sm\Marine\Model\MKChaos_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_Black_co.paa"};
	};
	class TSR_Chaos2Powerpack_BL: TSR_Mk4Powerpack_BL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Black Legion)";
		model = "\TIOW_Sm\Marine\Model\MKChaos2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_Black_co.paa"};
	};
	class TSR_Chaos3Powerpack_BL: TSR_Mk4Powerpack_BL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Black Legion)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack_Chaos.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_Black_co.paa"};
	};
	class TSR_Mk4Powerpack_WE: B_AssaultPack_Base
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK4Powerpack_ca.paa";
		displayName = "[TSR] Mk 4 Powerpack (World Eaters)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WEaters_co.paa"};
		maximumLoad = 500;
		mass = 5;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	};
	class TSR_Mk5Powerpack_WE: TSR_Mk4Powerpack_WE
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK5Powerpack_ca.paa";
		displayName = "[TSR] Mk 5 Powerpack (World Eaters)";
		model = "\TIOW_Sm\Marine\Model\MK5_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WEaters_co.paa"};
	};
	class TSR_Mk2Powerpack_WE: TSR_Mk4Powerpack_WE
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Mk 2 Powerpack (World Eaters)";
		model = "\TIOW_Sm\Marine\Model\MK2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WEaters_co.paa"};
	};
	class TSR_Chaos1Powerpack_WE: TSR_Mk4Powerpack_WE
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (World Eaters)";
		model = "\TIOW_Sm\Marine\Model\MKChaos_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WEaters_co.paa"};
	};
	class TSR_Chaos2Powerpack_WE: TSR_Mk4Powerpack_WE
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (World Eaters)";
		model = "\TIOW_Sm\Marine\Model\MKChaos2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WEaters_co.paa"};
	};
	class TSR_Chaos3Powerpack_WE: TSR_Mk4Powerpack_WE
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (World Eaters)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack_Chaos.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_WEaters_co.paa"};
	};
	class TSR_Mk4Powerpack_EC: B_AssaultPack_Base
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK4Powerpack_ca.paa";
		displayName = "[TSR] Mk 4 Powerpack (Emperor's Children)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_EChildren_co.paa"};
		maximumLoad = 500;
		mass = 5;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	};
	class TSR_Mk5Powerpack_EC: TSR_Mk4Powerpack_EC
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK5Powerpack_ca.paa";
		displayName = "[TSR] Mk 5 Powerpack (Emperor's Children)";
		model = "\TIOW_Sm\Marine\Model\MK5_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_EChildren_co.paa"};
	};
	class TSR_Mk2Powerpack_EC: TSR_Mk4Powerpack_EC
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Mk 2 Powerpack (Emperor's Children)";
		model = "\TIOW_Sm\Marine\Model\MK2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_EChildren_co.paa"};
	};
	class TSR_Chaos1Powerpack_EC: TSR_Mk4Powerpack_EC
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Emperor's Children)";
		model = "\TIOW_Sm\Marine\Model\MKChaos_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_EChildren_co.paa"};
	};
	class TSR_Chaos2Powerpack_EC: TSR_Mk4Powerpack_EC
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Emperor's Children)";
		model = "\TIOW_Sm\Marine\Model\MKChaos2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_EChildren_co.paa"};
	};
	class TSR_Chaos3Powerpack_EC: TSR_Mk4Powerpack_EC
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Emperor's Children)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack_Chaos.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_EChildren_co.paa"};
	};
	class TSR_Mk4Powerpack_AL: B_AssaultPack_Base
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK4Powerpack_ca.paa";
		displayName = "[TSR] Mk 4 Powerpack (Alpha Legion)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_ALegion_co.paa"};
		maximumLoad = 500;
		mass = 5;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	};
	class TSR_Mk5Powerpack_AL: TSR_Mk4Powerpack_AL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK5Powerpack_ca.paa";
		displayName = "[TSR] Mk 5 Powerpack (Alpha Legion)";
		model = "\TIOW_Sm\Marine\Model\MK5_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_ALegion_co.paa"};
	};
	class TSR_Mk2Powerpack_AL: TSR_Mk4Powerpack_AL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Mk 2 Powerpack (Alpha Legion)";
		model = "\TIOW_Sm\Marine\Model\MK2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_ALegion_co.paa"};
	};
	class TSR_Chaos1Powerpack_AL: TSR_Mk4Powerpack_AL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Alpha Legion)";
		model = "\TIOW_Sm\Marine\Model\MKChaos_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_ALegion_co.paa"};
	};
	class TSR_Chaos2Powerpack_AL: TSR_Mk4Powerpack_AL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Alpha Legion)";
		model = "\TIOW_Sm\Marine\Model\MKChaos2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_ALegion_co.paa"};
	};
	class TSR_Chaos3Powerpack_AL: TSR_Mk4Powerpack_AL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Alpha Legion)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack_Chaos.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_ALegion_co.paa"};
	};
	class TSR_Mk4Powerpack_TS: B_AssaultPack_Base
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK4Powerpack_ca.paa";
		displayName = "[TSR] Mk 4 Powerpack (Thousand Sons)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_TSons_co.paa"};
		maximumLoad = 500;
		mass = 5;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	};
	class TSR_Mk5Powerpack_TS: TSR_Mk4Powerpack_TS
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK5Powerpack_ca.paa";
		displayName = "[TSR] Mk 5 Powerpack (Thousand Sons)";
		model = "\TIOW_Sm\Marine\Model\MK5_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_TSons_co.paa"};
	};
	class TSR_Mk2Powerpack_TS: TSR_Mk4Powerpack_TS
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Mk 2 Powerpack (Thousand Sons)";
		model = "\TIOW_Sm\Marine\Model\MK2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_TSons_co.paa"};
	};
	class TSR_Chaos1Powerpack_TS: TSR_Mk4Powerpack_TS
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Thousand Sons)";
		model = "\TIOW_Sm\Marine\Model\MKChaos_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_TSons_co.paa"};
	};
	class TSR_Chaos2Powerpack_TS: TSR_Mk4Powerpack_TS
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Thousand Sons)";
		model = "\TIOW_Sm\Marine\Model\MKChaos2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_TSons_co.paa"};
	};
	class TSR_Chaos3Powerpack_TS: TSR_Mk4Powerpack_TS
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Thousand Sons)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack_Chaos.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_TSons_co.paa"};
	};
	class TSR_Mk4Powerpack_NL: B_AssaultPack_Base
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK4Powerpack_ca.paa";
		displayName = "[TSR] Mk 4 Powerpack (Night Lords)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_Mk4Powerpack_NL_co.paa"};
		maximumLoad = 500;
		mass = 5;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	};
	class TSR_Mk5Powerpack_NL: TSR_Mk4Powerpack_NL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK5Powerpack_ca.paa";
		displayName = "[TSR] Mk 5 Powerpack (Night Lords)";
		model = "\TIOW_Sm\Marine\Model\MK5_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_Mk4Powerpack_NL_co.paa"};
	};
	class TSR_Mk2Powerpack_NL: TSR_Mk4Powerpack_NL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Mk 2 Powerpack (Night Lords)";
		model = "\TIOW_Sm\Marine\Model\MK2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_Mk4Powerpack_NL_co.paa"};
	};
	class TSR_Chaos1Powerpack_NL: TSR_Mk4Powerpack_NL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Night Lords)";
		model = "\TIOW_Sm\Marine\Model\MKChaos_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_Mk4Powerpack_NL_co.paa"};
	};
	class TSR_Chaos2Powerpack_NL: TSR_Mk4Powerpack_NL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Night Lords)";
		model = "\TIOW_Sm\Marine\Model\MKChaos2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_Mk4Powerpack_NL_co.paa"};
	};
	class TSR_Chaos3Powerpack_NL: TSR_Mk4Powerpack_NL
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Night Lords)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack_Chaos.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_Mk4Powerpack_NL_co.paa"};
	};
	class TSR_Mk4Powerpack_DG: B_AssaultPack_Base
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK4Powerpack_ca.paa";
		displayName = "[TSR] Mk 4 Powerpack (Death Guard)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_DGuard_co.paa"};
		maximumLoad = 500;
		mass = 5;
		class TransportMagazines{};
		class TransportItems{};
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	};
	class TSR_Mk5Powerpack_DG: TSR_Mk4Powerpack_DG
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK5Powerpack_ca.paa";
		displayName = "[TSR] Mk 5 Powerpack (Death Guard)";
		model = "\TIOW_Sm\Marine\Model\MK5_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_DGuard_co.paa"};
	};
	class TSR_Mk2Powerpack_DG: TSR_Mk4Powerpack_DG
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Mk 2 Powerpack (Death Guard)";
		model = "\TIOW_Sm\Marine\Model\MK2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_DGuard_co.paa"};
	};
	class TSR_Chaos1Powerpack_DG: TSR_Mk4Powerpack_DG
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Death Guard)";
		model = "\TIOW_Sm\Marine\Model\MKChaos_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_DGuard_co.paa"};
	};
	class TSR_Chaos2Powerpack_DG: TSR_Mk4Powerpack_DG
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Death Guard)";
		model = "\TIOW_Sm\Marine\Model\MKChaos2_Powerpack.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_DGuard_co.paa"};
	};
	class TSR_Chaos3Powerpack_DG: TSR_Mk4Powerpack_DG
	{
		author = "TIOW";
		scope = 2;
		picture = "\TIOW_SM\Icon\MK2Powerpack_ca.paa";
		displayName = "[TSR] Chaos Powerpack (Death Guard)";
		model = "\TIOW_Sm\Marine\Model\MK4_Powerpack_Chaos.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"TIOW_SM\Marine\Data\Textures\TIOW_SM_Powerpack_DGuard_co.paa"};
	};

};