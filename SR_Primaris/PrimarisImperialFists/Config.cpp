class CfgPatches
{
	class TIOW_Inf_SR_Primaris_ImperialFists
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
	class Primaris_SR_ImperialFists: Primaris_SM_SR_1
	{
		author="Hummus, Barbon";
		displayName="Primaris IF (Mk.10)";
		uniformClass="Primaris_SM_ImperialFists_W";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\IF_PrimArmour.paa",
			"SR_Firstborn\Textures\SR_Armour1.paa"
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class SR_MK10_Armor_Blackshield;
	class Primaris_SM_ImperialFists_W: SR_MK10_Armor_Blackshield
	{
		displayName="[TSR] Primaris MK.10 (TSR Imperial Fists)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_ImperialFists";
		};
	};
	class SR_MK10_Helmet_Blackshield;
	class Primaris_Helm_Main_SR_ImperialFists: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="[TSR] Primaris Mk.10 (TSR Imperial Fists)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\IF_PrimHelmet.paa"
		};
	};
	class DOS_Primaris_40k_Vest_Base;
	class Primaris_Vest_40K_SR_ImperialFists: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[TSR] Primaris Mk.10 (TSR Imperial Fists)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\IF_PrimArmour.paa"
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
				"SR_Primaris\Textures\IF_PrimArmour.paa"
			};
		};
	};
};