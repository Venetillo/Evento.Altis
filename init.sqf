//ticket definition
[west,1] call BIS_fnc_respawnTickets;


//inventory definition
[missionNamespace,["WEST1",1,1]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST2",1,2]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST3",1,4]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST4",1,4]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST5",1,4]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST6",1,4]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST7",1,15]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST8",1,4]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST9",1,2]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST10",1,2]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST11",1,2]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST12",1,1]] call BIS_fnc_addRespawnInventory;



BRIEF_setObjectTextureGlobal = {(_this select 0) setObjectTextureGlobal (_this select 1)}; 
MAC_fnc_switchMove = {
    private["_object","_anim"];
    _object = _this select 0;
    _anim = _this select 1;

    _object switchMove _anim;
    
}
;nopop=true;

