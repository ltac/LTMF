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
  case (0): {"#adminlogged"};
  case (1): {"76561198025405060"}; // IMPERATORS USER ID SHOULD HERE!
  case (2): {"76561198025405060"};
  case (3): {"zeusUnit"};
  case (4): {"PUT YOUR USER ID HERE"};
  default {"#adminlogged"};
};

f_var_zeusPlayer = _zeusOwner;
