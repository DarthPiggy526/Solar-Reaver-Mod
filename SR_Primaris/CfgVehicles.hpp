class CfgFactionClasses
{
	class SR_Faction_bis
	{
		displayName="[SR] Solar Reavers";
		side=1;
		priority=2;
	};
};

class CfgVehicles
{

// Power Packs

	class TIOW_Mk4Powerpack_Ultra;
	class Primaris_Dos_PP_SR_1: TIOW_Mk4Powerpack_Ultra
	{
		scope=2;
		displayName="Mk.10 Powerpack (TSR Blackshield)";
		model="Project_Primaris_D_Main\Models\Power_Pack_Main.p3d";
		hiddenSelections[]=
		{
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimArmour.paa"
		};
		maximumLoad=500;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		tf_hasLRradio=1;
		tf_range=50000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	};

	// Power Armors
	class TIOW_Tactical_BT_3;
	class Primaris_SM_SR_1: TIOW_Tactical_BT_3
	{
		scope=1;
		scopeArsenal=2;
		scopeCurator=1;
		model="Project_Primaris_D_Main\Models\Base_Brother.p3d";
		displayName="Primaris Brother (Mk.10)";
		uniformClass="SR_MK10_Armor_Blackshield";
		faction="SR_Faction";
		editorSubcategory= "EdSubcat_SR_Primaris";
		hiddenSelections[]=
		{
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\SR_PrimArmour.paa",
			"SR_Uniforms\Textures\SR_Armour1.paa"
		};
		Items[]={};
		RespawnItems[]={};
		linkedItems[]={};
		RespawnlinkedItems[]={};
		weapons[]={};
		magazines[]={};
		respawnweapons[]={};
		respawnMagazines[]={};
	};
	class Primaris_SM_Lysander: Primaris_SM_SR_1
	{
		displayName="Primaris Lysander (Mk.10)";
		uniformClass="SR_MK10_Armor_Lysander";
		hiddenSelectionsTextures[]=
		{
			"SR_Primaris\Textures\Lysander_PrimArmour.paa",
			"SR_Uniforms\Textures\SR_Armour1.paa"
		};
	};
}; // End of CfgVechicle
