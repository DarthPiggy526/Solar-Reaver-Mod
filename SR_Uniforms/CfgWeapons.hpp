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
		displayName="MK 2 Power Armor (TSR Blackshield)";
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
		displayName="MK 3 Power Armor (TSR Blackshield)";
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
		displayName="MK 4 Power Armor (TSR Blackshield)";
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
		displayName="MK 5 Power Armor (TSR Blackshield)";
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
		displayName="MK 6 Power Armor (TSR Blackshield)";
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
		displayName="MK 7 Power Armor (TSR Blackshield)";
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
		displayName="MK 8 Power Armor (TSR Blackshield)";
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
		displayName="MK 7 Imperialis Power Armor (TSR Blackshield)";
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

	// Chapter Armors

	class SR_MK7_Armor_AlphaLegion: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Alpha Legion)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_AL"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
		class SR_MK7_Armor_BloodAngels: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Blood Angels)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_BA"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class SR_MK7_Armor_DarkAngels: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Dark Angels)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_DA"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_DeathGuard: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Death Guard)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_DG"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	}
		class SR_MK7_Armor_EmperorsChildren: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Emperor's Children)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_EC"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_ImperialFists: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Imperial Fists)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_IF"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_IronHands: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Iron Hands)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_IH"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_IronWarriors: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Iron Warriors)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_IW"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_LunaWolves: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Luna Wolves)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_LW"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_NightLords: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Night Lords)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_NL"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_RavenGuard: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Raven Guard)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_RG"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_Salamanders: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Salamanders)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_SAL"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_SpaceWolves: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Space Wolves)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_SW"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_ThousandSons: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Thousand Sons)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_TSons"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_Ultramarines: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Ultramarines)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_UM"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_WordBearers: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Word Bearers)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_WB"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_WorldEaters: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR World Eaters)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_WE"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class SR_MK7_Armor_WhiteScars: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR White Scars)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_WS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
				class SR_MK7_Armor_DeathStrike: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR Death Strike)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_DeathStrike"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	// 				class SR_MK7_Armor_CelestialLions: TIOW_MK7PowerArmor_1_WS
	// {
	// 	author="Strixus";
	// 	displayName="MK 7 Power Armor (TSR Celestial Lions)";
	// 	class ItemInfo: ItemInfo
	// 	{
	// 		uniformClass="TIOW_MK7_Tact_SR_CelestialLions"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
	// 	};
	// };
						class SR_MK7_Armor_NightLords2: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="Sevatar";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_NightLords2"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	
	class TIOW_MK2Limbs_UM;
	
	class SR_MK2_Shoulders_Conscript : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Conscript)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_Blackshield : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Blackshield)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\SRBS_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
	class SR_MK2_Shoulders_AlphaLegion : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Alpha Legion)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\AL_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_BloodAngels : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Blood Angels)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\BA_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_DarkAngels : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Dark Angels)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\DA_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_DeathGuard : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Death Guard)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\DG_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_EmperorsChildren : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Emperor's Children)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\EC_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_ImperialFists : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Imperial Fists)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\IF_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_IronHands : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Iron Hands)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\IH_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_IronWarriors : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Iron Warriors)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\IW_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_LunaWolves : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Luna Wolves)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\LW_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_NightLords : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Night Lords)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\NL_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_RavenGuard : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Raven Guard)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\RG_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_Salamanders : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Salamanders)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\SAL_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_SpaceWolves : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Space Wolves)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\SW_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_ThousandSons : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Thousand Sons)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\TSons_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_Ultramarines : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Ultramarines)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\UM_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_WordBearers : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Word Bearers)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\WB_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_WorldEaters : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR World Eaters)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\WE_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class SR_MK2_Shoulders_WhiteScars : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR White Scars)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\WS_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
			class SR_MK2_Shoulders_DeathStrike : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Death Strike)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\DS_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
	// 			class SR_MK2_Shoulders_CelestialLions : TIOW_MK2Limbs_UM
	// {
	// 	author="Strixus";
	// 	displayName="MK 2 Pauldrons (TSR Celestial Lions)";
	// 	hiddenSelectionsTextures[] =
	// 	{
	// 		"SR_Uniforms\Textures\CL_Armour1.paa",
	// 		"SR_Uniforms\Textures\SR_Armour2.paa"
	// 	};
	// };
					class SR_MK2_Shoulders_NightLords2 : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="Sevatar";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\NL2_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
}; // End of CfgWeapons
