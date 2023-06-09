#define _ARMA_

class CfgPatches
{
	class SR_Core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.88;
		version = "23.6.9.0";
		versionStr = "23.6.9.0";
		versionAr[] = {23,6,9,0};
		requiredAddons[] = {"Extended_EventHandlers","cba_main","A3_UI_F"};
		author = "Tengu";
		fileName = "SR_Core.pbo";
	};
};


class CfgMarkerClasses 
{
	class TSR_Addtional_Markers{
		displayName = "[TSR] Additional 40k Markers";
	}
};

class CfgMarkers
{
	class TSR_Marker_Adeptus_Astartes
	{
		name="Adeptus Astartes";
		icon="SR_Core\Markers\Adeptus-Astartes.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 1;
		markerClass = "TSR_Addtional_Markers";
	};

	class TSR_Marker_Aquila
	{
		name="Aquila";
		icon="SR_Core\Markers\Aquila.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 1;
		markerClass = "TSR_Addtional_Markers";
	};

	class TSR_Marker_Cadian
	{
		name="Cadian";
		icon="SR_Core\Markers\Cadian.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 1;
		markerClass = "TSR_Addtional_Markers";
	};

	class TSR_Marker_Chaos
	{
		name="Chaos";
		icon="SR_Core\Markers\Chaos.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 1;
		markerClass = "TSR_Addtional_Markers";
	};

	class TSR_Marker_Genestealer
	{
		name="Genestealer";
		icon="SR_Core\Markers\Genestealer.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 1;
		markerClass = "TSR_Addtional_Markers";
	};

	class TSR_Marker_Inquisition
	{
		name="Inquisition";
		icon="SR_Core\Markers\Inquisition.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 1;
		markerClass = "TSR_Addtional_Markers";
	};

	class TSR_Marker_Mechanicus
	{
		name="Mechanicus";
		icon="SR_Core\Markers\Mechanicus.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 1;
		markerClass = "TSR_Addtional_Markers";
	};

	class TSR_Marker_Orks
	{
		name="Orks";
		icon="SR_Core\Markers\Orks.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 1;
		markerClass = "TSR_Addtional_Markers";
	};

	class TSR_Marker_Solar_Reavers
	{
		name="Solar Reavers";
		icon="SR_Core\Markers\Solar-Reavers.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 1;
		markerClass = "TSR_Addtional_Markers";
	};

	class TSR_Marker_Tau
	{
		name="Tau";
		icon="SR_Core\Markers\Tau.paa";
		color[]={1,1,1,1};
		size=32;
		shadow = 0;
		scope = 1;
		markerClass = "TSR_Addtional_Markers";
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
		displayName = "[TSR] Solar Reavers";
		side = 1;
		priority = 2;
	};
};
class CfgEditorCategories
{
	class SR_EditorCategory_Solar_Reavers
	{
		displayName = "[TSR] Solar Reavers";
	};
	class SR_EditorCategory_Objects
	{
		displayName = "[TSR] Objects";
	};
};
class CfgEditorSubcategories
{
	class SR_EdSubcat_Supply
	{
		displayName = "[TSR] Supply Pods";
	};
};