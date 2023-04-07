class CfgPatches
{
	class AV_Accessories
	{
		author=""; 
		name="";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Characters_F",
			"A3_Anims_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		weapons[]=
		{
			"NL_Batwings_Face",
			"SR_Techmarine_Eye_Piece",
			"",
			"",
			"",
			"",
			""
		};
		worlds[]={};
	};
};
class CfgWeapons
{
	class Integrated_NVG_TI_1_F;
	class ItemInfo;
    
   
	class SR_Techmarine_Eye_Piece: Integrated_NVG_TI_1_F
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[TSR] Techmarine Eye Piece";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={1};
		modelOptics="\A3\Weapons_F\empty.p3d";
		hiddenSelections[]=
		{
			"ap_head_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Accessories\textures\TSR_eye_red.paa"
		};
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="Dos_Cosmetics\models\Apoth_Head.p3d";
			modelOff="Dos_Cosmetics\models\Apoth_Head.p3d";
			hiddenSelections[]=
			{
				"ap_head_camo"
			};
			hiddenSelectionsTextures[]=
			{
			"SR_Accessories\textures\TSR_eye_red.paa"
			};
		};
	};
};
class CfgGlasses
{
	class None;
	class NL_Batwings_Face: None
	{
		author="TIOW";
		displayname="[Night Lords] Bat Wings";
		model="TIOW_SM\Marine\Model\NL_Helmet_Wings.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		identityTypes[]={};	
		mass=0;
	}
	    class TSR_Seeker_Cloak: None
	{
		author="DaveSkywalker";
		displayName="Seeker Cloak (TSR)";
		showEmpty=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		model="AV_Pack\models\acessories\av_cloak.p3d";
			hiddenSelections[]=
		{
			"camo"
		};
			hiddenSelectionsTextures[]=
		{
			"\SR_Accessories\textures\TSR_Seeker_Cloak.paa"
		};
        identityTypes[]={};
	};
};