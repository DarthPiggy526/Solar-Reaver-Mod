//
// CfgVechicles Includes PowerPacks & Units
// Powerpacks are at the bottom of the file,
// Replace any mention of [ID] with your Chapter Prefix WITHOUT Brackets


class CfgVehicles
{

  //
  // # Tactical Marines #
  //

  	class TIOW_Tactical_SL_7; // MK 2
    class TIOW_Tactical_SL_6; // MK 3
    class TIOW_Tactical_SL_5; // MK 4
    class TIOW_Tactical_SL_4; // MK 5
    class TIOW_Tactical_SL_3; // MK 6
	class TIOW_Tactical_SL_2; // MK 8
    class TIOW_Tactical_SL_1; // MK 7
	class TIOW_Tactical_SL_1_Imperialis; // MK 7 Imperialis
 
    class TIOW_MK7_Tact_SR_AL: TIOW_Tactical_SL_1
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_AL"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\AL_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
   class TIOW_MK7_Tact_SR_BA: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_BA"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\BA_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_DA: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_DA"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\DA_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
   class TIOW_MK7_Tact_SR_DG: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_DG"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\DG_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_EC: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_EC"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\EC_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_IF: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_IF"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\IF_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_IH: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_IH"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\IH_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_IW: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_IW"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\IW_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_LW: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_LW"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\LW_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_NL: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_NL"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\NL_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_RG: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_RG"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\RG_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_SAL: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_SAL"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\SAL_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_SW: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_SW"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\SW_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_TSons: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_TSons"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\TSons_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_UM: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_UM"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\UM_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_WB: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_WB"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\WB_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_WE: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_WE"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\WE_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
       class TIOW_MK7_Tact_SR_WS: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_WS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\WS_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
           class TIOW_MK7_Tact_SR_DeathStrike: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_WS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\DS_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
               class TIOW_MK7_Tact_SR_CelestialLions: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_WS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\CL_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
                   class TIOW_MK7_Tact_SR_NightLords2: TIOW_MK7_Tact_SR_AL
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7_Tact_SR_WS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\NL2_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };

    // Solar Reavers Armor

    class TIOW_MK2_Tact_SR_BS: TIOW_Tactical_SL_7
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK2PowerArmor_SR_BS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\SR_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };

    class TIOW_MK3_Tact_SR_BS: TIOW_Tactical_SL_6
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK3PowerArmor_SR_BS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\SR_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };

    class TIOW_MK4_Tact_SR_BS: TIOW_Tactical_SL_5
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK4PowerArmor_SR_BS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\SR_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };

    class TIOW_MK5_Tact_SR_BS: TIOW_Tactical_SL_4
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK5PowerArmor_SR_BS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\SR_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };

    class TIOW_MK6_Tact_SR_BS: TIOW_Tactical_SL_3
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK6PowerArmor_SR_BS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\SR_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };

    class TIOW_MK7_Tact_SR_BS: TIOW_Tactical_SL_1
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7PowerArmor_SR_BS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\SR_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
	class TIOW_MK8_Tact_SR_BS: TIOW_Tactical_SL_2
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VIII)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK8PowerArmor_SR_BS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\SR_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
	class TIOW_MK7Imp_Tact_SR_BS: TIOW_Tactical_SL_1_Imperialis
    {
      author="Strixus";
      displayName="Tactical Marine (MK. VII Imperialis)";
	  scope=1;
      editorCategory= "EdCategory_TheAdeptusAstartes";
      editorSubcategory="EdSubCat_SR";
      backpack="TIOW_MK5Powerpack_SR_BS";
      uniformClass="TIOW_MK7ImpPowerArmor_SR_BS"; // This will be the classname of the PowerArmor, as seen in Weapons.HPP
      hiddenSelectionsTextures[]=
      {
        "SR_Uniforms\Textures\SR_Armour1.paa",
        "SR_Uniforms\Textures\SR_Armour2.paa"
      };
      Items[]={};
	  RespawnItems[]={};
      linkedItems[]={};
      RespawnlinkedItems[]={};
    };
//
//				# Powerpacks/Backpacks #
//

  class TIOW_MK2Powerpack_WS;
  class TIOW_MK4Powerpack_WS;
  class TIOW_MK5Powerpack_WS;
  class TIOW_MK2Powerpack_SR_BS : TIOW_MK2Powerpack_WS
  {
    author = "Strixus";
    displayName = "MK 2 Powerpack (TSR Blackshield)";
	tf_range=50000;
    hiddenSelectionsTextures[] =
    {
      "SR_Uniforms\Textures\BlackShield_PowerPack.paa"
    };
  };

  class TIOW_MK4Powerpack_SR_BS : TIOW_MK4Powerpack_WS
  {
    author = "Strixus";
    displayName = "MK 4 Powerpack (TSR Blackshield)";
	tf_range=50000;
		hiddenSelectionsTextures[] =
    {
      "SR_Uniforms\Textures\BlackShield_PowerPack.paa"
    };
  };

  class TIOW_MK5Powerpack_SR_BS : TIOW_MK5Powerpack_WS
  {
    author = "Strixus";
    displayName = "MK 5 Powerpack (TSR Blackshield)";
	tf_range=50000;
		hiddenSelectionsTextures[] =
    {
      "SR_Uniforms\Textures\BlackShield_PowerPack.paa"
    };
  };
}; // End of CfgVechicle
