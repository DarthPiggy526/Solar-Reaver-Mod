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
		displayName="[SR] MK 2 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK2_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK3_Armor_Blackshield: TIOW_MK3PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[SR] MK 3 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK3_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK4_Armor_Blackshield: TIOW_MK4PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[SR] MK 4 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK4_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK5_Armor_Blackshield: TIOW_MK5PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[SR] MK 5 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK5_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK6_Armor_Blackshield: TIOW_MK6PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[SR] MK 6 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK6_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	class SR_MK7_Armor_Blackshield: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[SR] MK 7 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK8_Armor_Blackshield: TIOW_MK8PowerArmor_1_WS
	{
		author="Strixus";
		displayName="[SR] MK 8 Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK8_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK7_ImperialisArmor_Blackshield: TIOW_Mk7PowerArmorImperialis_1_WS
	{
		author="Strixus";
		displayName="[SR] MK 7 Imperialis Power Armor (TSR Blackshield)";
		hiddenSelectionsTextures[]=
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7Imp_Tact_SR_BS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};

	// Armors/Shoulders pads
	class TIOW_MK2Limbs_UM;
	class SR_MK2_Shoulders_Conscript : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="[SR] MK 2 Pauldrons (TSR Conscript)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
	class SR_MK2_Shoulders_Blackshield : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="[SR] MK 2 Pauldrons (TSR Blackshield)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\SRBS_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
}; // End of CfgWeapons
