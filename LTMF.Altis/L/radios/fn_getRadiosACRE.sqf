/**
    Get ACRE2 radios

    List of roles and the radios they should bne given in a typical loadout
    (More limited loadouts e.g. insurgents may want to use a different setup) 

    Regluar Rifleman  -  Rifleman radio (AN/PRC-343)
    Fireteam Leader   -  Rifleman radio (AN/PRC-343)
    Squad Leader      -  Short-Range radio (AN/PRC-152) & Rifleman radio (AN/PRC-343)

    Parameters
    Unit    : The unit to give radios to.
    Radios  : List of radio types the unit should have. Options are "rfl", "sr" and "lr", for rifleman, short-range, and long-range backpack radios respectivley
*/
_unit   = _this select 0;
_radios = _this select 1; 


// Set a different preset channel list for different sides
_preset = "default";
switch (side _unit) do {
    case west: {
        _preset = "default2";
    };
    case east: {
        _preset = "default3";
    };
}; 


// Radio definitions
_radio_rfl  = "ACRE_PRC343";   // Rifleman radio (AN/PRC-343)
_radio_sr   = "ACRE_PRC152";   // Short-Range radio (AN/PRC-152)
_radio_lr   = "ACRE_PRC117F";  // Long-range backpack radio (AN/PRC-177F)

// Assign radio(s) with preset channels to the unit
{
    // Current radio is saved in variable _x
    switch (_x) do {
        case "lr": {
            // Add long-range radios to the backpack
            [_radio_ls, _preset] call acre_api_fnc_setPreset;
            _unit addItemToBackpack _radio_lr;
        };
        case "sr": {
            // Add short-range radios to inventory
            [_radio_sr, _preset] call acre_api_fnc_setPreset;
            _unit addItem _radio_sr;
        };
        case "rfl": {
            // Add rifleman radios to inventory
            [_radio_sr, _preset] call acre_api_fnc_setPreset;
            _unit addItem _radio_rfl;
        };
    };
} forEach _radios;