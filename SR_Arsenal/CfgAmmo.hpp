class TIOW_SM_Plasmagun_Mag;
class Steve_SM_PlasmaPistol_Mag;
class TIOW_CombiPlas_Mag;
class Steve_30k_CombiPlas_Mag;
class TIOW_Melta_Ammo;
class Steve_30k_Lascutter_Round;
class TIOW_LemanRuss_Lascannon_Rnd;
class Steve_SM_Grav_Mag_Rnd;
class Steve_Volkite_Cav_Rnd;
class Steve_Volkite_Charger_Rnd;
class Steve_Volkite_Culv_Rnd;

class Grenade;

class CfgAmmo
{
	class SR_Meltagun_Ammo: TIOW_Melta_Ammo
	{
		hit=1200;
		timeToLive=0.17;
	};
	class SR_Master_Crafted_Meltagun_Ammo: SR_Meltagun_Ammo
	{
		hit=1200;
		timeToLive=0.215;
	};
	class SR_Lascutter_Round: Steve_30k_Lascutter_Round
	{
		displayName="[TSR] lascutter Round";
		timeToLive=0.079999998;
	};
	class SR_LasFusil_Rnd: TIOW_LemanRuss_Lascannon_Rnd
	{
		hit = 100;
		explosionEffects = "TIOW_BoltRoundRoundExplosion";
		effectFly = "SR_LasFusil_Beam";
		indirectHit = 1;
		indirectHitRange = 0.4;
		caliber = 3;
	};
	class Sh_120mm_HE;
	class SR_PlasmagunRound: Sh_120mm_HE // B_20mm
	{
		hit = 80;
		typicalSpeed = 1050;
		indirectHit = 25;
		indirectHitRange = 2;
		warheadName = "HE";
		caliber = 1.4;
		explosive = 0.65;
		ACE_caliber = 20;
		ACE_bulletLength = 102;
		ACE_bulletMass = 102.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1050};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_Overcharge_PlasmagunRound: SR_PlasmagunRound // B_40mm_APFSDS
	{
		// Origin : 350
		hit = 240; // hit - indirectHit = actual hit
		// Origin : 200
		indirectHit = 80;
		// Origin : 2.5
		indirectHitRange = 5;
		typicalSpeed = 1140;
		warheadName = "AP";
		caliber = 8;
		explosive = 0.65;
		ACE_caliber = 40;
		ACE_bulletLength = 365;
		// Origin : 930
		ACE_bulletMass = 300;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1140};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_Overcharge_PlasmapistolRound: SR_PlasmagunRound // B_40mm_APFSDS
	{
		// Origin : 350
		hit = 200; // hit - indirectHit = actual hit
		// Origin : 200
		indirectHit = 60;
		// Origin : 2.5
		indirectHitRange = 3;
		typicalSpeed = 1140;
		warheadName = "AP";
		caliber = 8;
		explosive = 0.65;
		ACE_caliber = 40;
		ACE_bulletLength = 365;
		// Origin : 930
		ACE_bulletMass = 250;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1140};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_SM_Grav_Mag_Rnd : Steve_SM_Grav_Mag_Rnd
	{
		ACE_bulletLength = 102;
		ACE_bulletMass = 80.4;
		ACE_caliber = 16;
		caliber = 1.4;
		dangerRadiusBulletClose = -1;
		dangerRadiusHit = 160;
		deflectionDirDistribution = 0.39;
		deflectionSlowDown = 0.8;
		directionalExplosion = 0;
		explosionAngle = 60;
		explosionForceCoef = 1;
		explosive = 0.65;
		hit = 65;
		indirectHit = 20;
		indirectHitRange = 3;
		typicalSpeed = 1050;
	};
	class SR_Volkite_Cav_Rnd : Steve_Volkite_Cav_Rnd
	{
		hit = 60;
		typicalSpeed = 1050;
		caliber = 1.4;
		explosive = 0;
		ACE_caliber = 16;
		ACE_bulletLength = 102;
		ACE_bulletMass = 75.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1050};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_Volkite_Charger_Rnd : Steve_Volkite_Charger_Rnd
	{
		hit = 80;
		typicalSpeed = 1050;
		caliber = 1.4;
		explosive = 0;
		ACE_caliber = 20;
		ACE_bulletLength = 102;
		ACE_bulletMass = 102.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1050};
		ACE_barrelLengths[] = {728.98};
	};
	class SR_Volkite_Culv_Rnd : Steve_Volkite_Culv_Rnd
	{	
		hit = 450;
		indirectHit = 25;
		indirectHitRange = 0.4;
		typicalSpeed = 1000;
	};
	
	
	
	class SR_Ammo_Rad_Grenade: Grenade
	{
		hit=1;
		indirectHit=0.5;
		indirectHitRange=12;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		soundHit[] = {"",1,1};
	};
	class SR_Ammo_Stasis_Grenade: Grenade
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=10;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		CraterEffects = "";
		explosionEffects = "";
		soundHit[] = {"",1,1};
		timeToLive = 300;
		explosionTime = 9600;
	};
	class SR_Ammo_Tanglefoot_Grenade: Grenade
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=10;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		CraterEffects = "";
		explosionEffects = "";
		soundHit[] = {"",1,1};
		timeToLive = 300;
		explosionTime = 9600;
	};
	class SR_Ammo_Antigrav_Grenade: Grenade
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=10;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		CraterEffects = "";
		explosionEffects = "";
		soundHit[] = {"",1,1};
		timeToLive = 300;
		explosionTime = 9600;
	};
	class SR_Ammo_Vortex_Grenade: Grenade
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=8;
		model="TIOW_IG_Explosives\TIOW_ig_frag_grenade\sm_frag_grenade_throw.p3d";
		deflectionSlowDown=0.001;
		timeToLive = 300;
		explosionTime = 8;
	};
};