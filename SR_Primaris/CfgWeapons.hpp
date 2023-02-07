class Cfgweapons
{
class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class HeadgearItem;
	class VestItem;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class weaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class TIOWSpaceMarineUnderwear1_base;
	class Primaris_Dos_Base: TIOWSpaceMarineUnderwear1_base
	{
		class ItemInfo;
	};

	// Primaris Power Armor

	class Primaris_SM_SR_1_W: Primaris_Dos_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="Primaris MK.10 (TSR Blackshield)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_SR_1";
		};
	};
		class Primaris_SM_Lysander_1_W: Primaris_SM_SR_1_W
	{
		displayName="Primaris MK.10 (TSR Lysander)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_Lysander";
		};
	};

	// Primaris Helmets 

	class SM_Helm_Base;
	class Primaris_Dos_Helm_Base: SM_Helm_Base
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		class ItemInfo;
	};
	class Primaris_Helm_Main_SR_1: Primaris_Dos_Helm_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Strixus";
		displayName="Primaris Mk.10 (TSR Blackshield)";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimHelmet.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
		};
		subItems[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"SR_Primaris\Textures\SR_PrimHelmet.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class Primaris_Helm_Main_SR_LT: Primaris_Helm_Main_SR_1
	{
		displayName="Primaris Mk.10 (TSR Blackshield LT)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimHelmet_LT.paa"
		};
	}
		class Primaris_Helm_Main_SR_Ser: Primaris_Helm_Main_SR_1
	{
		displayName="Primaris Mk.10 (TSR Blackshield Ser)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimHelmet_Ser.paa"
		};
	}
		class Primaris_Helm_Main_SR_Vet: Primaris_Helm_Main_SR_1
	{
		displayName="Primaris Mk.10 (TSR Blackshield Vet)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimHelmet_Vet.paa"
		};
	}
		class Primaris_Helm_Main_SR_VetSer: Primaris_Helm_Main_SR_1
	{
		displayName="Primaris Mk.10 (TSR Blackshield Vet Ser)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimHelmet_VetSer.paa"
		};
	}
			class Primaris_Helm_Main_SR_MR: Primaris_Helm_Main_SR_1
	{
		displayName="Primaris Mk.10 (TSR Marauder)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimHelmet_MR.paa"
		};
	}
				class Primaris_Helm_Main_SR_MR_Chief: Primaris_Helm_Main_SR_1
	{
		displayName="Primaris Mk.10 (TSR Marauder Chief)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimHelmet_MR_Chief.paa"
		};
	}
				class Primaris_Helm_Main_SR_MR_Vet: Primaris_Helm_Main_SR_1
	{
		displayName="Primaris Mk.10 (TSR Marauder Vet)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimHelmet_MR_Vet.paa"
		};
	}
				class Primaris_Helm_Main_SR_MR_VetChief: Primaris_Helm_Main_SR_1
	{
		displayName="Primaris Mk.10 (TSR Marauder Chief Vet)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimHelmet_MR_VetChief.paa"
		};
	}
	// Shoulder Pads

	class TIOW_Mk7Limbs_UM;
	class DOS_Primaris_40k_Vest_Base: TIOW_Mk7Limbs_UM
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		class ItemInfo;
	};	
	class Primaris_Vest_40K_SR_1: DOS_Primaris_40k_Vest_Base 
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Conscript)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimArmour.paa"
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
				"SR_Primaris\Textures\SR_PrimArmour.paa"
			};
		};
	};
		class Primaris_Vest_40K_SRBS_1: DOS_Primaris_40k_Vest_Base 
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Blackshield)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SRBS_PrimArmour.paa"
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
				"SR_Primaris\Textures\SRBS_PrimArmour.paa"
			};
		};
	};

	//
}; // End of CfgWeapons
