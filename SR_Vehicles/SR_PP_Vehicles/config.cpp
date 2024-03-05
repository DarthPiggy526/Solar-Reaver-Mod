class CfgPatches
{
	class SR_PP_Vehicles
	{
		name="SR PP Vehicles Mod";
		author="Waagheur";
		requiredVersion=0.0020000001;
		requiredAddons[]=
		{
			"SR_Vehicles",
			"PP_DOS_VEHS_Primaris"
		};
		weapons[]=
		{
			
		};
		magazines[]=
		{
			
		};
		ammo[]=
		{
			
		};
		units[]={
			"SR_PP_Speeder_1"
		};
		
		skipWhenMissingDependencies = 1;
	};
};

class PP_Speeder_1_UM;

class CfgVehicles
{
	
	class SR_PP_Speeder_1 : PP_Speeder_1_UM
	{
		displayName="[TSR] Storm Speeder Hailstrike";
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Helicopters";
		crew="TIOW_Tactical_BT_1";
		hiddenSelections[]=
		{
			"Camo_1_NM",
			"Camo_2_M"
		};
		hiddenSelectionsTextures[]=
		{
			"Project_Primaris_D_V\Textures\Speeder_Camo_BA_CO.paa",
			"Project_Primaris_D_V\Textures\Speeder_Mirror_BA_CO.paa"
		};
		class UserActions
		{
			class ThrusterGravBrakes
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 80)";
				displayName="<t color='#FE2E2E'>Engage Gravbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Gravbrakes";
				onlyForPlayer=0;
				position="";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn TIOW_LandSpeeder_fnc_ThrustersGravBrakes";
				textToolTip="<t color='#FE2E2E'>Engage Gravbrakes";
				userActionID=57;
			};
			class ThrusterEngage
			{
				animPeriod=5;
				condition="(!(this getvariable [""Speeder_Thruster_Status"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn TIOW_LandSpeeder_fnc_ThrustersEngage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class ThrusterDisengage
			{
				animPeriod=5;
				condition="(this getvariable [""Speeder_Thruster_Status"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn TIOW_LandSpeeder_fnc_ThrustersDisengage";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
		};
	};
	
};

