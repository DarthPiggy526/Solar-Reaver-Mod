/*
	Author: Waagheur
	Description:
		Calculates the InfiBlood treatment time, either 150% of ace_medical_treatment_treatmentTimeIV 
		or 9 if ace_medical_treatment_treatmentTimeIV is undefined
	Parameter(s):
		None
	Returns:
		InfiBlood treatment duration (float)
	Examples:
		
*/

if (isNil "ace_medical_treatment_treatmentTimeIV") then {
	9;
}
else {
	1.5*ace_medical_treatment_treatmentTimeIV;
};