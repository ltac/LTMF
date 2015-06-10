// F3 - ACE Basic Clientside Initialisation
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

// Wait for gear assignation to take place
waitUntil{(player getVariable ["f_var_assignGear_done", false])};

private "_typeOfUnit";

_typeOfUnit = player getVariable "f_var_assignGear";

// Remove pre-assigned medical items
{player removeItems _x} forEach ["FirstAidKit","Medikit","AGM_Bandage","AGM_Morphine","AGM_Epipen","AGM_Bloodbag"];

// Add basic items to all units
player addItem "AGM_EarBuds";
{player addItem "AGM_Bandage"} forEach [1,2,3,4,5];
player addItem "AGM_Morphine";

if (_typeOfUnit == "m") then
{

	// BACKPACK: LIGHT
	if (f_param_backpacks <= 1) then {
		(unitBackpack player) addItemCargoGlobal ["ACE_fieldDressing",  15];
		(unitBackpack player) addItemCargoGlobal ["ACE_morphine", 10];
		(unitBackpack player) addItemCargoGlobal ["ACE_epinephrine",   10];
		(unitBackpack player) addItemCargoGlobal ["ACE_bloodIV_500", 4];
	};
	// BACKPACK: HEAVY
	if (f_param_backpacks == 2) then {
		(unitBackpack player) addItemCargoGlobal ["ACE_fieldDressing", 25];
		(unitBackpack player) addItemCargoGlobal ["ACE_morphine", 15];
		(unitBackpack player) addItemCargoGlobal ["ACE_epinephrine",   15];
		(unitBackpack player) addItemCargoGlobal ["ACE_bloodIV_500", 6];
	};
};
