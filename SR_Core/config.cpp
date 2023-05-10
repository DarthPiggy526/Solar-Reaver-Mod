#define _ARMA_

class CfgPatches
{
	class SR_Core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.6;
		version = 0.2;
		requiredAddons[] = {"Extended_EventHandlers","cba_main","A3_UI_F"};
		author = "Tengu";
		fileName = "SR_Core.pbo";
	};
};





class Default;
class CfgMarkerColors
{
	class ColorReaver: Default
	{
		name = "Reaver";
		color[] = {0, 0, 0.501,1};
		scope = 2;
	};
	class ColorMarauders: Default
	{
		name = "Marauders";
		color[] = {0.6, 0.2, 0.4,1};
		Scope = 2;
	};
	class ColorSeeker: Default
	{
		name = "Seeker";
		color[] = {1, 0, 1,1};
		Scope = 2;
	};
	class ColorFirstCompany: Default
	{
		name = "1st Company";
		color[] = {0.2, 0.2, 0.2,1};
		scope = 2;
	};
	class ColorFirstPlatoon: Default
	{
		name = "1st Platoon";
		color[] = {0, 0, 1,1};
		scope = 2;
	};
	class ColorFirstSquad: Default
	{
		name = "1st Squad";
		color[] = {0, 0.8, 0.803,1};
		Scope = 2;
	};
	class ColorSecondSquad: Default
	{
		name = "2nd Squad";
		color[] = {0, 1, 1,1};
		Scope = 2;
	};
	class ColorSecondPlatoon: Default
	{
		name = "2nd Platoon";
		color[] = {0, 1, 0,1};
		scope = 2;
	};
	class ColorThirdSquad: Default
	{
		name = "3rd Squad";
		color[] = {0, 0.752, 0.376,1};
		Scope = 2;
	};
	class ColorFourthSquad: Default
	{
		name = "4th Squad";
		color[] = {0.356, 1, 0.678,1};
		Scope = 2;
	};
	class ColorArmour: Default
	{
		name = "Armour";
		color[] = {1, 0.501, 0,1};
		scope = 2;
	};
	class ColorSecondCompany: Default
	{
		name = "2nd Company";
		color[] = {1, 1, 1,1};
		Scope = 2;
	};
	class ColorLogistics: Default
	{
		name = "Logistics";
		color[] = {1, 0, 0,1};
		Scope = 2;
	};
	class ColorAir: Default
	{
		name = "Air";
		color[] = {1, 0.501, 0.501,1};
		Scope = 2;
	};
};











class CfgFactionClasses
{
	class SR_Faction
	{
		displayName = "[SR] Solar Reavers";
		side = 1;
		priority = 2;
	};
};
class CfgEditorCategories
{
	class SR_EditorCategory_Solar_Reavers
	{
		displayName = "[SR] Solar Reavers";
	};
	class SR_EditorCategory_Objects
	{
		displayName = "[SR] Objects";
	};
};
class CfgEditorSubcategories
{
	class SR_EdSubcat_Supply
	{
		displayName = "[SR] Supply Pods";
	};
};