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

		class SR_SkullHelmet_Black: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="Chaplain Helmet (TSR)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		picture="\TIOW_SM\Icon\MK7Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\TIOW_Skull_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Helm\Textures\Blackshield_Helmet.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
			"a3\data_f\lights\car_panels.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\TIOW_SM\Marine\Model\TIOW_Skull_Helmet.p3d";
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"SR_Helm\Textures\Blackshield_Helmet.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
				"a3\data_f\lights\car_panels.rvmat"
			};
		};
	};

	class SR_MK2_Helmet_Black : TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName = "MK 2 Helmet (TSR Black)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Blackshield_Helmet.paa"
		};
	};
	class SR_MK3_Helmet_Black : TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName = "MK 3 Helmet (TSR Black)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	  {
	    "SR_Helm\Textures\Blackshield_Helmet.paa"
	  };
	};
	class SR_MK4_Helmet_Black : TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName = "MK 4 Helmet (TSR Black)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet.paa"
	    };
	};
	class SR_MK5_Helmet_Black : TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName = "MK 5 Helmet (TSR Black)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet.paa"
	    };
	};
	class SR_MK6_Helmet_Black : TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName = "MK 6 Helmet (TSR Black)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Blackshield_Helmet.paa"
		};
	};
	class SR_MK7K_Helmet_Black : TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName = "MK 7K Helmet (TSR Black)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet.paa"
	    };
	};
	class SR_MK7_Helmet_Black : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Black)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\Blackshield_Helmet.paa"
		   };
	  };

// LT Helm

	  	class SR_MK2_Helmet_BlackLT : TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName = "MK 2 Helmet (TSR Blackshield LT)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Blackshield_Helmet_LT.paa"
		};
	};

	class SR_MK3_Helmet_BlackLT : TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName = "MK 3 Helmet (TSR Blackshield LT)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	  {
	    "SR_Helm\Textures\Blackshield_Helmet_LT.paa"
	  };
	};
	class SR_MK4_Helmet_BlackLT : TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName = "MK 4 Helmet (TSR Blackshield LT)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet_LT.paa"
	    };
	};
	class SR_MK5_Helmet_BlackLT : TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName = "MK 5 Helmet (TSR Blackshield LT)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet_LT.paa"
	    };
	};
	class SR_MK6_Helmet_BlackLT : TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName = "MK 6 Helmet (TSR Blackshield LT)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Blackshield_Helmet_LT.paa"
		};
	};
	class SR_MK7K_Helmet_BlackLT : TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName = "MK 7K Helmet (TSR Blackshield LT)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet_LT.paa"
	    };
	};
	class SR_MK7_Helmet_BlackLT : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Blackshield LT)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\Blackshield_Helmet_LT.paa"
		   };
	  };

	  // Blackshield Sergeant

	  	class SR_MK2_Helmet_BlackSer : TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName = "MK 2 Helmet (TSR Blackshield Ser)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Blackshield_Helmet_Ser.paa"
		};
	};
	class SR_MK3_Helmet_BlackSer : TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName = "MK 3 Helmet (TSR Blackshield Ser)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	  {
	    "SR_Helm\Textures\Blackshield_Helmet_Ser.paa"
	  };
	};
	class SR_MK4_Helmet_BlackSer : TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName = "MK 4 Helmet (TSR Blackshield Ser)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet_Ser.paa"
	    };
	};
	class SR_MK5_Helmet_BlackSer : TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName = "MK 5 Helmet (TSR Blackshield Ser)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet_Ser.paa"
	    };
	};
	class SR_MK6_Helmet_BlackSer : TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName = "MK 6 Helmet (TSR Blackshield Ser)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Blackshield_Helmet_Ser.paa"
		};
	};

	class SR_MK7K_Helmet_BlackSer : TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName = "MK 7K Helmet (TSR Blackshield Ser)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet_Ser.paa"
	    };
	};
	class SR_MK7_Helmet_BlackSer : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Blackshield Ser)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\Blackshield_Helmet_Ser.paa"
		   };
	  };
	  // Blackshield Vet

	  class SR_MK2_Helmet_BlackVet : TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName = "MK 2 Helmet (TSR Blackshield Vet)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Blackshield_Helmet_Vet.paa"
		};
	};
	class SR_MK3_Helmet_BlackVet : TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName = "MK 3 Helmet (TSR Blackshield Vet)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	  {
	    "SR_Helm\Textures\Blackshield_Helmet_Vet.paa"
	  };
	};
	class SR_MK4_Helmet_BlackVet : TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName = "MK 4 Helmet (TSR Blackshield Vet)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet_Vet.paa"
	    };
	};
	class SR_MK5_Helmet_BlackVet : TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName = "MK 5 Helmet (TSR Blackshield Vet)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet_Vet.paa"
	    };
	};
	class SR_MK6_Helmet_BlackVet : TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName = "MK 6 Helmet (TSR Blackshield Vet)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Blackshield_Helmet_Vet.paa"
		};
	};

	class SR_MK7K_Helmet_BlackVet : TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName = "MK 7K Helmet (TSR Blackshield Vet)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Blackshield_Helmet_Vet.paa"
	    };
	};
	class SR_MK7_Helmet_BlackVet : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Blackshield Vet)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\Blackshield_Helmet_Vet.paa"
		   };
	  };

// Marauder Helmet
class SR_MK2_Helmet_Marauder : TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName = "MK 2 Helmet (TSR Marauder)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Marauder_Helmet.paa"
		};
	};
	class SR_MK3_Helmet_Marauder : TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName = "MK 3 Helmet (TSR Marauder)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	  {
	    "SR_Helm\Textures\Marauder_Helmet.paa"
	  };
	};
	class SR_MK4_Helmet_Marauder : TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName = "MK 4 Helmet (TSR Marauder)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Marauder_Helmet.paa"
	    };
	};
	class SR_MK5_Helmet_Marauder : TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName = "MK 5 Helmet (TSR Marauder)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Marauder_Helmet.paa"
	    };
	};
	class SR_MK6_Helmet_Marauder : TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName = "MK 6 Helmet (TSR Marauder)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Marauder_Helmet.paa"
		};
	};
	class SR_MK7K_Helmet_Marauder : TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName = "MK 7K Helmet (TSR Marauder)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Marauder_Helmet.paa"
	    };
	};
	class SR_MK7_Helmet_Marauder : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Marauder)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\Marauder_Helmet.paa"
		   };
	  };

// Chief Marauder
class SR_MK2_Helmet_ChiefMarauder : TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName = "MK 2 Helmet (TSR Marauder Chief)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Marauder_Helmet_Chief.paa"
		};
	};
	class SR_MK3_Helmet_ChiefMarauder : TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName = "MK 3 Helmet (TSR Marauder Chief)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	  {
	    "SR_Helm\Textures\Marauder_Helmet_Chief.paa"
	  };
	};
	class SR_MK4_Helmet_ChiefMarauder : TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName = "MK 4 Helmet (TSR Marauder Chief)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Marauder_Helmet_Chief.paa"
	    };
	};

	class SR_MK5_Helmet_ChiefMarauder : TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName = "MK 5 Helmet (TSR Marauder Chief)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Marauder_Helmet_Chief.paa"
	    };
	};
	class SR_MK6_Helmet_ChiefMarauder : TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName = "MK 6 Helmet (TSR Marauder Chief)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		{
			"SR_Helm\Textures\Marauder_Helmet_Chief.paa"
		};
	};
	class SR_MK7K_Helmet_ChiefMarauder : TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName = "MK 7K Helmet (TSR Marauder Chief)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
	    {
	      "SR_Helm\Textures\Marauder_Helmet_Chief.paa"
	    };
	};
	class SR_MK7_Helmet_ChiefMarauder : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Marauder Chief)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\Marauder_Helmet_Chief.paa"
		   };
	  };
	  // Chapter Helms

	  	class SR_MK7_Helmet_AlphaLegion : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Alpha Legion)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\AL_Helmet.paa"
		   };
	  };

	  
	  	class SR_MK7_Helmet_BloodAngels : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Blood Angels)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\BA_Helmet.paa"
		   };
	  };

	  	  	class SR_MK7_Helmet_DarkAngels : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Dark Angels)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\DA_Helmet.paa"
		   };
	  };
	  	class SR_MK7_Helmet_DeathGuard : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Death Guard)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\DG_Helmet.paa"
		   };
	  };
	  	  	  	class SR_MK7_Helmet_EmperorsChildren : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Emperor's Children)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\EC_Helmet.paa"
		   };
	  };

	  	  	  	class SR_MK7_Helmet_ImperialFists : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Imperial Fists)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\IF_Helmet.paa"
		   };
	  };

	  	  	  	class SR_MK7_Helmet_IronWarriors : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Iron Warriors)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\IW_Helmet.paa"
		   };
	  };

	  	  	  	class SR_MK7_Helmet_LunaWolves : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Luna Wolves)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\LW_Helmet.paa"
		   };
	  };

	  	  	  	class SR_MK7_Helmet_NightLords : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Night Lords)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\NL_Helmet.paa"
		   };
	  };

	  	  	  	class SR_MK7_Helmet_Salamanders : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Salamanders)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\SAL_Helmet.paa"
		   };
	  };

	  	  	  	class SR_MK7_Helmet_SpaceWolves : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Space Wolves)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\SW_Helmet.paa"
		   };
	  };

	  	  	  	class SR_MK7_Helmet_ThousandSons : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Thousand Sons)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\TSons_Helmet.paa"
		   };
	  };

	  	  	  	class SR_MK7_Helmet_Ultramarines : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Ultramarines)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\UM_Helmet.paa"
		   };
	  };

	  	  	  	class SR_MK7_Helmet_WordBearers : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Word Bearers)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\WB_Helmet.paa"
		   };
	  };
	  	  	  	class SR_MK7_Helmet_WorldEaters : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR World Eaters)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\WE_Helmet.paa"
		   };
	  };

	  	  	  	class SR_MK7_Helmet_WhiteScars : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR White)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\WS_Helmet.paa"
		   };
	  };
	  	  	  	  	class SR_MK7_Helmet_NightLord2 : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "Sevatar";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\NLB_Helmet.paa"
		   };
	  };
	  	  	  	  	class SR_MK7_Helmet_FleshTearers : TIOW_MK7Helmet_UM
	  {
		author="Strixus";
		displayName = "MK 7 Helmet (TSR Flesh Tearers)";
		optreVarietys[] = {"","_dp","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelectionsTextures[] =
		   {
		     "SR_Helm\Textures\FT_Helmet.paa"
		   };
	  };

//Inviisble Hlmemt
	class ItemCore;
	class SR_Invisible_Helmet: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[SR] Invisible Helmet";
		picture = "\TIOW_SM\Icon\MK7Helmet_ca.paa";
		model="\SR_Helm\Data\null.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[]={"\SR_Helm\Data\null_CA.paa";};
		hiddenSelectionsMaterials[] = {};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\SR_Helm\Data\null.p3d";
			allowedSlots[] = {"UNIFORM_SLOT","BACKPACK_SLOT","VEST_SLOT","HEADGEAR_SLOT"};
			modelSides[] = {6};
			hiddenSelections[] = {};
			hiddenSelectionsMaterials[] = {};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 35;
					passThrough = 0.1;
				};
			};
		};
		subItems[] = {"Integrated_NVG_TI_1_F"};
	};

}; // End of CfgWeapons