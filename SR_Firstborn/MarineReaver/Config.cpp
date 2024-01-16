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

	class TIOW_MK2_Tact_SR_BS;
	class TIOW_MK3_Tact_SR_BS;
	class TIOW_MK4_Tact_SR_BS;
	class TIOW_MK5_Tact_SR_BS;
	class TIOW_MK6_Tact_SR_BS;
	class TIOW_MK7_Tact_SR_BS;
	class TIOW_MK8_Tact_SR_BS;

	class TIOW_MK2_Tact_SR_Reaver: TIOW_MK2_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. II)";
		uniformClass="SR_MK2_Armor_Reaver"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRReaver_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
	class TIOW_MK3_Tact_SR_Reaver: TIOW_MK3_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. III)";
		uniformClass="SR_MK3_Armor_Reaver"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRReaver_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
	class TIOW_MK4_Tact_SR_Reaver: TIOW_MK4_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. IV)";
		uniformClass="SR_MK4_Armor_Reaver"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRReaver_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
	class TIOW_MK5_Tact_SR_Reaver: TIOW_MK5_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. V)";
		uniformClass="SR_MK5_Armor_Reaver"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRReaver_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
	class TIOW_MK6_Tact_SR_Reaver: TIOW_MK6_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VI)";
		uniformClass="SR_MK6_Armor_Reaver"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRReaver_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};
















	class TIOW_MK7_Tact_SR_Reaver: TIOW_MK7_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VII)";
		uniformClass="SR_MK7_Armor_Reaver"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRReaver_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};


	class TIOW_MK8_Tact_SR_Reaver: TIOW_MK8_Tact_SR_BS
	{
		author="Strixus";
		displayName="Tactical Marine (MK. VIII)";
		uniformClass="SR_MK8_Armor_Reaver"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\SRReaver_Armour1.paa",
			"SR_FirstBorn\Textures\SR_Armour2.paa"
		};
	};

};
class CfgWeapons
{
	class ItemInfo;
	class TIOW_MK2PowerArmor_1_WS;
	class TIOW_MK3PowerArmor_1_WS;
	class TIOW_MK4PowerArmor_1_WS;
	class TIOW_MK5PowerArmor_1_WS;
	class TIOW_MK6PowerArmor_1_WS;
	class TIOW_MK7PowerArmor_1_WS;
	class TIOW_MK8PowerArmor_1_WS;

	class SR_MK2_Armor_Reaver: TIOW_MK2PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 2 Power Armor (Reaver)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK2_Tact_SR_Reaver"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK3_Armor_Reaver: TIOW_MK3PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 3 Power Armor (Reaver)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK3_Tact_SR_Reaver"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK4_Armor_Reaver: TIOW_MK4PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 4 Power Armor (Reaver)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK4_Tact_SR_Reaver"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK5_Armor_Reaver: TIOW_MK5PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 5 Power Armor (Reaver)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK5_Tact_SR_Reaver"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK6_Armor_Reaver: TIOW_MK6PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 6 Power Armor (Reaver)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK6_Tact_SR_Reaver"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};




	class SR_MK7_Armor_Reaver: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 7 Power Armor (Reaver)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_Reaver"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK8_Armor_Reaver: TIOW_MK8PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[TSR] MK 8 Power Armor (Reaver)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK8_Tact_SR_Reaver"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};


	class TIOW_MK2Helmet_UM;
	class TIOW_MK3Helmet_UM;
	class TIOW_MK4Helmet_UM;
	class TIOW_MK5Helmet_UM;
	class TIOW_MK6Helmet_UM;
	class TIOW_MK7KnightHelmet_UM;
	class TIOW_MK7Helmet_UM;
	class SR_MK2_Helmet_BlackReaver: TIOW_MK2Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 2 Helmet (Blackshield Reaver)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK3_Helmet_BlackReaver: TIOW_MK3Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 3 Helmet (Blackshield Reaver)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK4_Helmet_BlackReaver: TIOW_MK4Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 4 Helmet (Blackshield Reaver)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK5_Helmet_BlackReaver: TIOW_MK5Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 5 Helmet (Blackshield Reaver)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK6_Helmet_BlackReaver: TIOW_MK6Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 6 Helmet (Blackshield Reaver)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK7K_Helmet_BlackReaver: TIOW_MK7KnightHelmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7K Helmet (Blackshield Reaver)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
	class SR_MK7_Helmet_BlackReaver: TIOW_MK7Helmet_UM
	{
		author="Strixus";
		displayName="[TSR] MK 7 Helmet (Blackshield Reaver)";

		hiddenSelectionsTextures[]=
		{
			"SR_FirstBorn\Textures\Blackshield_Helmet_Reaver.paa"
		};
	};
};