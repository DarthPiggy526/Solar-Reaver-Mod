class CfgPatches
{
	class SR_PP_Weapons
	{
		name="SR PP Arsenal Mod";
		author="Waagheur";
		requiredVersion=0.0020000001;
		requiredAddons[]=
		{
			"SR_Arsenal",
			"Project_Primaris_Dos_Weapons"
		};
		weapons[]=
		{
			"SR_Primaris_Dos_Bolt_Rifle",
			"SR_Primaris_Dos_C_Bolt_Rifle",
			"SR_Primaris_Dos_H_Bolt_Rifle",
			"SR_Primaris_Dos_S_Bolt_Rifle"
		};
		magazines[]=
		{
			
		};
		ammo[]=
		{
			
		};
		units[]={};
		
		skipWhenMissingDependencies = 1;
	};
};

// Boltguns
class Primaris_Dos_Bolt_Rifle;
class Primaris_Dos_C_Bolt_Rifle;

// Combi Boltguns
class Primaris_Dos_H_Bolt_Rifle;

// Long Range Boltguns
class Primaris_Dos_S_Bolt_Rifle;

class Cfgweapons
{
	class SR_Primaris_Dos_Bolt_Rifle : Primaris_Dos_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Primaris_Dos_Bolt_Rifle";
		displayName="[TSR] [PP] Bolt Rifle";
		magazines[] = {"TIOW_30rnd_GodwynBoltgunMag"};
	};
	
	class SR_Primaris_Dos_C_Bolt_Rifle : Primaris_Dos_C_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Primaris_Dos_C_Bolt_Rifle";
		displayName="[TSR] [PP] Bolt Carbine";
		magazines[] = {"Steve_Trig_BoltgunMag"};
	};
	
	class SR_Primaris_Dos_H_Bolt_Rifle : Primaris_Dos_H_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Primaris_Dos_H_Bolt_Rifle";
		displayName="[TSR] [PP] Auto Bolt Rifle";
		magazines[] = {"Steve_Trig_NewCombiBoltgunMag"};
		magazineWell[]= {};
	};
	
	class SR_Primaris_Dos_S_Bolt_Rifle : Primaris_Dos_S_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Primaris_Dos_S_Bolt_Rifle";
		displayName="[TSR] [PP] Stalker Bolt Rifle";
		magazines[] = {"Steve_Trig_Exitus_BoltgunMag"};
		magazineWell[]= {};
	};
};

