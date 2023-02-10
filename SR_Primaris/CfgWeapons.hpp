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
			class Primaris_SM_BloodAngels_W: SR_MK10_Armor_Blackshield
	{
		displayName="Primaris MK.10 (TSR Blood Angels)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_BloodAngels";
		};
	};
				class Primaris_SM_DarkAngels_W: SR_MK10_Armor_Blackshield
	{
		displayName="Primaris MK.10 (TSR Dark Angels)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_DarkAngels";
		};
	};
					class Primaris_SM_ImperialFists_W: SR_MK10_Armor_Blackshield
	{
		displayName="Primaris MK.10 (TSR Imperial Fists)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_ImperialFists";
		};
	};
				class Primaris_SM_IronHands_W: SR_MK10_Armor_Blackshield
	{
		displayName="Primaris MK.10 (TSR Iron Hands)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_IronHands";
		};
	};
					class Primaris_SM_RavenGuard_W: SR_MK10_Armor_Blackshield
	{
		displayName="Primaris MK.10 (TSR Raven Guard)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_RavenGuard";
		};
	};
		class Primaris_SM_Salamanders_W: SR_MK10_Armor_Blackshield
	{
		displayName="Primaris MK.10 (TSR Salamanders)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_Salamanders";
		};
	};
		class Primaris_SM_SpaceWolves_W: SR_MK10_Armor_Blackshield
	{
		displayName="Primaris MK.10 (TSR Space Wolves)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_SpaceWolves";
		};
	};
			class Primaris_SM_Ultramarines_W: SR_MK10_Armor_Blackshield
	{
		displayName="Primaris MK.10 (TSR Ultramarines)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_Ultramarines";
		};
	};
			class Primaris_SM_WhiteScars_W: SR_MK10_Armor_Blackshield
	{
		displayName="Primaris MK.10 (TSR White Scars)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SR_WhiteScars";
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
			class Primaris_Helm_Main_SR_BloodAngels: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="Primaris Mk.10 (TSR Blood Angels)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\BA_PrimHelmet.paa"
		};
	}
				class Primaris_Helm_Main_SR_DarkAngels: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="Primaris Mk.10 (TSR Dark Angels)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\DA_PrimHelmet.paa"
		};
	}
				class Primaris_Helm_Main_SR_ImperialFists: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="Primaris Mk.10 (TSR Imperial Fists)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\IF_PrimHelmet.paa"
		};
	}
				class Primaris_Helm_Main_SR_IronHands: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="Primaris Mk.10 (TSR Iron Hands)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\IH_PrimHelmet.paa"
		};
	}
				class Primaris_Helm_Main_SR_RavenGuard: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="Primaris Mk.10 (TSR Raven Guard)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\RG_PrimHelmet.paa"
		};
	}
				class Primaris_Helm_Main_SR_Salamanders: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="Primaris Mk.10 (TSR Salamanders)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SAL_PrimHelmet.paa"
		};
	}
				class Primaris_Helm_Main_SR_SpaceWolves: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="Primaris Mk.10 (TSR Space Wolves)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SW_PrimHelmet.paa"
		};
	}
				class Primaris_Helm_Main_SR_Ultramarines: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="Primaris Mk.10 (TSR Ultramarines)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\UM_PrimHelmet.paa"
		};
	}
				class Primaris_Helm_Main_SR_WhiteScars: SR_MK10_Helmet_Blackshield
	{
		author="Hummus, Barbon";
		displayName="Primaris Mk.10 (TSR White Scars)";
	hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\WS_PrimHelmet.paa"
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
		class Primaris_Vest_40K_SR_BloodAngels: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Blood Angels)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
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
		class Primaris_Vest_40K_SR_DarkAngels: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Dark Angels)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\DA_PrimArmour.paa"
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
				"SR_Primaris\Textures\DA_PrimArmour.paa"
			};
		};
	};
			class Primaris_Vest_40K_SR_ImperialFists: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Imperial Fists)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
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
			class Primaris_Vest_40K_SR_IronHands: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Iron Hands)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\IH_PrimArmour.paa"
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
				"SR_Primaris\Textures\IH_PrimArmour.paa"
			};
		};
	};
			class Primaris_Vest_40K_SR_RavenGuard: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Raven Guard)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\RG_PrimArmour.paa"
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
				"SR_Primaris\Textures\RG_PrimArmour.paa"
			};
		};
	};
			class Primaris_Vest_40K_SR_Salamanders: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Salamanders)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SAL_PrimArmour.paa"
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
				"SR_Primaris\Textures\SAL_PrimArmour.paa"
			};
		};
	};
			class Primaris_Vest_40K_SR_Furries: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Space Wolves)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
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
			class Primaris_Vest_40K_SR_Ultramarines: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Ultramarines)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\UM_PrimArmour.paa"
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
				"SR_Primaris\Textures\UM_PrimArmour.paa"
			};
		};
	};
			class Primaris_Vest_40K_SR_WhiteScars: DOS_Primaris_40k_Vest_Base 
	{
		author="Hummus, Barbon";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR White Scars)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\WS_PrimArmour.paa"
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
				"SR_Primaris\Textures\WS_PrimArmour.paa"
			};
		};
	};

	//
}; // End of CfgWeapons
