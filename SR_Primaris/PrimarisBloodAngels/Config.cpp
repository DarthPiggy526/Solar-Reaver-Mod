class CfgPatches
{
	class TIOW_Inf_SR_Primaris_BloodAngels
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
	class Primaris_SR_BloodAngels: Primaris_SM_SR_1
	{
		author="Hummus, Barbon";
		displayName="Primaris BA (Mk.10)";
		uniformClass="Primaris_SM_BloodAngels_W";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\BA_PrimArmour.paa",
			"SR_Firstborn\Textures\BA_Armour1.paa"
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class SR_MK10_Armor_Blackshield;
	class Primaris_SM_BloodAngels_W: SR_MK10_Armor_Blackshield
	{
		displayName="[TSR] Primaris MK.10 (Blood Angels)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_BloodAngels";
		};
	};
	class SR_MK10_Helmet_Blackshield;
	class Primaris_Helm_Main_SR_BloodAngels: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="[TSR] Primaris Mk.10 (Blood Angels)";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\BA_PrimHelmet.paa",
			"SR_Primaris\Textures\Eyes_Green_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"SR_Primaris\Textures\BA_PrimHelmet.paa",
				"SR_Primaris\Textures\Eyes_Green_CO.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class DOS_Primaris_40k_Vest_Base;
	class Primaris_Vest_40K_SR_BloodAngels: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[TSR] Primaris Mk.10 (Blood Angels)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\BA_PrimArmour.paa"
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
				"SR_Primaris\Textures\BA_PrimArmour.paa"
			};
		};
	};
};