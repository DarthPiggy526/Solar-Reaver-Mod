class CfgPatches
{
	class TIOW_Inf_SR_Retributors
	{
		requiredAddons[]=
		{
			"TIOW_Inf_SR"
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
	class TIOW_MK7_Tact_SR_BS;
	class TIOW_MK7_Tact_SR_RB: TIOW_MK7_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VII)";
		uniformClass="SR_MK7_Armor_Retributors"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\RB_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class TIOW_MK7PowerArmor_1_WS;
	class SR_MK7_Armor_Retributors: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 7 Power Armor (Retributors)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_RB"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
//	class SR_MK4_Armor_Blackshield;
//	class SR_MK4_Armor_Retributors: SR_MK4_Armor_Blackshield
//	{
//		author="Strixus";
//		displayName="[TSR] MK 4 Power Armor (Retributors)";
//		hiddenSelectionsTextures[]=
//		{
//			"SR_FirstBorn\Textures\RB_Armour-2-8.paa",
//			"SR_FirstBorn\Textures\RB_Armour1.paa"
//		};
//		class ItemInfo: ItemInfo
//		{
//			uniformClass="TIOW_MK4_Tact_SR_RB_4"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
//		};
//	};
//	class SR_MK4_Armor_Retributors_2: SR_MK4_Armor_Blackshield
//	{
//		author="Strixus";
//		displayName="[TSR] MK 4 Power Armor (Retributors) 2";
//		hiddenSelectionsTextures[]=
//		{
//			"SR_FirstBorn\Textures\RB_Armour-2-8.paa",
//			"SR_FirstBorn\Textures\SR_Armour2.paa"
//		};
//		class ItemInfo: ItemInfo
//		{
//			uniformClass="TIOW_MK4_Tact_SR_RB_4"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
//		};
//	};
	class SR_MK2_Shoulders_Blackshield;
	class SR_MK2_Shoulders_Retributors : SR_MK2_Shoulders_Blackshield
	{
		author="Strixus";
		displayName="[TSR] MK 2 Pauldrons (Retributors)";
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\Textures\RB_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
	class TIOW_MK7Helmet_UM;
	class SR_MK7_Helmet_Retributors: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (Retributors)";
		optreVarietys[]=
		{
			"",
			"_dp",
			"_broken"
		};
		optreHUDStyle="ODST_1";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\RB_Helmet.paa"
		};
	};
};