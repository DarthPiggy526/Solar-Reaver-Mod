class CfgPatches
{
	class AV_Accessories
	{
		author=""; 
		name="";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Characters_F",
			"A3_Anims_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		weapons[]=
		{
			"ChestRig1",
			"ChestRig1Face",
			"PrimarisChest",
			"PrimarisChestFace",
			"NL_Batwings_Face",
			"SR_Techmarine_Eye_Piece",
			"",
			"",
			"",
			"",
			""
		};
		worlds[]={};
	};
};
class CfgWeapons
{
	class Integrated_NVG_TI_1_F;
	class ItemInfo;
    
    class ChestRig1: Integrated_NVG_TI_1_F
	{
		scope=2;//This is a test
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] 1st Born Chest Pouches";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Accessories\textures\ChestRig1_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="SR_Accessories\models\ChestRig1.p3d";
			modelOff="SR_Accessories\models\ChestRig1.p3d"
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"SR_Accessories\textures\ChestRig1_ca.paa"
			};
		};
	};
	class PrimarisChest: Integrated_NVG_TI_1_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] Primaris Chest Pouches";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Accessories\textures\ChestRig1_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="SR_Accessories\models\PrimarisChestRig.p3d";
			modelOff="SR_Accessories\models\PrimarisChestRig.p3d"
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"SR_Accessories\textures\ChestRig1_ca.paa"
			};
		};
	};
	class SR_Techmarine_Eye_Piece: Integrated_NVG_TI_1_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] Techmarine Eye Piece";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		hiddenSelections[]=
		{
			"ap_head_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Accessories\textures\TSR_eye_red.paa"
		};
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="Dos_Cosmetics\models\Apoth_Head.p3d";
			modelOff="Dos_Cosmetics\models\Apoth_Head.p3d"
			hiddenSelections[]=
			{
				"ap_head_camo"
			};
			hiddenSelectionsTextures[]=
			{
			"SR_Accessories\textures\TSR_eye_red.paa"
			};
		};
	};
	
};
class CfgGlasses
{
	class None;
	class ChestRig1Face: None
	{
		author="Cowboy";
		showEmpty=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayname="[TSR] 1st Born Chest Pouches";
		model="SR_Accessories\models\ChestRig1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Accessories\textures\ChestRig1_ca.paa"
		};
		identityTypes[]={};
	};
	class PrimarisChestFace: None
	{
		author="Cowboy";
		showEmpty=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayname="[TSR] Primaris Chest Pouches";
		model="SR_Accessories\models\PrimarisChestRig.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
				"SR_Accessories\textures\ChestRig1_ca.paa"
		};
		identityTypes[]={};
	};
	class NL_Batwings_Face: None
	{
		author="TIOW";
		displayname="[Night Lords] Bat Wings";
		model="TIOW_SM\Marine\Model\NL_Helmet_Wings.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		identityTypes[]={};	
		mass=0;
	}

};