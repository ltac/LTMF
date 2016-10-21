/**
    Get TFR radios

    List of roles and the radios they should bne given in a typical loadout
    (More limited loadouts e.g. insurgents may want to use a different setup) 

    Regluar Rifleman  -  Rifleman radio
    Fireteam Leader   -  Rifleman radio
    Squad Leader      -  Short-Range radio & Rifleman radio

    Parameters
    Unit    : The unit to give radios to.
    Radios  : List of radio types the unit should have. Options are "rfl", "sr" and "lr", for rifleman, short-range, and long-range backpack radios respectivley
*/
_unit   = _this select 0;
_radios = _this select 1;  

// The side of the unit. Used to determine which set of radios is used.
_side   = side _unit;

// TODO: Redo TFAR radio assignment