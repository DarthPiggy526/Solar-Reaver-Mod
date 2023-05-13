//
// CfgWeapons Includes Helmets, Power Armor, & Pauldrons
// Replace any mention of Blackshield with your Chapter Prefix WITHOUT Brackets


class Cfgweapons
{
//
//		# PowerArmor/Uniform #
//  Does not require specialisations (so far only the Blackshield require company marking)
//

	class TIOW_MK2PowerArmor_1_WS;
	class TIOW_MK3PowerArmor_1_WS;
	class TIOW_MK4PowerArmor_1_WS;
	class TIOW_MK5PowerArmor_1_WS;
	class TIOW_MK6PowerArmor_1_WS;
	class TIOW_MK7PowerArmor_1_WS;
	class TIOW_Mk7PowerArmorImperialis_1_WS;
	class TIOW_MK8PowerArmor_1_WS;
	class ItemInfo;

	class SR_MK2_Armor_Blackshield: TIOW_MK2PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 2 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SR_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK2_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK3_Armor_Blackshield: TIOW_MK3PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 3 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SR_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK3_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK4_Armor_Blackshield: TIOW_MK4PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 4 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SR_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK4_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK5_Armor_Blackshield: TIOW_MK5PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 5 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SR_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK5_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK6_Armor_Blackshield: TIOW_MK6PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 6 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SR_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK6_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK7_Armor_Blackshield: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 7 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SR_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK8_Armor_Blackshield: TIOW_MK8PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 8 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SR_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK8_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK7_ImperialisArmor_Blackshield: TIOW_Mk7PowerArmorImperialis_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 7 Imperialis Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SR_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7Imp_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	// Helmets
	class HeadgearItem;
	class TIOW_MK2Helmet_UM;
	class TIOW_MK3Helmet_UM;
	class TIOW_MK4Helmet_UM;
	class TIOW_MK5Helmet_UM;
	class TIOW_MK6Helmet_UM;
	class TIOW_MK7Helmet_UM;
	class TIOW_MK7KnightHelmet_UM;

	// Invisible Helmet --- alt
	// class SR_Invisible_Helmet: TIOW_MK7Helmet_UM
	// {
		// scope=2;
		// scopeArsenal=2;
		// scopeCurator=2;
		// displayName="[TSR] Invisible helmet (TSR)";
		// optreVarietys[] = {"","_dp","_broken"};
		// optreHUDStyle = "ODST_1";
		// picture="\TIOW_SM\Icon\MK7Helmet_ca.paa";
		// model="\A3\Weapons_f\dummyweapon.p3d";
		// class ItemInfo: HeadgearItem
		// {
			// uniformModel="\A3\Weapons_F\DummyHeadgear.p3d";
		// }
	// }
	
	//Invisible Helmet
	class ItemCore;
	class SR_Invisible_Helmet: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[TSR] Invisible Helmet";
		picture = "\TIOW_SM\Icon\MK7Helmet_ca.paa";
		model="\SR_FirstBorn\Data\null.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[]={"\SR_FirstBorn\Data\null_CA.paa";};
		hiddenSelectionsMaterials[] = {};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\SR_FirstBorn\Data\null.p3d";
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
	
	class SR_SkullHelmet_Black: TIOW_MK7Helmet_UM
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[TSR] Chaplain Helmet (TSR)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		picture="\TIOW_SM\Icon\MK7Helmet_ca.paa";
		model="\TIOW_SM\Marine\Model\TIOW_Skull_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet.paa"
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
				"SR_FirstBorn\Textures\Blackshield_Helmet.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"TIOW_SM\Marine\Data\Materials\TIOW_Marine_Head.rvmat",
				"a3\data_f\lights\car_panels.rvmat"
			};
		};
	};
	class SR_MK2_Helmet_Black: TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Helmet (TSR Black)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet.paa"
		};
	};
	class SR_MK3_Helmet_Black: TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 3 Helmet (TSR Black)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet.paa"
		};
	};
	class SR_MK4_Helmet_Black: TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 4 Helmet (TSR Black)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet.paa"
		};
	};
	class SR_MK5_Helmet_Black: TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 5 Helmet (TSR Black)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet.paa"
		};
	};
	class SR_MK6_Helmet_Black: TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 6 Helmet (TSR Black)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet.paa"
		};
	};
	class SR_MK7K_Helmet_Black: TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7K Helmet (TSR Black)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet.paa"
		};
	};
	class SR_MK7_Helmet_Black: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (TSR Black)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet.paa"
		};
	};
	class SR_MK2_Helmet_BlackReaver: TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Helmet (TSR Blackshield Reaver)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK3_Helmet_BlackReaver: TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 3 Helmet (TSR Blackshield Reaver)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK4_Helmet_BlackReaver: TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 4 Helmet (TSR Blackshield Reaver)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK5_Helmet_BlackReaver: TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 5 Helmet (TSR Blackshield Reaver)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK6_Helmet_BlackReaver: TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 6 Helmet (TSR Blackshield Reaver)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK7K_Helmet_BlackReaver: TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7K Helmet (TSR Blackshield Reaver)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK7_Helmet_BlackReaver: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (TSR Blackshield Reaver)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK2_Helmet_BlackLT: TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Helmet (TSR Blackshield LT)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_LT.paa"
		};
	};
	class SR_MK3_Helmet_BlackLT: TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 3 Helmet (TSR Blackshield LT)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_LT.paa"
		};
	};
	class SR_MK4_Helmet_BlackLT: TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 4 Helmet (TSR Blackshield LT)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_LT.paa"
		};
	};
	class SR_MK5_Helmet_BlackLT: TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 5 Helmet (TSR Blackshield LT)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_LT.paa"
		};
	};
	class SR_MK6_Helmet_BlackLT: TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 6 Helmet (TSR Blackshield LT)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_LT.paa"
		};
	};
	class SR_MK7K_Helmet_BlackLT: TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7K Helmet (TSR Blackshield LT)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_LT.paa"
		};
	};
	class SR_MK7_Helmet_BlackLT: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (TSR Blackshield LT)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_LT.paa"
		};
	};
	class SR_MK2_Helmet_BlackSer: TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Helmet (TSR Blackshield Ser)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Ser.paa"
		};
	};
	class SR_MK3_Helmet_BlackSer: TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 3 Helmet (TSR Blackshield Ser)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Ser.paa"
		};
	};
	class SR_MK4_Helmet_BlackSer: TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 4 Helmet (TSR Blackshield Ser)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Ser.paa"
		};
	};
	class SR_MK5_Helmet_BlackSer: TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 5 Helmet (TSR Blackshield Ser)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Ser.paa"
		};
	};
	class SR_MK6_Helmet_BlackSer: TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 6 Helmet (TSR Blackshield Ser)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Ser.paa"
		};
	};
	class SR_MK7K_Helmet_BlackSer: TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7K Helmet (TSR Blackshield Ser)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Ser.paa"
		};
	};
	class SR_MK7_Helmet_BlackSer: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (TSR Blackshield Ser)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Ser.paa"
		};
	};
	class SR_MK2_Helmet_BlackVet: TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Helmet (TSR Blackshield Vet)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Vet.paa"
		};
	};
	class SR_MK3_Helmet_BlackVet: TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 3 Helmet (TSR Blackshield Vet)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Vet.paa"
		};
	};
	class SR_MK4_Helmet_BlackVet: TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 4 Helmet (TSR Blackshield Vet)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Vet.paa"
		};
	};
	class SR_MK5_Helmet_BlackVet: TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 5 Helmet (TSR Blackshield Vet)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Vet.paa"
		};
	};
	class SR_MK6_Helmet_BlackVet: TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 6 Helmet (TSR Blackshield Vet)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Vet.paa"
		};
	};
	class SR_MK7K_Helmet_BlackVet: TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7K Helmet (TSR Blackshield Vet)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Vet.paa"
		};
	};
	class SR_MK7_Helmet_BlackVet: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (TSR Blackshield Vet)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Vet.paa"
		};
	};
	class SR_MK2_Helmet_Marauder: TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Helmet (TSR Marauder)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet.paa"
		};
	};
	class SR_MK3_Helmet_Marauder: TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 3 Helmet (TSR Marauder)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet.paa"
		};
	};
	class SR_MK4_Helmet_Marauder: TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 4 Helmet (TSR Marauder)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet.paa"
		};
	};
	class SR_MK5_Helmet_Marauder: TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 5 Helmet (TSR Marauder)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet.paa"
		};
	};
	class SR_MK6_Helmet_Marauder: TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 6 Helmet (TSR Marauder)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet.paa"
		};
	};
	class SR_MK7K_Helmet_Marauder: TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7K Helmet (TSR Marauder)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet.paa"
		};
	};
	class SR_MK7_Helmet_Marauder: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (TSR Marauder)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet.paa"
		};
	};
	class SR_MK2_Helmet_ChiefMarauder: TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Helmet (TSR Marauder Chief)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet_Chief.paa"
		};
	};
	class SR_MK3_Helmet_ChiefMarauder: TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 3 Helmet (TSR Marauder Chief)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet_Chief.paa"
		};
	};
	class SR_MK4_Helmet_ChiefMarauder: TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 4 Helmet (TSR Marauder Chief)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet_Chief.paa"
		};
	};
	class SR_MK5_Helmet_ChiefMarauder: TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 5 Helmet (TSR Marauder Chief)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet_Chief.paa"
		};
	};
	class SR_MK6_Helmet_ChiefMarauder: TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 6 Helmet (TSR Marauder Chief)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet_Chief.paa"
		};
	};
	class SR_MK7K_Helmet_ChiefMarauder: TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7K Helmet (TSR Marauder Chief)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet_Chief.paa"
		};
	};
	class SR_MK7_Helmet_ChiefMarauder: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (TSR Marauder Chief)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Marauder_Helmet_Chief.paa"
		};
	};



	// Armors/Shoulders pads
	
	class TIOW_MK2Limbs_UM;
	class SR_MK2_Shoulders_Conscript : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Pauldrons (TSR Conscript)";
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\Textures\SR_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
	class SR_MK2_Shoulders_Blackshield : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Pauldrons (TSR Blackshield)";
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\Textures\SRBS_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
	class SR_MK2_Shoulders_Reaver : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Pauldrons (TSR Reaver)";
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\Textures\SRReaver_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};

}; // End of CfgWeapons
