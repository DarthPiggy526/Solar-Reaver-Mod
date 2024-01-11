class CfgPatches
{
	class TIOW_Inf_SR_Nal
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
	class TIOW_MK7_Tact_SR_Nal: TIOW_MK7_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VII)";
		uniformClass="SR_MK7_Armor_Nal"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Nalcius_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
};



class CfgWeapons
{
	class ItemInfo;
	class SR_MK2_Shoulders_Blackshield;
	class TIOW_MK7PowerArmor_1_WS;
	class SR_MK7_Armor_Nal: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 7 Power Armor (Nal)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_Nal"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};


	class SR_MK2_Shoulders_Nal : SR_MK2_Shoulders_Blackshield
	{
		author="Barbon";
		displayName="[TSR] Nal";
		hiddenSelectionsTextures[] =
		{
			"SR_FirstBorn\Textures\Nalcius_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};

	class TIOW_MK2Helmet_UM;
	class TIOW_MK3Helmet_UM;
	class TIOW_MK4Helmet_UM;
	class TIOW_MK5Helmet_UM;
	class TIOW_MK6Helmet_UM;
	class TIOW_MK7Helmet_UM;
	class TIOW_MK7KnightHelmet_UM;
	class SR_MK2_Helmet_Nal: TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Helmet (Nal)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Nalcius_Helmet.paa"
		};
	};
	class SR_MK3_Helmet_Nal: TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 3 Helmet (Nal)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Nalcius_Helmet.paa"
		};
	};
	class SR_MK4_Helmet_Nal: TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 4 Helmet (Nal)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Nalcius_Helmet.paa"
		};
	};
	class SR_MK5_Helmet_Nal: TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 5 Helmet (Nal)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Nalcius_Helmet.paa"
		};
	};
	class SR_MK6_Helmet_Nal: TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 6 Helmet (Nal)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Nalcius_Helmet.paa"
		};
	};
	class SR_MK7K_Helmet_Nal: TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7K Helmet (Nal)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Nalcius_Helmet.paa"
		};
	};
	class SR_MK7_Helmet_Nal: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (Nal)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Nalcius_Helmet.paa"
		};
	};


};