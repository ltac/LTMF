/*
 * Name: initServer.sqf
 * 
 * Description:
 * All code here executes during mission initialization only on server-side.
 * See for more details.
 *
 * Author:
 * Legion Tactical
 */
if (f_var_radios != 0) then {
	[] execVM "L\radios\radioInit.sqf";
};