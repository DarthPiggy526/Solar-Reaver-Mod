class CfgPatches
{
	class TIOW_Inf_SR_Primaris_SpaceWolves
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
	class Primaris_SR_SpaceWolves: Primaris_SM_SR_1
	{
		author="Hummus, Barbon";
		displayName="Primaris SW (Mk.10)";
		uniformClass="Primaris_SM_SpaceWolves_W";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SW_PrimArmour.paa",
			"SR_Firstborn\Textures\SR_Armour1.paa"
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class SR_MK10_Armor_Blackshield;
	class Primaris_SM_SpaceWolves_W: SR_MK10_Armor_Blackshield
	{
		displayName="[TSR] Primaris MK.10 (TSR Space Wolves)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_SpaceWolves";
		};
	};
	class SR_MK10_Helmet_Blackshield;
	class Primaris_Helm_Main_SR_SpaceWolves: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="[TSR] Primaris Mk.10 (TSR Space Wolves)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SW_PrimHelmet.paa"
		};
	};
	class DOS_Primaris_40k_Vest_Base;
	class Primaris_Vest_40K_SR_SpaceWolves: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[TSR] Primaris Mk.10 (TSR Space Wolves)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SW_PrimArmour.paa"
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
				"SR_Primaris\Textures\SW_PrimArmour.paa"
			};
		};
	};
};