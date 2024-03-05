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

class CfgMagazines
{
	// Primaris replacers
	class TIOW_30rnd_GodwynBoltgunMag;
	class SR_PrimarisBoltRifleMag: TIOW_30rnd_GodwynBoltgunMag
	{
		displayName="[TSR] [PP] Bolt Rifle Magazine 30 Rnd.";
		model = "TIOW_SMWep\Boltgun\Model\TIOW_GodwynBoltgunMag30.p3d";
	};
	
	class Steve_Trig_BoltgunMag;
	class SR_PrimarisBoltCarbineMag: Steve_Trig_BoltgunMag
	{
		displayName="[TSR] [PP] Bolt Carbine Magazine 50 Rnd.";
		model = "TIOW_SMWep\Boltgun\Model\TIOW_GodwynBoltgunMag30.p3d";
	};
	
	class Steve_Trig_NewCombiBoltgunMag;
	class SR_PrimarisHeavyBoltRifleMag: Steve_Trig_NewCombiBoltgunMag
	{
		displayName="[TSR] [PP] Auto Bolt Rifle Magazine 150 Rnd.";
		model = "Project_Primaris_D_Weapons\models\H_Bolt_Rifle_Mag.p3d";
		modelSpecial = "Project_Primaris_D_Weapons\models\H_Bolt_Rifle_Mag.p3d";
	};
	
	class Steve_Trig_Exitus_BoltgunMag;
	class SR_PrimarisStalkerBolterMag: Steve_Trig_Exitus_BoltgunMag
	{
		displayName="[TSR] [PP] Stalker Bolter Rifle Magazine 15 Rnd.";
		model = "Project_Primaris_D_Weapons\models\S_Bolt_Rifle_Mag.p3d";
		modelSpecial = "Project_Primaris_D_Weapons\models\S_Bolt_Rifle_Mag.p3d";
	};
};

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
		magazines[] = {"SR_PrimarisBoltRifleMag"};
	};
	
	class SR_Primaris_Dos_C_Bolt_Rifle : Primaris_Dos_C_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Primaris_Dos_C_Bolt_Rifle";
		displayName="[TSR] [PP] Bolt Carbine";
		magazines[] = {"SR_PrimarisBoltCarbineMag"};
	};
	
	class SR_Primaris_Dos_H_Bolt_Rifle : Primaris_Dos_H_Bolt_Rifle
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Waagheur";
		baseWeapon="SR_Primaris_Dos_H_Bolt_Rifle";
		displayName="[TSR] [PP] Auto Bolt Rifle";
		magazines[] = {"SR_PrimarisHeavyBoltRifleMag"};
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
		magazines[] = {"SR_PrimarisStalkerBolterMag"};
		magazineWell[]= {};
	};
};

