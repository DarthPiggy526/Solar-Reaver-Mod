class Cfgweapons
{
	class ItemInfo;
	
	// Primaris Power Armor
	class Primaris_Dos_Base;
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
	class SR_MK10_Armor_Lysander: SR_MK10_Armor_Blackshield
	{
	 	displayName="Primaris MK.10 (TSR Lysander)";
	 	class ItemInfo: ItemInfo
	 	{
	 		uniformClass="Primaris_SM_Lysander";
	 	};
	};

	// Primaris Helmets 
	class Primaris_Dos_Helm_Base;
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
	};
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
	};
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
	};
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
	};
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
	};
	
	// Shoulder Pads
	class DOS_Primaris_40k_Vest_Base;
	class SR_MK10_Shoulders_Outcast: DOS_Primaris_40k_Vest_Base 
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Outcast)";
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
}; // End of CfgWeapons
