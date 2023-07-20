class CfgPatches
{
	class TIOW_Inf_SR_Primaris_Lamenters
	{
		requiredAddons[]=
		{
			"TIOW_Inf_SR_Primaris"
		};
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]=
		{
		};
	};
};

class CfgVehicles
{
	class Primaris_SM_SR_1;
	class Primaris_SR_Lamenters: Primaris_SM_SR_1
	{
		author="Hummus, Barbon";
		displayName="Primaris IF (Mk.10)";
		uniformClass="Primaris_SM_Lamenters_W";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\LAM_PrimArmour.paa",
			"SR_Firstborn\Textures\LAM_Armour1.paa"
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class SR_MK10_Armor_Blackshield;
	class Primaris_SM_Lamenters_W: SR_MK10_Armor_Blackshield
	{
		displayName="[TSR] Primaris MK.10 (Lamenters)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_Lamenters";
		};
	};
	class SR_MK10_Helmet_Blackshield;
	class Primaris_Helm_Main_SR_Lamenters: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="[TSR] Primaris Mk.10 (Lamenters)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\LAM_PrimHelmet.paa"
		};
	};
	class DOS_Primaris_40k_Vest_Base;
	class Primaris_Vest_40K_SR_Lamenters: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[TSR] Primaris Mk.10 (Lamenters)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\LAM_PrimArmour.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"SR_Primaris\Textures\LAM_PrimArmour.paa"
			};
		};
	};
};