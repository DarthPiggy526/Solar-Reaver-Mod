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
			"",
			"",
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
		scope=2;//test at 752PM
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
};