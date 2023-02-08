// For all 3 files replace:
// "SR" with the full chapter name eg "SR"
// "SR" with a shorthand chapter name, eg "SR"
// "SR" with an acronym or short identifier, eg "SR"
// These MUST be consistent throughout all 3 files or it will not function. Texture files are made using arma 3 tool's texview 2 saved as .paa.
// DO NOT UNDER ANY CIRCUMSTANCE CHANGE ANYTHING THAT HAS "UM" OR "Ultra" IN IT, THESE ARE THE LINKS TO THE MODELS
// Replace any mention of [ID] with your Chapter Prefix WITHOUT Brackets

class CfgPatches
{
	class TIOW_Inf_SR
	{
		requiredAddons[]=
		{
			"A3_Data_F",
			"TIOWSpaceMarines",
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

class CfgEditorCategories
{
	class EdCategory_TheAdeptusAstartes
	{
  	displayName = "Adeptus Astartes";
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_SR
	{
		displayName = "Solar Reavers";
	};
};

#include "CfgWeapons.hpp"
