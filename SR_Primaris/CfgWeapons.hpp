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

	class SR_MK10_Armor_Blackshield: Primaris_Dos_Base
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
	// 	class SR_MK10_Armor_Lysander: SR_MK10_Armor_Blackshield
	// {
	// 	displayName="Primaris MK.10 (TSR Lysander)";
	// 	class ItemInfo: ItemInfo
	// 	{
	// 		uniformClass="Primaris_SM_Lysander";
	// 	};
	// };

	// Primaris Helmets 

	class SM_Helm_Base;
	class Primaris_Dos_Helm_Base: SM_Helm_Base
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		class ItemInfo;
	};
	class SR_MK10_Helmet_Blackshield: Primaris_Dos_Helm_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="Strixus";
		displayName="Primaris Mk.10 (TSR Blackshield)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
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
	class SR_MK10_Helmet_BlackshieldLT: SR_MK10_Helmet_Blackshield
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
		class SR_MK10_Helmet_BlackshieldSer: SR_MK10_Helmet_Blackshield
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
		class SR_MK10_Helmet_BlackshieldVet: SR_MK10_Helmet_Blackshield
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
		class SR_MK10_Helmet_BlackshieldVetSer: SR_MK10_Helmet_Blackshield
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
			class SR_MK10_Helmet_Marauder: SR_MK10_Helmet_Blackshield
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
				class SR_MK10_Helmet_MarauderChief: SR_MK10_Helmet_Blackshield
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
				class SR_MK10_Helmet_MarauderVet: SR_MK10_Helmet_Blackshield
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
				class SR_MK10_Helmet_MarauderVetChief: SR_MK10_Helmet_Blackshield
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
	class SR_MK10_Shoulders_Conscript: DOS_Primaris_40k_Vest_Base 
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
		class SR_MK10_Shoulders_Blackshield: DOS_Primaris_40k_Vest_Base 
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
