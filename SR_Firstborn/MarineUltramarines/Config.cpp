class CfgPatches
{
	class TIOW_Inf_SR_Ultramarines
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
	class TIOW_MK7_Tact_SR_UM: TIOW_MK7_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VII)";
		uniformClass="SR_MK7_Armor_Ultramarines"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\UM_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class TIOW_MK7PowerArmor_1_WS;
	class SR_MK7_Armor_Ultramarines: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 7 Power Armor (Ultramarines)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_UM"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK2_Shoulders_Blackshield;
	class SR_MK2_Shoulders_Ultramarines : SR_MK2_Shoulders_Blackshield
	{
		author="Strixus";
		displayName="[TSR] MK 2 Pauldrons (Ultramarines)";
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\Textures\UM_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
	class TIOW_MK7Helmet_UM;
	class SR_MK7_Helmet_Ultramarines: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (Ultramarines)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\UM_Helmet.paa"
		};
	};
};