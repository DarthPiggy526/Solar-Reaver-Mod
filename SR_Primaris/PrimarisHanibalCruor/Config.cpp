class CfgPatches
{
	class TIOW_Inf_SR_Primaris_HanibalCruor
	{
		requiredAddons[]=
		{
			"TIOW_Inf_SR_Primaris",
			"Dos_Cosmetics"
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
	class Primaris_SR_HanibalCruor: Primaris_SM_SR_1
	{
		author="Hummus, Barbon";
		displayName="Primaris BA (Mk.10)";
		uniformClass="Primaris_SM_HanibalCruor_W";
		model = "Project_Primaris_D_Main\Models\Capt_Brother.p3d";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\Cruor_PrimArmour.paa",
			"SR_Firstborn\Textures\SR_Armour1.paa"
		};
	};

	class Dos_HQ_PP_1;
	class Primaris_SR_Cruor_Backpack: Dos_HQ_PP_1
	{
		author = "Dos";
		scope = 2;
		displayName = "[TSR] Cruor Powerpack";
		hiddenSelections[] = {"BackpackCamo","flagcamo"};
		hiddenSelectionsTextures[] = {"SR_Primaris\Textures\Cruor_backpack.paa","SR_Primaris\Textures\Cruor_backpack_flag.paa"};
	};

};
class CfgWeapons
{
	class ItemInfo;
	class SR_MK10_Armor_Blackshield;
	class Primaris_SM_HanibalCruor_W: SR_MK10_Armor_Blackshield
	{
		displayName="[TSR] Primaris MK.10 (Hanibal Cruor)";
		model = "Project_Primaris_D_Main\Models\Capt_Brother.p3d";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_HanibalCruor";
		};
	};
	class SR_MK10_Helmet_Blackshield;
	class Primaris_Helm_Main_SR_HanibalCruor: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="[TSR] Primaris Mk.10 (Hanibal Cruor)";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\Cruor_PrimHelmet.paa",
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
				"SR_Primaris\Textures\Cruor_PrimHelmet.paa",
				"SR_Primaris\Textures\Eyes_Green_CO.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class DOS_Primaris_40k_Vest_Base;
	class Primaris_Vest_40K_SR_HanibalCruor: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[TSR] Primaris Mk.10 (Hanibal Cruor)";
		model = "Project_Primaris_D_Main\Models\Shoulder_Cap.p3d";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\Cruor_PrimArmour.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Cap.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"SR_Primaris\Textures\Cruor_PrimArmour.paa"
			};
		};
	};
};