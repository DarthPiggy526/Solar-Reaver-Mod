class CfgPatches
{
	class TIOW_Inf_SR_Baguette
	{
		requiredAddons[] =
			{
				"TIOW_Inf_SR"};
		requiredVersion = 0.1;
		units[] =
			{};
		weapons[] =
			{};
	};
};

class CfgVehicles
{
	class TIOW_MK7_Tact_SR_BS;
	class TIOW_MK7_Tact_SR_Baguette : TIOW_MK7_Tact_SR_BS
	{
		author = "Strixus";
		displayName = "Tactical Marine (MK. VII)";
		uniformClass = "SR_MK7_Armor_Baguette"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[] =
			{
				"SR_FirstBorn\Textures\Baguette_Armour1.paa",
				"SR_FirstBorn\Textures\SR_Armour2.paa"};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class TIOW_MK7PowerArmor_1_WS;
	class SR_MK7_Armor_Baguette : TIOW_MK7PowerArmor_1_WS
	{
		author = "Strixus";
		displayName = "[TSR] MK 7 Power Armor (Baguette)";
		class ItemInfo : ItemInfo
		{
			uniformClass = "TIOW_MK7_Tact_SR_Baguette"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
};