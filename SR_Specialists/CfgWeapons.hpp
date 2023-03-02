//
// CfgWeapons Includes Helmets, Power Armor, & Pauldrons
// Replace any mention of [ID] with your Chapter Prefix WITHOUT Brackets


class Cfgweapons
{
//
//				# Helmets/Headgear #
//
	class ItemInfo;
	class HeadgearItem;
	class TIOW_MK2Helmet_UM;
	class TIOW_MK3Helmet_UM;
	class TIOW_MK4Helmet_UM;
	class TIOW_MK5Helmet_UM;
	class TIOW_MK6Helmet_UM;
	class TIOW_MK7Helmet_UM;
	class TIOW_MK7KnightHelmet_UM;
	
	class SR_MK2_Helmet_Apothecary : TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName = "MK 2 Helmet (TSR Apothecary)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =;
		{
			"SR_Specialists\Textures\SR_Helmet_Apoth.paa",
		};
	};
	class TIOW_MK2Helmet_SR_Apoth_dp : SR_MK2_Helmet_Apothecary
	  {
		scopeArsenal = 1
	  };

	class SR_MK3_Helmet_Apothecary : TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName = "MK 3 Helmet (TSR Apothecary)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	  {
	    "SR_Specialists\Textures\SR_Helmet_Apoth.paa",
	  };
	};
	class TIOW_MK3Helmet_SR_Apoth_dp : SR_MK3_Helmet_Apothecary
	  {
		scopeArsenal = 1
	  };

	class SR_MK4_Helmet_Apothecary : TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName = "MK 4 Helmet (TSR Apothecary)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Specialists\Textures\SR_Helmet_Apoth.paa",
	    };
	};
	class TIOW_MK4Helmet_SR_Apoth_dp : SR_MK4_Helmet_Apothecary
	  {
		scopeArsenal = 1
	  };

	class SR_MK5_Helmet_Apothecary : TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName = "MK 5 Helmet (TSR Apothecary)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Specialists\Textures\SR_Helmet_Apoth.paa",
	    };
	};
	class TIOW_MK5Helmet_SR_Apoth_dp : SR_MK5_Helmet_Apothecary
	  {
		scopeArsenal = 1
	  };

	class SR_MK6_Helmet_Apothecary : TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName = "MK 6 Helmet (TSR Apothecary)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\SR_Helmet_Apoth.paa",
		};
	};
	class TIOW_MK6Helmet_SR_Apoth_dp : SR_MK6_Helmet_Apothecary
	  {
		scopeArsenal = 1
	  };

	class SR_MK7K_Helmet_Apothecary : TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName = "MK 7K Helmet (TSR Apothecary)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Specialists\Textures\SR_Helmet_Apoth.paa",
	    };
	};
	class TIOW_MK7KnightHelmet_SR_Apoth_dp : SR_MK7K_Helmet_Apothecary
	  {
		scopeArsenal = 1
	  };
	  
	class SR_MK7_Helmet_Apothecary : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Apothecary)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Specialists\Textures\SR_Helmet_Apoth.paa",
		   };
	  };
	  class TIOW_MK7Helmet_SR_Apoth_dp : SR_MK7_Helmet_Apothecary
	  {
		scopeArsenal = 1
	  };

	  // techmarine helm
	  class SR_MK2_Helmet_Techmarine : TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName = "MK 2 Helmet (TSR Techmarine)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\SR_Helmet_Tech.paa",
		};
	};
	class TIOW_MK2Helmet_SR_Tech_dp : SR_MK2_Helmet_Techmarine
	  {
		scopeArsenal = 1
	  };

	class SR_MK3_Helmet_Techmarine : TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName = "MK 3 Helmet (TSR Techmarine)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	  {
	    "SR_Specialists\Textures\SR_Helmet_Tech.paa",
	  };
	};
	class TIOW_MK3Helmet_SR_Tech_dp : SR_MK3_Helmet_Techmarine
	  {
		scopeArsenal = 1
	  };

	class SR_MK4_Helmet_Techmarine : TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName = "MK 4 Helmet (TSR Techmarine)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Specialists\Textures\SR_Helmet_Tech.paa",
	    };
	};
	class TIOW_MK4Helmet_SR_Tech_dp : SR_MK4_Helmet_Techmarine
	  {
		scopeArsenal = 1
	  };

	class SR_MK5_Helmet_Techmarine : TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName = "MK 5 Helmet (TSR Techmarine)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Specialists\Textures\SR_Helmet_Tech.paa",
	    };
	};
	class TIOW_MK5Helmet_SR_Tech_dp : SR_MK5_Helmet_Techmarine
	  {
		scopeArsenal = 1
	  };

	class SR_MK6_Helmet_Techmarine : TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName = "MK 6 Helmet (TSR Techmarine)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\SR_Helmet_Tech.paa",
		};
	};
	class TIOW_MK6Helmet_SR_Tech_dp : SR_MK6_Helmet_Techmarine
	  {
		scopeArsenal = 1
	  };

	class SR_MK7K_Helmet_Techmarine : TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName = "MK 7K Helmet (TSR Techmarine)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Specialists\Textures\SR_Helmet_Tech.paa",
	    };
	};
	class TIOW_MK7KnightHelmet_SR_Tech_dp : SR_MK7K_Helmet_Techmarine
	  {
		scopeArsenal = 1
	  };
	  
	class SR_MK7_Helmet_Techmarine : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Techmarine)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Specialists\Textures\SR_Helmet_Tech.paa",
		   };
	  };
	  class TIOW_MK7Helmet_SR_Tech_dp : SR_MK7_Helmet_Techmarine
	  {
		scopeArsenal = 1
	  };

	  // Recon helm
	  class SR_MK2_Helmet_Recon : TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName = "MK 2 Helmet (TSR Recon)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\SR_Helmet_Recon.paa",
		};
	};
	class TIOW_MK2Helmet_SR_Recon_dp : SR_MK2_Helmet_Recon
	  {
		scopeArsenal = 1
	  };

	class SR_MK3_Helmet_Recon : TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName = "MK 3 Helmet (TSR Recon)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	  {
	    "SR_Specialists\Textures\SR_Helmet_Recon.paa",
	  };
	};
	class TIOW_MK3Helmet_SR_Recon_dp : SR_MK3_Helmet_Recon
	  {
		scopeArsenal = 1
	  };

	class SR_MK4_Helmet_Recon : TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName = "MK 4 Helmet (TSR Recon)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Specialists\Textures\SR_Helmet_Recon.paa",
	    };
	};
	class TIOW_MK4Helmet_SR_Recon_dp : SR_MK4_Helmet_Recon
	  {
		scopeArsenal = 1
	  };

	class SR_MK5_Helmet_Recon : TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName = "MK 5 Helmet (TSR Recon)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Specialists\Textures\SR_Helmet_Recon.paa",
	    };
	};
	class TIOW_MK5Helmet_SR_Recon_dp : SR_MK5_Helmet_Recon
	  {
		scopeArsenal = 1
	  };

	class SR_MK6_Helmet_Recon : TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName = "MK 6 Helmet (TSR Recon)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\SR_Helmet_Recon.paa",
		};
	};
	class TIOW_MK6Helmet_SR_Recon_dp : SR_MK6_Helmet_Recon
	  {
		scopeArsenal = 1
	  };

	class SR_MK7K_Helmet_Recon : TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName = "MK 7K Helmet (TSR Recon)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Specialists\Textures\SR_Helmet_Recon.paa",
	    };
	};
	class TIOW_MK7KnightHelmet_SR_Recon_dp : SR_MK7K_Helmet_Recon
	  {
		scopeArsenal = 1
	  };
	  
	class SR_MK7_Helmet_Recon : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Recon)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Specialists\Textures\SR_Helmet_Recon.paa",
		   };
	  };
	  class TIOW_MK7Helmet_SR_Recon_dp : SR_MK7_Helmet_Recon
	  {
		scopeArsenal = 1
	  };

	  // Primaris Helms
	  class Primaris_Dos_Helm_Base;
	  class SR_MK10_Helmet_Techmarine: Primaris_Dos_Helm_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Techmarine)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		picture="\TIOW_SM\Icon\MK4Helmet_ca.paa";
		model="Project_Primaris_D_Main\Models\Helmet_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"eyecamo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Tech_PrimHelmet.paa",
			"SR_Specialists\Textures\Techmarine_Eyes_CO.paa"
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
				"Camo1",
				"eyecamo"
			};
			hiddenSelectionsTextures[]=
			{
				"SR_Specialists\Textures\Tech_PrimHelmet.paa",
				"SR_Specialists\Textures\Techmarine_Eyes_CO.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
	class SR_MK10_Helmet_Apothecary: Primaris_Dos_Helm_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Apothecary)";
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
			"SR_Specialists\Textures\Apoth_PrimHelmet.paa"
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
				"SR_Specialists\Textures\Apoth_PrimHelmet.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Project_Primaris_D_Main\Textures\Prim_Helm.rvmat"
			};
		};
	};
		class SR_Infiltrator_Helmet_Recon: SR_MK10_Helmet_Apothecary
	{
		displayName="Primaris Infiltrator (TSR Recon)";
		model="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Recon_PrimHelmet.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Helmet_Infil.p3d";
		};
	};
//
//		# PowerArmor/Uniform #
//  Does not require specialisations (so far only the [ID] require company marking)
//

	class TIOW_MK2PowerArmor_1_WS;
	class TIOW_MK3PowerArmor_1_WS;
	class TIOW_MK4PowerArmor_1_WS;
	class TIOW_MK5PowerArmor_1_WS;
	class TIOW_MK6PowerArmor_1_WS;
	class TIOW_MK7PowerArmor_1_WS;
	class TIOW_Mk7PowerArmorImperialis_1_WS;
	class TIOW_MK8PowerArmor_1_WS;

	class SR_MK2_Armor_Apothecary: TIOW_MK2PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 2 Power Armor (TSR Apothecary)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Apoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK2_Tact_SR_Apoth"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK3_Armor_Apothecary: TIOW_MK3PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 3 Power Armor (TSR Apothecary)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Apoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK3_Tact_SR_Apoth"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK4_Armor_Apothecary: TIOW_MK4PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 4 Power Armor (TSR Apothecary)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Apoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK4_Tact_SR_Apoth"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK5_Armor_Apothecary: TIOW_MK5PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 5 Power Armor (TSR Apothecary)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Apoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK5_Tact_SR_Apoth"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK6_Armor_Apothecary: TIOW_MK6PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 6 Power Armor (TSR Apothecary)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Apoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK6_Tact_SR_Apoth"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK7_Armor_Apothecary: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Apothecary)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Apoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_Apoth"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK8_Armor_Apothecary: TIOW_MK8PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 8 Power Armor (TSR Apothecary)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Apoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK8_Tact_SR_Apoth"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK7Imperialis_Armor_Apothecary: TIOW_Mk7PowerArmorImperialis_1_WS
	{
		author="Strixus";
		displayName="MK 7 Imperialis Power Armor (TSR Apothecary)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Apoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7Imp_Tact_SR_Apoth"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	// techmarine

		class SR_MK2_Armor_Techmarine: TIOW_MK2PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 2 Power Armor (TSR Techmarine)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Tech_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK2_Tact_SR_Tech"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK3_Armor_Techmarine: TIOW_MK3PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 3 Power Armor (TSR Techmarine)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Tech_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK3_Tact_SR_Tech"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK4_Armor_Techmarine: TIOW_MK4PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 4 Power Armor (TSR Techmarine)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Tech_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK4_Tact_SR_Tech"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK5_Armor_Techmarine: TIOW_MK5PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 5 Power Armor (TSR Techmarine)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Tech_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK5_Tact_SR_Tech"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK6_Armor_Techmarine: TIOW_MK6PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 6 Power Armor (TSR Techmarine)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Tech_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK6_Tact_SR_Tech"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK7_Armor_Techmarine: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Techmarine)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Tech_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_Tech"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK8_Armor_Techmarine: TIOW_MK8PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 8 Power Armor (TSR Techmarine)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Tech_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK8_Tact_SR_Tech"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK7Imperialis_Armor_Techmarine: TIOW_Mk7PowerArmorImperialis_1_WS
	{
		author="Strixus";
		displayName="MK 7 Imperialis Power Armor (TSR Techmarine)";
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Tech_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7Imp_Tact_SR_Tech"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
		class SR_MK7_Armor_Recon: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Recon)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_Recon"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	// Primaris Power Armor
	class Primaris_Dos_Base;

		class SR_MK10_Armor_Techmarine: Primaris_Dos_Base
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		author="Strixus";
		displayName="Primaris Mk.10 (TSR Techmarine)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_SR_Tech";
		};
	}
		class SR_MK10_Armor_Apothecary: SR_MK10_Armor_Techmarine
	{
		displayName="Primaris Mk.10 (TSR Apothecary)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_SR_Apoth";
		};
	}
			class SR_Reiver_Armor_Recon: SR_MK10_Armor_Techmarine
	{
		displayName="Primaris Reiver (TSR Recon)";
		class ItemInfo: ItemInfo
		{
			uniformClass="Primaris_SM_SR_Recon";
		};
	}
	class TIOW_MK2Limbs_UM;
	class TIOW_MK7Limbs_UM;
	
	
	class SR_MK2_Shoulders_Apothecary : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Apothecary)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\Apoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_ApothecaryAspirant : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Apothecary Aspirant)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\ApothAsp_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2.paa"
		};
	};
			class SR_MK2_Shoulders_ApothecaryVeteran : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Veteran Apothecary)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\VetApoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2.paa"
		};
	};
			class SR_MK2_Shoulders_PrimeMedicae : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Prime Medicae)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\PrimeMedicae_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2.paa"
		};
	};
			class SR_MK2_Shoulders_ChiefApothecary : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Chief Apothecary)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\ChiefApoth_Armour1.paa",
			"SR_Specialists\Textures\Apoth_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_Techmarine : SR_MK2_Shoulders_Apothecary
	{
		displayName="MK 2 Pauldrons (TSR Techmarine)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\Tech_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2.paa"
		};
	};
			class SR_MK2_Shoulders_TechAdept : SR_MK2_Shoulders_Apothecary
	{
		displayName="MK 2 Pauldrons (TSR Tech Adept)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\TechAdept_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2.paa"
		};
	};
			class SR_MK2_Shoulders_ForgeSteward : SR_MK2_Shoulders_Apothecary
	{
		displayName="MK 2 Pauldrons (TSR Forge Steward)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\TechSteward_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2.paa"
		};
	};
			class SR_MK2_Shoulders_ForgeWright : SR_MK2_Shoulders_Apothecary
	{
		displayName="MK 2 Pauldrons (TSR Forge Wright)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\ForgeWright_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2.paa"
		};
	};
			class SR_MK2_Shoulders_ForgeLord : SR_MK2_Shoulders_Apothecary
	{
		displayName="MK 2 Pauldrons (TSR Forge Lord)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\ForgeLord_Armour1.paa",
			"SR_Specialists\Textures\Tech_Armour2.paa"
		};
	};

	// Apoth Primaris 
	class DOS_Primaris_40k_Vest_Base: TIOW_Mk7Limbs_UM
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		class ItemInfo;
	};	
	class SR_MK10_Shoulders_Apothecary: DOS_Primaris_40k_Vest_Base 
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Primaris Mk.10 (TSR Apothecary)";
		model="Project_Primaris_D_Main\Models\Shoulder_Main.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Apoth_PrimArmour.paa"
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
				"SR_Specialists\Textures\Apoth_PrimArmour.paa"
			};
		};
	};
	class SR_MK10_Shoulders_ApothecaryAspirant: SR_MK10_Shoulders_Apothecary
	{
		displayName="Primaris Mk.10 (TSR Apothecary Aspirant)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\ApothAsp_PrimArmour.paa"
		};
	}
		class SR_MK10_Shoulders_VeteranApothecary: SR_MK10_Shoulders_Apothecary
	{
		displayName="Primaris Mk.10 (TSR Veteran Apothecary)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\VetApoth_PrimArmour.paa"
		};
	}
		class SR_MK10_Shoulders_PrimeMedicae: SR_MK10_Shoulders_Apothecary
	{
		displayName="Primaris Mk.10 (TSR Prime Medicae)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\PrimeMedicae_PrimArmour.paa"
		};
	}
		class SR_MK10_Shoulders_ApothecaryChief: SR_MK10_Shoulders_Apothecary
	{
		displayName="Primaris Mk.10 (TSR Chief Apothecary)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\ChiefApoth_PrimArmour.paa"
		};
	}
		class SR_MK10_Shoulders_TechAdept: SR_MK10_Shoulders_Apothecary
	{
		displayName="Primaris Mk.10 (TSR Tech Adept)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\TechAdept_PrimArmour.paa"
		};
	}
		class SR_MK10_Shoulders_Techmarine: SR_MK10_Shoulders_Apothecary
	{
		displayName="Primaris Mk.10 (TSR Techmarine)";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Tech_PrimArmour.paa"
		};
	}

	// recon
class Primaris_Vest_40k_SW_1;
			class SR_MK10_Shoulders_Recon: Primaris_Vest_40k_SW_1
	{
		displayName="Primaris Phobos (TSR Recon)";
		model="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="Project_Primaris_D_Main\Models\Shoulder_Phobos.p3d";
		};
				hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Specialists\Textures\Recon_PrimArmour.paa"
		};
	};
	class SR_MK2_Shoulders_Recon : SR_MK2_Shoulders_Apothecary
	{
		displayName="MK 2 Pauldrons (TSR Recon)";
		hiddenSelectionsTextures[] =
		{
			"SR_Specialists\Textures\Recon_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};

}; // End of CfgWeapons
