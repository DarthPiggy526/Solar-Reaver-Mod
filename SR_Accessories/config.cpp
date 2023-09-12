class CfgPatches
{
	class TSR_Accessories
	{
		author=""; 
		name="";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Characters_F",
			"Steve_30K_Cosmetics",
			"A3_Anims_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"TSR_Flag_S1",
			"TSR_Flag_S2",
			"TSR_Flag_S3",
			"TSR_Flag_S4",
			"TSR_Flag_NVG_S1",
			"TSR_Flag_NVG_S2",
			"TSR_Flag_NVG_S3",
			"TSR_Flag_NVG_S4",
			"TSR_Flag_Face_S1",
			"TSR_Flag_Face_S2",
			"TSR_Flag_Face_S3",
			"TSR_Flag_Face_S4"
		};
		weapons[]=
		{
			"NL_Batwings_Face",
			"SR_Techmarine_Eye_Piece"
		};
		worlds[]={};
	};
};

class CfgModels
{
	class Default
	{
		sectionsInherit="";
		sections[] = {};
		skeletonName = "";
	};

    class av_cloak: Default
    {
        htMin = 20;          // Minimum half-cooling time (in seconds)
		htMax = 300;        // Maximum half-cooling time (in seconds)
		afMax = 25;          // Maximum temperature in case the model is alive (in celsius)
		mfMax = 15;           // Maximum temperature when the model is moving (in celsius)
		mFact = 0;           // Metabolism factor - number from interval <0, 1> (0 - metabolism has no influence, 1 - metabolism has full influence (no other temperature source will be considered)).
		tBody = 20;
        sections[] =
		{
			"camo","spine2","LeftShoulder","RightShoulder"
		};
		skeletonName = "SpaceMarine_ManSkeleton";
    };
};

class CfgVehicles{
class Steve_Loyal_Flags_1;
	class TSR_Flag_S1: Steve_Loyal_Flags_1
	{
		displayName = "[TSR] Squad 1 Flag";
		editorSubcategory = "Steve_30k_Flags_1";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad1.paa"};
	};
	class TSR_Flag_S2: Steve_Loyal_Flags_1
	{
		displayName = "[TSR] Squad 2 Flag";
		editorSubcategory = "Steve_30k_Flags_1";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad2.paa"};
	};
	class TSR_Flag_S3: Steve_Loyal_Flags_1
	{
		displayName = "[TSR] Squad 3 Flag";
		editorSubcategory = "Steve_30k_Flags_1";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad3.paa"};
	};
	class TSR_Flag_S4: Steve_Loyal_Flags_1
	{
		displayName = "[TSR] Squad 4 Flag";
		editorSubcategory = "Steve_30k_Flags_1";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad4.paa"};
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

class Steve_30k_Flag_1_NVG;
	class TSR_Flag_NVG_S1: Steve_30k_Flag_1_NVG
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[TSR] Squad 1 Flag";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad1.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"FlagCamo"};
			hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad1.paa"};
		};
	};

	class TSR_Flag_NVG_S2: Steve_30k_Flag_1_NVG
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[TSR] Squad 2 Flag";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad2.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"FlagCamo"};
			hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad2.paa"};
		};
	};

	class TSR_Flag_NVG_S3: Steve_30k_Flag_1_NVG
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[TSR] Squad 3 Flag";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad3.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"FlagCamo"};
			hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad3.paa"};
		};
	};

	class TSR_Flag_NVG_S4: Steve_30k_Flag_1_NVG
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[TSR] Squad 4 Flag";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad4.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"FlagCamo"};
			hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad4.paa"};
		};
	};




};
class CfgGlasses
{
	class None;
	class NL_Batwings_Face: None
	{
		author="TIOW";
		displayname="[TSR] [Night Lords] Bat Wings";
		model="TIOW_SM\Marine\Model\NL_Helmet_Wings.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		identityTypes[]={};	
		mass=0;
	}
	    class TSR_Seeker_Cloak: None
	{
		author="DaveSkywalker";
		displayName="[TSR] Seeker Cloak (TSR)";
		showEmpty=0;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		model="\SR_Accessories\models\AV_cloak.p3d";
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




	class TSR_Flag_Face_S1: None
	{
		author = "Hummus";
		showEmpty = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "[TSR] Squad 1 Flag";
		model = "Steve_30K_Cosmetics\Models\Flag_1.p3d";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad1.paa"};
		identityTypes[] = {};
	};
	class TSR_Flag_Face_S2: None
	{
		author = "Hummus";
		showEmpty = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "[TSR] Squad 2 Flag";
		model = "Steve_30K_Cosmetics\Models\Flag_1.p3d";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad2.paa"};
		identityTypes[] = {};
	};
	class TSR_Flag_Face_S3: None
	{
		author = "Hummus";
		showEmpty = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "[TSR] Squad 3 Flag";
		model = "Steve_30K_Cosmetics\Models\Flag_1.p3d";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad3.paa"};
		identityTypes[] = {};
	};
	class TSR_Flag_Face_S4: None
	{
		author = "Hummus";
		showEmpty = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "[TSR] Squad 4 Flag";
		model = "Steve_30K_Cosmetics\Models\Flag_1.p3d";
		hiddenSelections[] = {"FlagCamo"};
		hiddenSelectionsTextures[] = {"SR_Accessories\textures\TSR_Flag_Squad4.paa"};
		identityTypes[] = {};
	};

};