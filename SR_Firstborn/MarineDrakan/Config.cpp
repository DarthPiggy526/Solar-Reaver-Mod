class CfgPatches
{
	class TIOW_Inf_SR_Drakan
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
	class TIOW_MK6_Tact_SR_BS;
	class TIOW_MK6_Tact_SR_Drakan: TIOW_MK6_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VI)";
		uniformClass="SR_MK6_Armor_Drakan"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Drakan_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class TIOW_MK6Helmet_UM;
	class SR_MK6_Helmet_Drakan: TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 6 Helmet (Drakan)";
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Drakan_Helmet.paa"
		};
	};
};