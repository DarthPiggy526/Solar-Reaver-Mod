#define _ARMA_

class CfgPatches
{
	class Neph_Cons_Jet
	{
		requiredAddons[] = {"A3_Air_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"VTOL_Neph_1"};
		weapons[] = {};
	};
};
class CfgCloudlets
{
	class Default;
	class BlackMissile_cons: Default
	{
		interval = "0.0012";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1.5,3};
		color[] = {{0.06,0.06,0.06,0.1},{0.15,0.15,0.15,0.05},{0.15,0.15,0.15,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.5;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.4,0.4,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class BlackMissile_cons
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class BlackMissile_cons
	{
		simulation = "particles";
		type = "BlackMissile_cons";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class CfgMovesBasicSpaceMarine
{
	class DefaultDie;
	class FFV_BaseActions;
	class ManActions
	{
		Neph_Pilot_Cons_1 = "Neph_Pilot_Cons_1";
	};
};
class CfgMovesMaleSpaceMarine: CfgMovesBasicSpaceMarine
{
	skeletonName = "SpaceMarine_ManSkeleton";
	gestures = "CfgGesturesSpaceMarine";
	class vehicle_turnout_1_Aim;
	class cargo_base;
	class AmovPercMstpSlowWrflDnon;
	class cargo_basebinoc;
	class States
	{
		class Crew;
		class Neph_Pilot_Cons_1: Crew
		{
			file = "\Con_neph\Anim\Neph_Pilot.rtm";
			interpolateTo[] = {"TIOW_SM_RhinoCargo1Dead",1};
			ConnectTo[] = {"TIOW_SM_RhinoCargo1Dead",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			speed = 1e+10;
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Plane;
	class Plane_Base_F: Plane
	{
		class HitPoints;
	};
	class VTOL_Base_F: Plane_Base_F
	{
		class AnimationSources;
		class EventHandlers;
		class NewTurret;
		class CargoTurret;
		class Components;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class ViewPilot;
	};
	class VTOL_Neph_1_Cons_base: VTOL_Base_F
	{
		author = "DOS";
		_generalMacro = "VTOL_Neph_1_Cons";
		scope = 0;
		scopeCurator = 0;
		displayName = "Test";
		model = "\Con_neph\models\Neph_1.p3d";
		icon = "\A3\Air_F_Exp\VTOL_02\Data\UI\Map_VTOL_02_vehicle_CA.paa";
		picture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_vehicle_CA.paa";
		overviewPicture = "\A3\Data_F_Exp\Images\VehicleXian_ca.paa";
		vehicleClass = "Air";
		editorSubcategory = "EdSubcat_Planes";
		destrType = "DestructWreck";
		driverAction = "pilot_VTOL_02";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		driverCompartments = "Compartment1";
		driverCanEject = 1;
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "Stick_control_1";
		driverLeftLegAnimName = "Pedals_1_left_2";
		driverRightLegAnimName = "Pedals_1_right_2";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		memoryPointsGetInDriver = "GetIn_pilot_pos";
		memoryPointsGetInDriverDir = "GetIn_pilot_dir";
		memoryPointsGetInCargo = "GetIn_cargo_pos";
		memoryPointsGetInCargoDir = "GetIn_cargo_dir";
		memoryPointLRocket = "left_rocket_fire";
		memoryPointRRocket = "right_rocket_fire";
		memoryPointCM[] = {"Flare_launcher_1_pos","Flare_launcher_2_pos"};
		memoryPointCMDir[] = {"Flare_launcher_1_dir","Flare_launcher_2_dir"};
		extCameraPosition[] = {0,1,-25};
		class ViewPilot: ViewPilot
		{
			initAngleX = 9;
		};
		cargoAction[] = {"passenger_generic01_foldhands"};
		cargoGetInAction[] = {"GetInHigh"};
		cargoGetOutAction[] = {"GetOutHigh"};
		cargoCompartments[] = {"Compartment3"};
		cargoCanEject = 1;
		cargoIsCoDriver[] = {0};
		transportSoldier = 0;
		accuracy = 0.5;
		fuelCapacity = 1350;
		fuelConsumptionRate = 0.0322;
		armor = 300;
		explosionShielding = 0.1;
		armorStructural = 6;
		damageResistance = 0.015;
		epeImpulseDamageCoef = 50;
		waterLeakiness = 8;
		waterResistanceCoef = 0.03;
		ejectSpeed[] = {0,-2,0};
		laserScanner = 1;
		showAllTargets = 4;
		showCrewAim = 0;
		radarTargetSize = 1.4;
		visualTargetSize = 1.2;
		irTargetSize = 1.4;
		lockDetectionSystem = "8 + 4";
		incomingMissileDetectionSystem = "8 + 16";
		maximumLoad = 3000;
		supplyRadius = 5;
		memoryPointSupply = "mem01";
		getInRadius = 3;
		cabinOpening = 0;
		gearRetracting = 0;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		radarType = 4;
		maxSpeed = 2000;
		landingAoa = "10*3.1415/180";
		landingSpeed = 0;
		stallSpeed = 110;
		stallWarningTreshold = 0.2;
		wheelSteeringSensitivity = 0.7;
		airBrake = 1;
		airBrakeFrictionCoef = 25;
		flaps = 0;
		flapsFrictionCoef = 0;
		angleOfIndicence = "1*3.1415/180";
		envelope[] = {0,0.01,0.2,4,6,7.6,8.4,9.2,9.4,9.6,9.7,9.8,8,1};
		altNoForce = 15000;
		altFullForce = 5000;
		throttleToThrustLogFactor = 2;
		irScanRangeMin = 100;
		irScanRangeMax = 7500;
		irScanGround = 1;
		thrustCoef[] = {1.62,1.37,1.35,1.34,1.33,1.32,1.3,1.27,1.19,0.4,0.2,0,0};
		aileronSensitivity = 1.2;
		aileronCoef[] = {0.4,0.5,0.8,0.95,1.02,1.04,1.03,1.01,1,0.7,0.6,0.55,0.5,0.45,0.4,0.35};
		elevatorSensitivity = 0.9;
		elevatorCoef[] = {0.2,0.39,0.51,0.6,0.68,0.75,0.8,0.85,0.9,0.74,0.3};
		rudderInfluence = 0.95;
		rudderCoef[] = {0.5,1.8,2.6,2.75,2.8,2.85,2.9,2.95,2.98,3.01,2.7,1.1,0.9,0.7,0.5,0.3};
		aileronControlsSensitivityCoef = 2;
		elevatorControlsSensitivityCoef = 3;
		rudderControlsSensitivityCoef = 3;
		draconicForceXCoef = 6;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = {4,5.1,6.1,7,7.7,8.3,9,9.1,9.2,9.2,9.2};
		draconicTorqueYCoef[] = {0.5,1,2,2.3,3,2.6,2.4,2.2,2,1.9,1.8};
		vtol = 4;
		VTOLYawInfluence = 10;
		VTOLPitchInfluence = 5;
		VTOLRollInfluence = 8;
		maxOmega = 2500;
		class Wheels{};
		defaultUserMFDvalues[] = {0.15,1,0.15,1};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,1,0.15,1};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.0375,0.0375,0.1};
				helmetRight[] = {0.075,0,0};
				helmetDown[] = {0,-0.075,0};
				font = "LucidaConsoleB";
				turret[] = {-2};
				class Bones
				{
					class HUDCenter
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class HorizonBankSource
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0.5,0.5};
						min = -6.2831;
						max = 6.2831;
						minAngle = -360;
						maxAngle = 360;
					};
					class HorizonDiveSource
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = {0.5,2.5};
						maxPos[] = {0.5,-1.5};
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.234,0.23};
					};
					class GunnerAim
					{
						type = "vector";
						source = "turret";
						pos0[] = {0,-0.5};
						pos10[] = {0.0068,-0.012};
						projection = 0;
					};
					class WeaponAim
					{
						type = "vector";
						source = "weaponToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class TargetingPodDir
					{
						source = "pilotcameratoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class TargetingPodTarget
					{
						source = "pilotcameratargettoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class SliderDiveSource
					{
						type = "linear";
						source = "horizonDive";
						min = "RAD(-10)";
						max = "RAD(10)";
						minPos[] = {0.105,0.38};
						maxPos[] = {0.105,0.54};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min = "RAD(10)";
						max = "RAD(30)";
						minPos[] = {0,-0.04};
						maxPos[] = {0,"0)"};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min = "RAD(30)";
						max = "RAD(90)";
						minPos[] = {0,-0.04};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min = "RAD(-30)";
						max = "RAD(-10)";
						minPos[] = {0,0};
						maxPos[] = {0,0.04};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min = "RAD(-90)";
						max = "RAD(-30)";
						maxPos[] = {0,0.04};
					};
					class SliderAltitudeSource
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -3;
						min = 0;
						max = 1000;
						minPos[] = {0.885,0.2};
						maxPos[] = {0.885,0.375};
					};
					class GForceSource
					{
						type = "linear";
						source = "gmeter";
						sourceScale = 0.15;
						min = -1;
						max = 3;
						minPos[] = {0.105,0.7};
						maxPos[] = {0.105,0.86};
					};
					class SliderVSpeedSource
					{
						type = "linear";
						source = "vspeed";
						min = -15;
						max = 15;
						minPos[] = {0.795,0.6};
						maxPos[] = {0.795,0.84};
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class ImpactPointRockets
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = {0.5,0.565};
						pos10[] = {0.734,0.795};
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPointToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class rtdRPM1
					{
						type = "linear";
						source = "rpm";
						min = 0.1;
						max = 1;
						minPos[] = {0,-0.075};
						maxPos[] = {0,0};
					};
					class rtdRPM2: rtdRPM1
					{
						source = "rpm";
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1,0.1,0.9,0.9};
					};
					class Target
					{
						source = "targettoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class ThrustVectoringRotation
					{
						type = "rotational";
						source = "vtolvectoring";
						sourceScale = 100;
						center[] = {0.06,0.145};
						min = 0;
						max = 100;
						minAngle = 0;
						maxAngle = -90;
						aspectRatio = 0.982906;
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 0.46;
						center[] = {0,0};
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.982906;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle = 360;
						max = 10;
					};
					class HorizonBankRotFull
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0,0};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1toview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class Airport2: Airport1
					{
						source = "airportCorner2toview";
					};
					class Airport3: Airport1
					{
						source = "airportCorner3toview";
					};
					class Airport4: Airport1
					{
						source = "airportCorner4toview";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.5};
						pos3[] = {0.5702,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.569};
					};
				};
				class Draw
				{
					alpha = "user3";
					color[] = {"user0","user1","user2"};
					condition = "(1 - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37))*on";
					class VelocityLine
					{
						type = "line";
						width = 2;
						points[] = {{"HUDCenter",1},{"VelocityVector",1},{},{"VelocityVector",{0,-0.00491453},1},{"VelocityVector",{0.0025,-0.00425598},1},{"VelocityVector",{0.00433,-0.00245726},1},{"VelocityVector",{0.005,0},1},{"VelocityVector",{0.00433,0.00245726},1},{"VelocityVector",{0.0025,0.00425598},1},{"VelocityVector",{0,0.00491453},1},{"VelocityVector",{-0.0025,0.00425598},1},{"VelocityVector",{-0.00433,0.00245726},1},{"VelocityVector",{-0.005,0},1},{"VelocityVector",{-0.00433,-0.00245726},1},{"VelocityVector",{-0.0025,-0.00425598},1},{"VelocityVector",{0,-0.00491453},1},{}};
					};
					class Static
					{
						type = "line";
						width = 3;
						points[] = {{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.015,0.01},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0,0},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.015,-0.01},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.015,0.01},1},{},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.03,0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.088,0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.088,-0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.03,-0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.03,0.015},1},{},{{0.1,0.3},1},{{0.1,0.62},1},{},{{0.1,0.3},1},{{0.08,0.3},1},{},{{0.1,0.34},1},{{0.08,0.34},1},{},{{0.1,0.38},1},{{0.08,0.38},1},{},{{0.1,0.46},1},{{0.08,0.46},1},{},{{0.1,0.54},1},{{0.08,0.54},1},{},{{0.1,0.58},1},{{0.08,0.58},1},{},{{0.1,0.62},1},{{0.08,0.62},1},{},{"GForceSource",{0.015,0.01},1},{"GForceSource",{0,0},1},{"GForceSource",{0.015,-0.01},1},{"GForceSource",{0.015,0.01},1},{},{{0.1,0.688},1},{{0.1,0.82},1},{},{{0.1,0.7},1},{{0.08,0.7},1},{},{{0.1,0.74},1},{{0.08,0.74},1},{},{{0.1,0.78},1},{{0.08,0.78},1},{},{{0.1,0.82},1},{{0.08,0.82},1},{},{{0.4,0.86},1},{{0.4,0.94},1},{{0.6,0.94},1},{{0.6,0.86},1},{{0.4,0.86},1},{},{{0.4,0.892},1},{{0.408,0.892},1},{},{{0.6,0.892},1},{{0.592,0.892},1},{},{{0.5,0.86},1},{{0.5,0.868},1},{},{{0.5,0.94},1},{{0.5,0.932},1},{},{{0.46,0.07},1},{{0.54,0.07},1},{{0.54,0.035},1},{{0.46,0.035},1},{{0.46,0.07},1},{},{{0.15,0.115},1},{{0.85,0.115},1},{},{{0,0.96},1},{{1.1,0.96},1},{},{{0.48,0.5},1},{{0.49,0.5},1},{},{{0.51,0.5},1},{{0.52,0.5},1},{},{{0.5,0.49},1},{{0.5,0.48},1},{},{{0.5,0.51},1},{{0.5,0.52},1},{},{"WeaponAim",1,{-0.02,0},1},{"WeaponAim",1,{-0.01,0},1},{},{"WeaponAim",1,{0.01,0},1},{"WeaponAim",1,{0.02,0},1},{},{"WeaponAim",1,{0,-0.01},1},{"WeaponAim",1,{0,-0.02},1},{},{"WeaponAim",1,{0,0.01},1},{"WeaponAim",1,{0,0.02},1},{},{"HUDCenter",{-0.165,7.08909e-09},1},{"HUDCenter",{-0.22,9.45212e-09},1},{},{"HUDCenter",{0.165,-1.93397e-09},1},{"HUDCenter",{0.22,-2.57863e-09},1},{},{"HUDCenter",{-0.0825,0.140452},1},{"HUDCenter",{-0.09625,0.16386},1},{},{"HUDCenter",{0.0825,0.140452},1},{"HUDCenter",{0.09625,0.16386},1},{},{"HUDCenter",{-0.142894,0.0810897},1},{"HUDCenter",{-0.16671,0.0946047},1},{},{"HUDCenter",{0.142894,0.0810897},1},{"HUDCenter",{0.16671,0.0946047},1},{},{"HUDCenter",{-0.116673,0.114678},1},{"HUDCenter",{-0.155564,0.152904},1},{},{"HUDCenter",{0.116673,0.114678},1},{"HUDCenter",{0.155563,0.152904},1},{},{{0.0333333,0.148667},1},{{0.054,0.162},1},{{0.135,0.162},1},{{0.135,0.148667},1},{{0.126333,0.139667},1},{{0.118,0.139667},1},{{0.0933333,0.129333},1},{{0.0333333,0.129333},1},{{0.0156667,0.111},1},{{0.00866667,0.115333},1},{{0.0116667,0.136},1},{}};
					};
					class Gunner
					{
						type = "line";
						width = 4;
						points[] = {{"GunnerAim",{0.485,0.892},1},{"GunnerAim",{0.485,0.908},1},{"GunnerAim",{0.515,0.908},1},{"GunnerAim",{0.515,0.892},1},{"GunnerAim",{0.485,0.892},1}};
					};
					class DiveNumber
					{
						type = "text";
						source = "horizondive";
						sourceScale = 57.29578;
						sourceOffset = 0;
						align = "left";
						scale = 1;
						pos[] = {"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.085,"0.00-0.011"},1};
						right[] = {"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.12,"0.00-0.011"},1};
						down[] = {"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.085,"0.03-0.011"},1};
					};
					class VSpeedGroup
					{
						condition = "on";
						class VSpeedNumber
						{
							type = "text";
							source = "vspeed";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.82+0.07",0.728},1};
							right[] = {{"0.86+0.07",0.728},1};
							down[] = {{"0.82+0.07",0.763},1};
						};
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.849,0.76},1},{{0.929,0.76},1},{{0.929,0.725},1},{{0.849,0.725},1},{{0.849,0.76},1},{}};
						};
					};
					class VSpeedGroupUp
					{
						condition = "vspeed";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.869,0.715},1},{{0.909,0.715},1},{{0.889,0.695},1},{{0.869,0.715},1},{}};
						};
					};
					class VSpeedGroupDown
					{
						condition = "-vspeed";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{{0.869,0.77},1},{{0.909,0.77},1},{{0.889,0.79},1},{{0.869,0.77},1},{}};
						};
					};
					class AltGroup
					{
						condition = "1000 - altitudeAGL";
						class Static
						{
							type = "line";
							width = 3;
							points[] = {{"SliderAltitudeSource",{0.024,0.01},1},{"SliderAltitudeSource",{0.009,0},1},{"SliderAltitudeSource",{0.024,-0.01},1},{"SliderAltitudeSource",{0.024,0.01},1},{},{"SliderAltitudeSource",{0.035,0.015},1},{"SliderAltitudeSource",{0.093,0.015},1},{"SliderAltitudeSource",{0.093,-0.015},1},{"SliderAltitudeSource",{0.035,-0.015},1},{"SliderAltitudeSource",{0.035,0.015},1},{},{{0.889,0.2},1},{{0.889,0.375},1},{},{{0.879,0.2},1},{{0.899,0.2},1},{},{{0.879,0.375},1},{{0.899,0.375},1},{}};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -3;
							align = "left";
							scale = 1;
							pos[] = {"SliderAltitudeSource",{0.085,"0.00-0.011"},1};
							right[] = {"SliderAltitudeSource",{0.11,"0.00-0.011"},1};
							down[] = {"SliderAltitudeSource",{0.085,"0.03-0.011"},1};
						};
						class AltStatic50
						{
							type = "text";
							source = "static";
							text = "1000";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.885,0.171},1};
							right[] = {{0.925,0.171},1};
							down[] = {{0.885,0.201},1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						sourceLength = 3;
						align = "left";
						scale = 1;
						pos[] = {{0.13,0.22},1};
						down[] = {{0.13,0.26},1};
						right[] = {{0.2,0.22},1};
					};
					class Angle_90
					{
						type = "text";
						source = "static";
						text = "90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.285},1};
						right[] = {{0.11,0.285},1};
						down[] = {{0.07,0.315},1};
					};
					class Angle_30
					{
						type = "text";
						source = "static";
						text = "30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.325},1};
						right[] = {{0.11,0.325},1};
						down[] = {{0.07,0.355},1};
					};
					class Angle_10
					{
						type = "text";
						source = "static";
						text = "10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.365},1};
						right[] = {{0.11,0.365},1};
						down[] = {{0.07,0.395},1};
					};
					class Angle_0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.445},1};
						right[] = {{0.11,0.445},1};
						down[] = {{0.07,0.475},1};
					};
					class Angle_10m
					{
						type = "text";
						source = "static";
						text = "-10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.525},1};
						right[] = {{0.11,0.525},1};
						down[] = {{0.07,0.555},1};
					};
					class Angle_30m
					{
						type = "text";
						source = "static";
						text = "-30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.565},1};
						right[] = {{0.11,0.565},1};
						down[] = {{0.07,0.595},1};
					};
					class Angle_90m
					{
						type = "text";
						source = "static";
						text = "-90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.605},1};
						right[] = {{0.11,0.605},1};
						down[] = {{0.07,0.635},1};
					};
					class GMeterStatic3
					{
						type = "text";
						source = "static";
						text = "3";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.683},1};
						right[] = {{0.11,0.683},1};
						down[] = {{0.07,0.713},1};
					};
					class GMeterStatic2
					{
						type = "text";
						source = "static";
						text = "2";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.723},1};
						right[] = {{0.11,0.723},1};
						down[] = {{0.07,0.753},1};
					};
					class GMeterStatic1
					{
						type = "text";
						source = "static";
						text = "1";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.763},1};
						right[] = {{0.11,0.763},1};
						down[] = {{0.07,0.793},1};
					};
					class GMeterStatic0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.803},1};
						right[] = {{0.11,0.803},1};
						down[] = {{0.07,0.833},1};
					};
					class CollectiveNumber
					{
						type = "text";
						source = "throttle";
						sourceScale = 100;
						align = "left";
						scale = 1;
						pos[] = {{0.889,0.46},1};
						right[] = {{0.939,0.46},1};
						down[] = {{0.889,0.495},1};
					};
					class CollectiveText
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.899,0.46},1};
						right[] = {{0.949,0.46},1};
						down[] = {{0.899,0.495},1};
					};
					class ThrustVectoring
					{
						condition = "1+vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "vtolvectoring";
							sourceScale = 90;
							align = "left";
							scale = 1;
							pos[] = {{0.102,0.14},1};
							right[] = {{0.127,0.14},1};
							down[] = {{0.102,0.155},1};
						};
						class VectoringArrow
						{
							type = "line";
							width = 3;
							points[] = {{"ThrustVectoringRotation",{-0.034,-0.006},1},{"ThrustVectoringRotation",{-0.044,0},1},{"ThrustVectoringRotation",{-0.034,0.006},1},{"ThrustVectoringRotation",{-0.034,-0.006},1},{},{"ThrustVectoringRotation",{-0.044,0},1},{"ThrustVectoringRotation",{-0.004,0},1},{}};
						};
					};
					class ThrustVectoringAuto
					{
						condition = "-vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "static";
							sourceScale = 1;
							text = "AUTO";
							align = "left";
							scale = 1;
							pos[] = {{0.103,0.14},1};
							right[] = {{0.123,0.14},1};
							down[] = {{0.103,0.155},1};
						};
					};
					class EngineRPM
					{
						type = "line";
						width = 3;
						points[] = {{{0.89,0.5},1},{{0.89,0.66},1},{},{{0.92,0.5},1},{{0.86,0.5},1},{},{{0.92,0.66},1},{{0.86,0.66},1},{},{{0.91,0.54},1},{{0.87,0.54},1},{},{{0.91,0.58},1},{{0.87,0.58},1},{},{{0.91,0.62},1},{{0.87,0.62},1},{}};
					};
					class EngineRPMLines
					{
						type = "line";
						width = 5;
						points[] = {{{"0.90+0.01",0.66},1},{"rtdrpm1",{"0.90+0.01",0.66},1},{},{{"0.86+0.01",0.66},1},{"rtdrpm2",{"0.86+0.01",0.66},1},{},{}};
					};
					class RPM60Text
					{
						type = "text";
						source = "static";
						text = "60";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.645},1};
						right[] = {{0.955,0.645},1};
						down[] = {{0.925,0.67},1};
					};
					class RPM80Text
					{
						type = "text";
						source = "static";
						text = "80";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.605},1};
						right[] = {{0.955,0.605},1};
						down[] = {{0.925,0.63},1};
					};
					class RPM100Text
					{
						type = "text";
						source = "static";
						text = "100";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.565},1};
						right[] = {{0.955,0.565},1};
						down[] = {{0.925,0.59},1};
					};
					class RPM120Text
					{
						type = "text";
						source = "static";
						text = "120";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.925,0.525},1};
						right[] = {{0.955,0.525},1};
						down[] = {{0.925,0.55},1};
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{"0.80-0.302","0.082-0.043"},1};
						right[] = {{"0.84-0.302","0.082-0.043"},1};
						down[] = {{"0.80-0.302","0.117-0.043"},1};
					};
					class HeadingRotationArrow
					{
						condition = "5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
						class HeadingArrow
						{
							type = "line";
							width = 3;
							points[] = {{{0.52,0.08},1},{{0.5,0.11},1},{{0.48,0.08},1},{{0.52,0.08},1},{}};
						};
					};
					class HeadingRotation
					{
						condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type = "text";
							source = "cameraDir";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.80-0.302","0.082+0.001"},1};
							right[] = {{"0.83-0.302","0.082+0.001"},1};
							down[] = {{"0.80-0.302","0.113+0.001"},1};
						};
						class HeadingArrow
						{
							type = "line";
							width = 3;
							points[] = {{{0.478,0.075},1},{{0.522,0.075},1},{{0.552,0.095},1},{{0.522,0.115},1},{{0.478,0.115},1},{{0.448,0.095},1},{{0.478,0.075},1},{}};
						};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 0.1;
						sourceoffset = 0;
						width = 3;
						NeverEatSeaWeed = 1;
						top = 0.15;
						center = 0.5;
						bottom = 0.85;
						lineXleft = 0.114;
						lineYright = 0.12;
						lineXleftMajor = 0.114;
						lineYrightMajor = 0.13;
						majorLineEach = 2;
						numberEach = 6;
						step = 0.5;
						stepSize = 0.0344828;
						align = "center";
						scale = 1;
						pos[] = {0.15,0.13};
						right[] = {0.21,0.13};
						down[] = {0.15,0.17};
					};
					class HorizonBanking
					{
						type = "line";
						width = 3;
						clipTL[] = {0,0.1};
						clipBR[] = {1,0.9};
						points[] = {{"HorizonBankSource",{0.16,0},1},{"HorizonBankSource",{0.1,0},1},{"HorizonBankSource",{0.085,-0.015},1},{"HorizonBankSource",{0.07,0},1},{"HorizonBankSource",{0.05,0},1},{},{"HorizonBankSource",{-0.16,0},1},{"HorizonBankSource",{-0.1,0},1},{"HorizonBankSource",{-0.085,-0.015},1},{"HorizonBankSource",{-0.07,0},1},{"HorizonBankSource",{-0.05,0},1},{}};
					};
					class CoordXNumber
					{
						type = "text";
						source = "coordinateX";
						sourceScale = 0.01;
						sourceLength = 3;
						sourceOffset = -0.5;
						align = "right";
						scale = 1;
						pos[] = {{0.809,0.961},1};
						right[] = {{0.859,0.961},1};
						down[] = {{0.809,0.996},1};
					};
					class CoordYNumber: CoordXNumber
					{
						source = "coordinateY";
						pos[] = {{0.899,0.961},1};
						right[] = {{0.949,0.961},1};
						down[] = {{0.899,0.996},1};
					};
					class Time: CoordXNumber
					{
						source = "time";
						text = "%X";
						align = "left";
						pos[] = {{0.605,0.961},1};
						right[] = {{0.655,0.961},1};
						down[] = {{0.605,0.996},1};
					};
					class CurrentWeapon
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.979,0.889},1};
						right[] = {{1.029,0.889},1};
						down[] = {{0.979,0.924},1};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source = "ammo";
						align = "left";
						pos[] = {{0.979,0.921},1};
						right[] = {{1.029,0.921},1};
						down[] = {{0.979,0.956},1};
					};
					class CoordXText
					{
						type = "text";
						source = "static";
						text = "GRID:";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.655,0.961},1};
						right[] = {{0.705,0.961},1};
						down[] = {{0.655,0.996},1};
					};
					class CoordYText
					{
						type = "text";
						source = "static";
						text = "";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.875,0.961},1};
						right[] = {{0.925,0.961},1};
						down[] = {{0.875,0.996},1};
					};
					class LightsGroup
					{
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHT";
							align = "left";
							scale = 1;
							pos[] = {{0.149,0.961},1};
							right[] = {{0.199,0.961},1};
							down[] = {{0.149,0.996},1};
						};
					};
					class CollisionLights
					{
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "COLL";
							align = "left";
							scale = 1;
							pos[] = {{0.309,0.961},1};
							right[] = {{0.359,0.961},1};
							down[] = {{0.309,0.996},1};
						};
					};
					class TargetingPodGroup
					{
						condition = "1-pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodDir",{-0.00707107,0.00695019},1},{"TargetingPodDir",{-0.0212132,0.0208506},1},{},{"TargetingPodDir",{0.00707107,0.00695019},1},{"TargetingPodDir",{0.0212132,0.0208506},1},{},{"TargetingPodDir",{0.00707107,-0.00695019},1},{"TargetingPodDir",{0.0212132,-0.0208506},1},{},{"TargetingPodDir",{-0.00707107,-0.00695019},1},{"TargetingPodDir",{-0.0212132,-0.0208506},1},{}};
						};
					};
					class TargetingPodGroupOn
					{
						condition = "pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodTarget",1,"Limit0109",1,{-0.00707107,0.00695019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0212132,0.0208506},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00707107,0.00695019},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0212132,0.0208506},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00707107,-0.00695019},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0212132,-0.0208506},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.00707107,-0.00695019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0212132,-0.0208506},1},{}};
						};
					};
					class WeaponsLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = {0.2,0.2};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "LOCKING";
							align = "center";
							scale = 1;
							pos[] = {{0.215,0.879701},1};
							right[] = {{0.275,0.879701},1};
							down[] = {{0.215,0.928846},1};
						};
					};
					class TargetInfo
					{
						condition = "missilelocked";
						class TargetLockedText
						{
							type = "text";
							source = "static";
							text = "TARGET ACQUIRED";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.195,0.859},1};
							right[] = {{0.235,0.859},1};
							down[] = {{0.195,0.89},1};
						};
						class TimeOfFlightText
						{
							type = "text";
							source = "static";
							text = "TOF:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.127+0.13",0.889},1};
							right[] = {{0.302,0.889},1};
							down[] = {{"0.127+0.13",0.924},1};
						};
						class DistanceText
						{
							type = "text";
							source = "static";
							text = "DISTANCE:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.125+0.13",0.921},1};
							right[] = {{0.3,0.921},1};
							down[] = {{"0.125+0.13",0.956},1};
						};
						class TOF_source: CurrentWeapon
						{
							source = "missileflighttime";
							align = "right";
							pos[] = {{0.269,0.889},1};
							right[] = {{0.319,0.889},1};
							down[] = {{0.269,0.924},1};
						};
						class TargetDistance: CurrentWeapon
						{
							source = "targetDist";
							sourceLength = 0;
							sourcePrecision = 1;
							sourceScale = 0.001;
							align = "right";
							pos[] = {{0.269,0.921},1};
							right[] = {{0.319,0.921},1};
							down[] = {{0.269,0.956},1};
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = {0.3,0.3};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] = {{0.485,0.216239},1};
							right[] = {{0.545,0.216239},1};
							down[] = {{0.485,0.265385},1};
						};
					};
					class GearGroup
					{
						type = "group";
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "center";
							scale = 1;
							pos[] = {{0.5,0.825641},1};
							right[] = {{0.54,0.825641},1};
							down[] = {{0.5,0.855128},1};
						};
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0,0};
							clipBR[] = {1,1};
							class ILS
							{
								type = "line";
								points[] = {{"ILS_W",{-0.24,0},1},{"ILS_W",{0.24,0},1},{},{"ILS_W",{-0.24,-0.0235897},1},{"ILS_W",{-0.24,0.0235897},1},{},{"ILS_W",{-0.12,-0.0176923},1},{"ILS_W",{-0.12,0.0176923},1},{},{"ILS_W",{0,-0.0235897},1},{"ILS_W",{0,0.0235897},1},{},{"ILS_W",{0.12,-0.0176923},1},{"ILS_W",{0.12,0.0176923},1},{},{"ILS_W",{0.24,-0.0235897},1},{"ILS_W",{0.24,0.0235897},1},{},{"ILS_H",{0,-0.235897},1},{"ILS_H",{0,0.235897},1},{},{"ILS_H",{-0.024,-0.235897},1},{"ILS_H",{0.024,-0.235897},1},{},{"ILS_H",{-0.018,-0.117949},1},{"ILS_H",{0.018,-0.117949},1},{},{"ILS_H",{-0.024,0},1},{"ILS_H",{0.024,0},1},{},{"ILS_H",{-0.018,0.117949},1},{"ILS_H",{0.018,0.117949},1},{},{"ILS_H",{-0.024,0.235897},1},{"ILS_H",{0.024,0.235897},1}};
							};
							class airport
							{
								type = "line";
								points[] = {{"airport1",1},{"airport2",1},{"airport4",1},{"airport3",1},{"airport1",1}};
							};
						};
					};
					class MGun
					{
						condition = "-2+mgun*ImpactDistance";
						class Cross
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0294872},1},{"ImpactPoint",{0,-0.0393162},1},{},{"ImpactPoint",{0.02,-0.024},1},{"ImpactPoint",{0.025,-0.031},1},{},{"ImpactPoint",{0,-0.002},1},{"ImpactPoint",{0,0.002},1},{},{"ImpactPoint",{-0.002,0},1},{"ImpactPoint",{0.002,0},1},{}};
						};
						class Circle
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0275214},1},{"ImpactPoint",{0,-0.0344017},1},{"MissileFlightTimeRot1",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.028},1,"ImpactPoint",1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0294872},1},{"ImpactPoint",{0.005208,-0.029039},1},{"ImpactPoint",{0.01026,-0.0277091},1},{"ImpactPoint",{0.015,-0.0255359},1},{"ImpactPoint",{0.019284,-0.0225872},1},{"ImpactPoint",{0.02298,-0.0189544},1},{"ImpactPoint",{0.02598,-0.0147436},1},{"ImpactPoint",{0.028191,-0.0100846},1},{"ImpactPoint",{0.029544,-0.00511897},1},{"ImpactPoint",{0.03,0},1},{"ImpactPoint",{0.029544,0.00511897},1},{"ImpactPoint",{0.028191,0.0100846},1},{"ImpactPoint",{0.02598,0.0147436},1},{"ImpactPoint",{0.02298,0.0189544},1},{"ImpactPoint",{0.019284,0.0225872},1},{"ImpactPoint",{0.015,0.0255359},1},{"ImpactPoint",{0.01026,0.0277091},1},{"ImpactPoint",{0.005208,0.029039},1},{"ImpactPoint",{0,0.0294872},1},{"ImpactPoint",{-0.005208,0.029039},1},{"ImpactPoint",{-0.01026,0.0277091},1},{"ImpactPoint",{-0.015,0.0255359},1},{"ImpactPoint",{-0.019284,0.0225872},1},{"ImpactPoint",{-0.02298,0.0189544},1},{"ImpactPoint",{-0.02598,0.0147436},1},{"ImpactPoint",{-0.028191,0.0100846},1},{"ImpactPoint",{-0.029544,0.00511897},1},{"ImpactPoint",{-0.03,0},1},{"ImpactPoint",{-0.029544,-0.00511897},1},{"ImpactPoint",{-0.028191,-0.0100846},1},{"ImpactPoint",{-0.02598,-0.0147436},1},{"ImpactPoint",{-0.02298,-0.0189544},1},{"ImpactPoint",{-0.019284,-0.0225872},1},{"ImpactPoint",{-0.015,-0.0255359},1},{"ImpactPoint",{-0.01026,-0.0277091},1},{"ImpactPoint",{-0.005208,-0.029039},1},{"ImpactPoint",{0,-0.0294872},1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,-0.08},1};
							right[] = {"ImpactPoint",{0.045,-0.08},1};
							down[] = {"ImpactPoint",{-0.002,-0.04},1};
						};
					};
					class Rockets
					{
						condition = "-2+rocket*ImpactDistance";
						class Cross
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0294872},1},{"ImpactPoint",{0,-0.0393162},1},{},{"ImpactPoint",{0.02,-0.024},1},{"ImpactPoint",{0.025,-0.031},1},{},{"ImpactPoint",{0,-0.002},1},{"ImpactPoint",{0,0.002},1},{},{"ImpactPoint",{-0.002,0},1},{"ImpactPoint",{0.002,0},1},{}};
						};
						class Circle
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0275214},1},{"ImpactPoint",{0,-0.0344017},1},{"MissileFlightTimeRot1",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.028},1,"ImpactPoint",1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0294872},1},{"ImpactPoint",{0.005208,-0.029039},1},{"ImpactPoint",{0.01026,-0.0277091},1},{"ImpactPoint",{0.015,-0.0255359},1},{"ImpactPoint",{0.019284,-0.0225872},1},{"ImpactPoint",{0.02298,-0.0189544},1},{"ImpactPoint",{0.02598,-0.0147436},1},{"ImpactPoint",{0.028191,-0.0100846},1},{"ImpactPoint",{0.029544,-0.00511897},1},{"ImpactPoint",{0.03,0},1},{"ImpactPoint",{0.029544,0.00511897},1},{"ImpactPoint",{0.028191,0.0100846},1},{"ImpactPoint",{0.02598,0.0147436},1},{"ImpactPoint",{0.02298,0.0189544},1},{"ImpactPoint",{0.019284,0.0225872},1},{"ImpactPoint",{0.015,0.0255359},1},{"ImpactPoint",{0.01026,0.0277091},1},{"ImpactPoint",{0.005208,0.029039},1},{"ImpactPoint",{0,0.0294872},1},{"ImpactPoint",{-0.005208,0.029039},1},{"ImpactPoint",{-0.01026,0.0277091},1},{"ImpactPoint",{-0.015,0.0255359},1},{"ImpactPoint",{-0.019284,0.0225872},1},{"ImpactPoint",{-0.02298,0.0189544},1},{"ImpactPoint",{-0.02598,0.0147436},1},{"ImpactPoint",{-0.028191,0.0100846},1},{"ImpactPoint",{-0.029544,0.00511897},1},{"ImpactPoint",{-0.03,0},1},{"ImpactPoint",{-0.029544,-0.00511897},1},{"ImpactPoint",{-0.028191,-0.0100846},1},{"ImpactPoint",{-0.02598,-0.0147436},1},{"ImpactPoint",{-0.02298,-0.0189544},1},{"ImpactPoint",{-0.019284,-0.0225872},1},{"ImpactPoint",{-0.015,-0.0255359},1},{"ImpactPoint",{-0.01026,-0.0277091},1},{"ImpactPoint",{-0.005208,-0.029039},1},{"ImpactPoint",{0,-0.0294872},1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,-0.08},1};
							right[] = {"ImpactPoint",{0.045,-0.08},1};
							down[] = {"ImpactPoint",{-0.002,-0.04},1};
						};
					};
					class BombCrosshairGroup
					{
						type = "group";
						condition = "bomb";
						class BombCrosshair
						{
							type = "line";
							width = 4;
							points[] = {{"ImpactPoint",{0,-0.0982906},1},{"ImpactPoint",{0.01736,-0.0967966},1},{"ImpactPoint",{0.0342,-0.0923637},1},{"ImpactPoint",{0.05,-0.0851197},1},{"ImpactPoint",{0.06428,-0.0752906},1},{"ImpactPoint",{0.0766,-0.0631812},1},{"ImpactPoint",{0.0866,-0.0491453},1},{"ImpactPoint",{0.09397,-0.0336154},1},{"ImpactPoint",{0.09848,-0.0170632},1},{"ImpactPoint",{0.1,0},1},{"ImpactPoint",{0.09848,0.0170632},1},{"ImpactPoint",{0.09397,0.0336154},1},{"ImpactPoint",{0.0866,0.0491453},1},{"ImpactPoint",{0.0766,0.0631812},1},{"ImpactPoint",{0.06428,0.0752906},1},{"ImpactPoint",{0.05,0.0851197},1},{"ImpactPoint",{0.0342,0.0923637},1},{"ImpactPoint",{0.01736,0.0967966},1},{"ImpactPoint",{0,0.0982906},1},{"ImpactPoint",{-0.01736,0.0967966},1},{"ImpactPoint",{-0.0342,0.0923637},1},{"ImpactPoint",{-0.05,0.0851197},1},{"ImpactPoint",{-0.06428,0.0752906},1},{"ImpactPoint",{-0.0766,0.0631812},1},{"ImpactPoint",{-0.0866,0.0491453},1},{"ImpactPoint",{-0.09397,0.0336154},1},{"ImpactPoint",{-0.09848,0.0170632},1},{"ImpactPoint",{-0.1,0},1},{"ImpactPoint",{-0.09848,-0.0170632},1},{"ImpactPoint",{-0.09397,-0.0336154},1},{"ImpactPoint",{-0.0866,-0.0491453},1},{"ImpactPoint",{-0.0766,-0.0631812},1},{"ImpactPoint",{-0.06428,-0.0752906},1},{"ImpactPoint",{-0.05,-0.0851197},1},{"ImpactPoint",{-0.0342,-0.0923637},1},{"ImpactPoint",{-0.01736,-0.0967966},1},{"ImpactPoint",{0,-0.0982906},1},{},{"ImpactPoint",1,"Limit0109",1,{0,-0.0196581},1},{"ImpactPoint",1,"Limit0109",1,{0.014,-0.0137607},1},{"ImpactPoint",1,"Limit0109",1,{"+ 0.02",0},1},{"ImpactPoint",1,"Limit0109",1,{0.014,0.0137607},1},{"ImpactPoint",1,"Limit0109",1,{0,0.0196581},1},{"ImpactPoint",1,"Limit0109",1,{-0.014,0.0137607},1},{"ImpactPoint",1,"Limit0109",1,{"- 0.02",0},1},{"ImpactPoint",1,"Limit0109",1,{-0.014,-0.0137607},1},{"ImpactPoint",1,"Limit0109",1,{0,-0.0196581},1},{},{"VelocityVector",0.001,"ImpactPoint",1,"Limit0109",1,{0,0},1},{"VelocityVector",1,"Limit0109",1,{0,0},1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,0.11},1};
							right[] = {"ImpactPoint",{0.045,0.11},1};
							down[] = {"ImpactPoint",{-0.002,0.15},1};
						};
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "left";
							scale = 1;
							pos[] = {{0.935,0.797137},1};
							right[] = {{0.975,0.797137},1};
							down[] = {{0.935,0.834487},1};
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = ">";
							align = "center";
							scale = 2;
							pos[] = {{0.95,0.797137},1};
							right[] = {{0.97,0.797137},1};
							down[] = {{0.95,0.834487},1};
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.96,0.797137},1};
							right[] = {{1,0.797137},1};
							down[] = {{0.96,0.834487},1};
						};
						class WP
						{
							width = 1;
							type = "line";
							points[] = {{"wppoint",1,{"HorizonBankRotFull",0.015,-0.035},1},{"wppoint",1,{"HorizonBankRotFull",0,0},1},{"wppoint",1,{"HorizonBankRotFull",-0.015,-0.035},1}};
						};
					};
					class RadarBoxes
					{
						type = "radartoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
						width = 2;
						points[] = {{{-0.002,-0.00196581},1},{{0.002,-0.00196581},1},{{0.002,0.00196581},1},{{-0.002,0.00196581},1},{{-0.002,-0.00196581},1}};
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0.02,0.0196581},1},{"Target",1,"Limit0109",1,{-0.02,0.0196581},1},{"Target",1,"Limit0109",1,{-0.02,-0.0196581},1},{"Target",1,"Limit0109",1,{0.02,-0.0196581},1},{"Target",1,"Limit0109",1,{0.02,0.0196581},1}};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0,-0.0294872},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.0294872},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.0294872},1}};
						};
					};
				};
			};
			class HMD_CMPilot: AirplaneHUD
			{
				turret[] = {-1};
				class Draw
				{
					alpha = "user3";
					color[] = {"user0","user1","user2"};
					condition = "on - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37)";
					class CMName
					{
						type = "text";
						source = "cmweapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.869,0.849},1};
						right[] = {{0.919,0.849},1};
						down[] = {{0.869,0.884},1};
					};
					class CMCount
					{
						type = "text";
						source = "cmammo";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.979,0.849},1};
						right[] = {{1.029,0.849},1};
						down[] = {{0.979,0.884},1};
					};
				};
			};
		};
		class RenderTargets
		{
			class Gunner01_pip
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "Cannon_pip_pos";
					pointDirection = "Cannon_pip_dir";
					renderVisionMode = 2;
					renderQuality = 2;
					fov = 0.4;
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_damage.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_destruct.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_damage.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_destruct.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_damage.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_destruct.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cargo01.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cargo01.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_destruct.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cargo02.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cargo02.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_destruct.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cockpit01.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cockpit01.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_destruct.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cockpit02.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_Cockpit02.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_destruct.rvmat","a3\data_f\glass_veh.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass_damage.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass_damage.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass_damage.rvmat","A3\Air_F_Exp\VTOL_02\Data\VTOL_02_glass_damage.rvmat"};
		};
		class TextureSources
		{
			class Hex
			{
				displayName = "$STR_A3_TEXTURESOURCES_HEX0";
				author = "$STR_A3_BOHEMIA_INTERACTIVE";
				factions[] = {"OPF_F","OPF_T_F"};
				textures[] = {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_bhex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_bhex_CO.paa"};
			};
			class GreenHex
			{
				displayName = "$STR_A3_TEXTURESOURCES_GREENHEX0";
				author = "$STR_A3_BOHEMIA_INTERACTIVE";
				factions[] = {"OPF_F","OPF_T_F"};
				textures[] = {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_ghex_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_ghex_CO.paa"};
			};
			class Grey
			{
				displayName = "$STR_A3_TEXTURESOURCES_GREY0";
				author = "$STR_A3_BOHEMIA_INTERACTIVE";
				factions[] = {"OPF_F","OPF_T_F"};
				textures[] = {"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa","\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"};
			};
		};
		textureList[] = {"Hex",1,"GreenHex",1,"Grey",1};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 3;
				explosionShielding = 1;
				name = "HitHull";
				passThrough = 0.5;
				visual = "Hit_Hull";
				radius = 0.3;
				minimalHit = 0.02;
				depends = "Total";
				material = -1;
			};
			class HitLAileron: HitHull
			{
				armor = 2.5;
				explosionShielding = 3;
				name = "HitRotor1";
				passThrough = 0.1;
				visual = "Hit_RotorL";
				radius = 0.45;
				minimalHit = 0.01;
				depends = "0";
			};
			class HitRAileron: HitHull
			{
				armor = 2.5;
				explosionShielding = 3;
				name = "HitRotor2";
				passThrough = 0.1;
				visual = "Hit_RotorR";
				radius = 0.45;
				minimalHit = 0.01;
				depends = "0";
			};
			class HitLCRudder: HitLAileron{};
			class HitRRudder: HitRAileron{};
			class HitLCElevator: HitLAileron{};
			class HitRElevator: HitRAileron{};
			class HitEngine: HitHull
			{
				armor = 3.25;
				explosionShielding = 0.5;
				name = "HitEngine";
				passThrough = 0.1;
				visual = "Hit_Engine";
				radius = 0.2;
				minimalHit = 0.01;
				depends = "HitLAileron*0.33";
			};
			class HitEngine2: HitHull
			{
				armor = 3.25;
				explosionShielding = 0.5;
				name = "HitEngine2";
				passThrough = 0.1;
				visual = "Hit_Engine2";
				radius = 0.2;
				minimalHit = 0.01;
				depends = "HitRAileron*0.33";
			};
			class HitAvionics: HitHull
			{
				armor = 2;
				explosionShielding = 1;
				name = "HitAvionics";
				passThrough = 0.2;
				visual = "Hit_Avionics";
				radius = 0.2;
				depends = "0";
			};
			class HitFuel: HitHull
			{
				armor = 2.75;
				explosionShielding = 0.5;
				name = "HitFuel";
				passThrough = 0.5;
				visual = "Hit_Fuel";
				radius = 0.2;
				minimalHit = 0.01;
				depends = "0";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving_source
			{
				source = "revolving";
				weapon = "missiles_SCALPEL";
			};
			class Cannon_revolving_source
			{
				source = "revolving";
				weapon = "gatling_30mm_VTOL_02";
			};
		};
		lightOnGear = 1;
		aggregateReflectors[] = {{"Light_1","Light_2"}};
		class Reflectors
		{
			class Light_1
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 5;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hit";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hit";
				selection = "Light_2_hide";
			};
		};
		memoryPointRDust = "WheelDust_right_pos";
		memoryPointLDust = "WheelDust_left_pos";
		dustEffect = "VTOLDust";
		waterEffect = "VTOLWater";
		class WingVortices
		{
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "Vapour_body_left_pos";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "Vapour_body_right_pos";
			};
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "Vapour_wintip_left_pos";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "Vapour_wintip_right_pos";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "Exhaust_1_pos";
				direction = "Exhaust_1_dir";
				effect = "ExhaustsEffectVTOL1HP";
				engineIndex = 0;
			};
			class Exhaust2
			{
				position = "Exhaust_2_pos";
				direction = "Exhaust_2_dir";
				effect = "ExhaustsEffectVTOL1HP";
				engineIndex = 1;
			};
		};
		reportOwnPosition = 1;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 37;
						maxTrackableSpeed = 100;
						animDirection = "PilotCamera_V";
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 37;
						maxTrackableSpeed = 100;
						animDirection = "PilotCamera_V";
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 100;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 100;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 120;
						angleRangeVertical = 80;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 40;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		class Turrets{};
		memoryPointDriverOptics = "PilotCamera_pos";
		unitInfoType = "RscOptics_CAS_Pilot";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = "(60 / 120)";
					minFov = "(60 / 120)";
					maxFov = "(60 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov = "(12 / 120)";
					minFov = "(12 / 120)";
					maxFov = "(12 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(4 / 120)";
					minFov = "(4 / 120)";
					maxFov = "(4 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class VeryNarrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(2 / 120)";
					minFov = "(2 / 120)";
					maxFov = "(2 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -20;
			maxElev = 90;
			initElev = 5;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 2;
			};
		};
		soundGetIn[] = {"A3\Sounds_F_EPC\CAS_01\getin_wipeout",1,1,40};
		soundGetOut[] = {"A3\Sounds_F\air\Plane_Fighter_03\getout",1,1,40};
		soundDammage[] = {"",0.562341,1};
		soundEngineOnInt[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_start_int",1,1};
		soundEngineOnExt[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_start_ext",1.41254,1,500};
		soundEngineOffInt[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_stop_int",1,1};
		soundEngineOffExt[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_stop_ext",1.41254,1,500};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.316228,1};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_01\gear_up",0.794328,1,150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_01\gear_down",0.794328,1,150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up",0.630957,1,100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down",0.630957,1,100};
		class scrubLandInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
			frequency = 1;
			volume = "(scrubLand factor[0.01, 0.20])";
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_idle_ext",1,1,2100};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_ext",1,1.2,2500};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_ext",1.41254,1.2,2800};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise",0.562341,1,150};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_idle_int",0.562341,1};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_int",0.501187,1.2};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_int",0.398107,1.2};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise_int",0.316228,1};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.77828,1,100};
				frequency = 1;
				volume = "camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency = 1;
				volume = "(1-camPos) * rain * (speed factor[50, 0])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.316228,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.223872,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class EngineExt
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_ext",1.25893,1,400};
				frequency = "rotorSpeed";
				volume = "4 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class EngineInt
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_ext",0.794328,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*2*(0 max (rotorSpeed-0.4))";
			};
			class RotorExt
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_ext",1.25893,1,1000};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "camPos * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
			};
			class RotorInt
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_ext",0.630957,1};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineLowOut
				{
					sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_idle_ext",1,1,2100};
					frequency = "1.0 min (rpm + 0.5)";
					volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
				};
				class EngineHighOut
				{
					sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_ext",1,1.2,2500};
					frequency = "1";
					volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
				};
				class ForsageOut
				{
					sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_ext",1.41254,1.2,2800};
					frequency = "1";
					volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
					cone[] = {3.14,3.92,2,0.5};
				};
				class WindNoiseOut
				{
					sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise",0.562341,1,150};
					frequency = "(0.1+(1.2*(speed factor[1, 150])))";
					volume = "camPos*(speed factor[1, 150])";
				};
				class EngineLowIn
				{
					sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_idle_int",0.562341,1};
					frequency = "1.0 min (rpm + 0.5)";
					volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
				};
				class EngineHighIn
				{
					sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_int",0.501187,1.2};
					frequency = "1";
					volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
				};
				class ForsageIn
				{
					sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_int",0.398107,1.2};
					frequency = "1";
					volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
				};
				class WindNoiseIn
				{
					sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise_int",0.316228,1};
					frequency = "(0.1+(1.2*(speed factor[1, 150])))";
					volume = "(1-camPos)*(speed factor[1, 150])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.77828,1,100};
					frequency = 1;
					volume = "camPos * rain * (speed factor[50, 0])";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
					frequency = 1;
					volume = "(1-camPos) * rain * (speed factor[50, 0])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.316228,1};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.223872,1,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class EngineExt
				{
					sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_ext",1.25893,1,400};
					frequency = "rotorSpeed";
					volume = "4 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_engine_ext",0.794328,1};
					frequency = "rotorSpeed";
					volume = "(1-camPos)*2*(0 max (rotorSpeed-0.4))";
				};
				class RotorExt
				{
					sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_ext",1.25893,1,1000};
					frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
					volume = "camPos * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F_EPC\CAS_01\CAS_01_forsage_ext",0.630957,1};
					frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
					volume = "(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
				};
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};
	class VTOL_Neph_1: VTOL_Neph_1_Cons_base
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "TIOW_SpaceMarines";
		editorSubcategory = "EdSubcat_DarkAngels";
		displayName = "[TSR] Nephilim Jetfighter (retrofit)";
		crew = "TIOW_Tactical_DA_HH_4";
		weapons[] = {"Avenger_Mega_Bolter","Nephs_HB","BMissile_6rnd","CMFlareLauncher","Laserdesignator_mounted"};
		magazines[] = {"AMBolter_Mag","Laserbatteries","BMissile_6rnd_mag","BMissile_6rnd_mag","BMissile_6rnd_mag","BMissile_6rnd_mag","168Rnd_CMFlare_Chaff_Magazine","Neph_Bolter_mag_120","Neph_Bolter_mag_120","Neph_Bolter_mag_120","Neph_Bolter_mag_120"};
		memoryPointGun = "Cannon_end";
		memoryPointLMissile = "left_rocket_fire";
		memoryPointRMissile = "right_rocket_fire";
		memoryPointMissileDir[] = {"RocketR_dir","RocketL_dir"};
		selectionFireAnim = "MF";
		hasGunner = 0;
		driverAction = "Neph_Pilot_Cons_1";
		driverInAction = "Neph_Pilot_Cons_1";
		class Turrets{};
		class AnimationSources: AnimationSources
		{
			class Gatling
			{
				source = "revolving";
				weapon = "Avenger_Mega_Bolter";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "BMissile_6rnd";
			};
			class Cannon_muzzleflash_source
			{
				source = "reload";
				weapon = "Avenger_Mega_Bolter";
			};
			class Bolter_muzzleflash_source
			{
				source = "reload";
				weapon = "Nephs_HB";
			};
		};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class CannonCore;
class CfgWeapons
{
	class TIOW_Mars_HeavyBolter;
	class Nephs_HB: TIOW_Mars_HeavyBolter
	{
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "Twin-Linked Bolter";
		baseWeapon = "Nephs_HB";
		descriptionShort = "Twin-Linked Bolter.";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazineReloadTime = 3;
		magazines[] = {"Neph_Bolter_mag_120"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun3";
				positionName = "Right_bolt_beg";
				directionName = "Right_bolt_end";
			};
			class Effect2
			{
				effectName = "MachineGun3";
				positionName = "Left_bolt_beg";
				directionName = "Left_bolt_end";
			};
		};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",0.316228,1,10};
				closure2[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",0.316228,1.1,10};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"TIOW_BolterDeep_Shot_SoundSet","TIOW_BolterDeep_Tail_SoundSet","TIOW_BolterDeep_InteriorTail_SoundSet"};
				begin1[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",3.16228,1,1800};
				begin2[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",3.16228,1,1800};
				begin3[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",3.16228,1,1800};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",2.23872,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"\TIOW_SMWep\Sound\BolterDeep.wss",1,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.125;
			dispersion = 0.006;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			minRange = 0;
			minRangeProbab = 0.25;
			midRange = 15;
			midRangeProbab = 0.25;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1;
		};
		showToPlayer = 0;
		burst = 5;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 350;
		midRangeProbab = 0.9;
		maxRange = 550;
		maxRangeProbab = 0.9;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 550;
	};
	class TIOW_VMB_R;
	class Avenger_Mega_Bolter: TIOW_VMB_R
	{
		displayname = "Avenger Mega Bolter";
		descriptionShort = "Avenger Mega Bolter";
		selectionFireAnim = "cannon_muzzleflash";
		magazines[] = {"AMBolter_Mag"};
	};
	class missiles_DAR;
	class BMissile_6rnd: missiles_DAR
	{
		displayname = "Blacksword Missile Launchers";
		descriptionShort = "6rnd Blacksword Missile Launchers";
		magazines[] = {"BMissile_6rnd_mag"};
		magazineReloadTime = 10;
	};
};
class CfgMagazines
{
	class TIOW_VMB_Mag_x2000;
	class AMBolter_Mag: TIOW_VMB_Mag_x2000
	{
		displayname = "Avenger Mega Bolter Mag";
		ammo = "SE_Bolt_Rnd";
		count = 1000;
		descriptionShort = "Avenger Mega Bolter 1000Rnd";
	};
	class 6Rnd_LG_scalpel;
	class BMissile_6rnd_mag: 6Rnd_LG_scalpel
	{
		author = "Bohemia Interactive";
		displayName = "Blacksword Missiles";
		count = 6;
		ammo = "BMissile_6rnd_Rnd";
		descriptionShort = "Blacksword Missiles";
	};
	class TIOW_Mars_HeavyBolterMag_85rnd;
	class Neph_Bolter_mag_120: TIOW_Mars_HeavyBolterMag_85rnd
	{
		displayName = "Twin-Linked Bolter";
		ammo = "Neph_Bolt_Rnd";
		count = 120;
		descriptionShort = "Twin-Linked Bolter";
	};
};
class CfgAmmo
{
	class TIOW_IG_HeavyBolter_Rnd;
	class Neph_Bolt_Rnd: TIOW_IG_HeavyBolter_Rnd
	{
		cartridge = "";
		tracerStartTime = 0.1;
	};
	class AMBolter_Cons_Rnd: TIOW_IG_HeavyBolter_Rnd
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		hit = 220;
		explosive = 0.6;
		explosionEffects = "ExploAmmoExplosion";
		tracerStartTime = 0.175;
		waterFriction = -0.01;
		effectFly = "AmmoUnderwater";
	};
	class M_Scalpel_AT;
	class BMissile_6rnd_Rnd: M_Scalpel_AT
	{
		effectsMissile = "BlackMissile_cons";
		airLock = 1;
		autoSeekTarget = 1;
		weaponLockSystem = "2 + 16 + 4 + 8";
		trackOversteer = 1;
		missileLockMaxDistance = 2000;
		weaponLockDelay = 1.5;
		irScanRangeMin = 100;
		irScanRangeMax = 7500;
		irScanGround = 1;
		laserLock = 1;
		irTarget = 1;
		laserScanner = 1;
		radarType = 4;
	};
};
class cfgMods
{
	author = "Xemio";
	timepacked = "1660321904";
};
