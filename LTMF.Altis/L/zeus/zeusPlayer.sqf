/**
  Zeus Owner Determination

  Important Variables:
    zeusPlayer - The actual zeus module itself. Use this for functions like 'addCuratorEditableObjects'
    zeusUnit   - A unit that should be the owner of zeusPlayer. Name the unit you want to be a zeus slot this.
*/

private ["_zeusOwner"];

// Wait for parameter to be initialised
waitUntil{!isNil "f_var_zeusPlayer"};

_zeusOwner = switch (f_var_zeusPlayer) do {
  case (0): {"#adminlogged"};           // Admin
  case (1): {"zeusUnit"};               // Zeus Slot
  case (2): {"PUT YOUR USER ID HERE"};  // Mission Creator (This is you!)
  case (3): {"76561197961323298"};      // Imperator
  case (4): {"76561198025405060"};      // EddBC
  default {"#adminlogged"};
};

f_var_zeusPlayer = _zeusOwner;
