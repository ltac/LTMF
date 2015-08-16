/*
 * Author: GRUBES
 * Creates a side-specific marker. Uses createMarkerLocal,
 * so the marker will be created only for the machine on
 * which the function is run. To create the marker for 
 * all units of the given side, place the function call
 * in a place executed for all players, like initPlayerLocal.sqf
 *
 * Arguments:
 * 0: STRING - The name of the marker
 * 1: SIDE - The side for which the marker should appear, default west
 * 2: POSITION2D - The position where the marker will be placed, default [0,0]
 * 3: POSITION2D - The size for the marker, default [1,1]
 * 4: STRING - The color of the marker, default "Default" (see https://community.bistudio.com/wiki/setMarkerColorLocal)
 * 5: "ICON" or "RECTANGLE" or "ELLIPSE" - The shape of the marker, default "ICON"
 * 6: STRING - The type of the marker, default "EMPTY" (see https://community.bistudio.com/wiki/cfgMarkers)
 * 7: STRING - The text to display for the marker
 *
 * Return Value:
 * The created marker <MARKER>, or false if the player is
 * not on the given side
 *
 * Example:
 * [
 *   "myMarker",
 *   east, 
 *   [100, 200],
 *   [50,50],
 *   "RECTANGLE"
 * ] call GBS_fnc_createSideMarkerLocal
 *
 * Example:
 * [
 *   "myMarker",
 *   east, 
 *   [100, 200],
 *   [50,50],
 *   "ICON",
 *	 "hd_objective",
 *   "Possible enemy presence"
 * ] call GBS_fnc_createSideMarkerLocal
 *
 * Public: Yes
 */
private ["_marker"];

// Parse parameters into private variables
params [
	"_markerName",
	["_side", west],
	["_markerPos", [0,0]],
	["_markerSize", [1,1]],
	["_markerColor", "Default"],
	["_markerShape", "ICON"],
	["_markerType", "Empty"],
	["_markerText", ""]
];

if (playerSide == _side) then {
	_marker = createMarkerLocal [_markerName, _markerPos];
	_marker setMarkerShapeLocal _markerShape;
	_marker setMarkerSizeLocal _markerSize;
	_marker setMarkerColorLocal _markerColor;
	
	if (_markerShape == "ICON") then {
		_marker setMarkerTypeLocal _markerType;
	};
	
	if (_markerText != "") then {
		_marker setMarkerTextLocal _markerText;
	};
	
	_marker
} else {
	false
};