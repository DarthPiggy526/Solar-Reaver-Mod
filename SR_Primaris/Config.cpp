// For all 3 files replace:
// "ELWP" with the full chapter name eg "ELWP"
// "ELWP" with a shorthand chapter name, eg "ELWP"
// "ELWP" with an acronym or short identifier, eg "ELWP"
// These MUST be consistent throughout all 3 files or it will not function. Texture files are made using arma 3 tool's texview 2 saved as .paa.
// DO NOT UNDER ANY CIRCUMSTANCE CHANGE ANYTHING THAT HAS "UM" OR "Ultra" IN IT, THESE ARE THE LINKS TO THE MODELS

class CfgPatches
{
	class TIOW_Inf_SR_Primaris
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

#include "CfgVehicles.hpp"
