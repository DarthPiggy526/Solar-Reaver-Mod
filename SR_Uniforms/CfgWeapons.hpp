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

	class TIOW_MK2PowerArmor_SR_Blackshield: TIOW_MK2PowerArmor_1_WS
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

	class TIOW_MK3PowerArmor_SR_Blackshield: TIOW_MK3PowerArmor_1_WS
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

	class TIOW_MK4PowerArmor_SR_Blackshield: TIOW_MK4PowerArmor_1_WS
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

	class TIOW_MK5PowerArmor_SR_Blackshield: TIOW_MK5PowerArmor_1_WS
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

	class TIOW_MK6PowerArmor_SR_Blackshield: TIOW_MK6PowerArmor_1_WS
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

	class TIOW_MK7PowerArmor_SR_Blackshield: TIOW_MK7PowerArmor_1_WS
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
	class TIOW_MK8PowerArmor_SR_Blackshield: TIOW_MK8PowerArmor_1_WS
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
	class TIOW_MKMK7ImpPowerArmor_SR_Blackshield: TIOW_Mk7PowerArmorImperialis_1_WS
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

	class TIOW_MK7PowerArmor_SR_AL: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR AL)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_AL"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
		class TIOW_MK7PowerArmor_SR_BA: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR BA)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_BA"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class TIOW_MK7PowerArmor_SR_DA: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR DA)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_DA"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_DG: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR DG)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_DG"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	}
		class TIOW_MK7PowerArmor_SR_EC: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR EC)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_EC"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_IF: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR IF)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_IF"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_IH: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR IH)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_IH"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_IW: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR IW)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_IW"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_LW: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR LW)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_LW"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_NL: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR NL)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_NL"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_RG: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR RG)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_RG"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_SAL: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR SAL)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_SAL"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_SW: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR SW)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_SW"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_TSons: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR TSons)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_TSons"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_UM: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR UM)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_UM"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_WB: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR WB)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_WB"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_WE: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR WE)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_WE"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
			class TIOW_MK7PowerArmor_SR_WS: TIOW_MK7PowerArmor_1_WS
	{
		author="Strixus";
		displayName="MK 7 Power Armor (TSR WS)";
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_MK7_Tact_SR_WS"; // This will be the classname of a placeable unit, as seen in Vehicles.HPP
		};
	};
	class TIOW_MK2Limbs_UM;
	
	class TIOW_MK2Limbs_SR_Conscript_Tac : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Conscript)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\SR_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_Blackshield_Tac : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR Blackshield)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\SRBS_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
	class TIOW_MK2Limbs_SR_AL : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR AL)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\AL_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_BA : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR BA)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\BA_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_DA : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR DA)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\DA_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_DG : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR DG)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\DG_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_EC : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR EC)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\EC_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_IF : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR IF)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\IF_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_IH : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR IH)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\IH_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_IW : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR IW)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\IW_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_LW : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR LW)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\LW_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_NL : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR NL)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\NL_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_RG : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR RG)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\RG_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_SAL : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR SAL)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\SAL_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_SW : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR SW)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\SW_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_TSons : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR TSons)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\TSons_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_UM : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR UM)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\UM_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_WB : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR WB)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\WB_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_WE : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR WE)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\WE_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
		class TIOW_MK2Limbs_SR_WS : TIOW_MK2Limbs_UM
	{
		author="Strixus";
		displayName="MK 2 Pauldrons (TSR WS)";
		hiddenSelectionsTextures[] =
		{
			"SR_Uniforms\Textures\WS_Armour1.paa",
			"SR_Uniforms\Textures\SR_Armour2.paa"
		};
	};
}; // End of CfgWeapons
