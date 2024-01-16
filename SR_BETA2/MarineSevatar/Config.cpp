class CfgPatches
{
	class TIOW_Inf_SR_Sevatar
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
	class TIOW_MK7_Tact_SR_NightLords2: TIOW_MK7_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VII)";
		uniformClass="SR_MK7_Armor_NightLords2"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{	
			"SR_FirstBorn\Textures\NL2_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class TIOW_MK7PowerArmor_1_WS;
	class SR_MK7_Armor_NightLords2: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] Sevatar";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_NightLords2"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK2_Shoulders_Blackshield;
	class SR_MK2_Shoulders_NightLords2 : SR_MK2_Shoulders_Blackshield
	{
		author="Strixus";
		displayName="[TSR] Sevatar";
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\Textures\NL2_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
	class TIOW_MK7Helmet_UM;
	class SR_MK7_Helmet_NightLord2: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] Sevatar";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\NLB_Helmet.paa"
		};
	};
};