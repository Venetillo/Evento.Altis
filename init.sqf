//ticket definition
[west,2] call BIS_fnc_respawnTickets;


//inventory definition
[missionNamespace,["WEST1",1,1]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST2",1,2]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST3",1,2]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["WEST4",1,2]] call BIS_fnc_addRespawnInventory;



BRIEF_setObjectTextureGlobal = {(_this select 0) setObjectTextureGlobal (_this select 1)}; 
MAC_fnc_switchMove = {
    private["_object","_anim"];
    _object = _this select 0;
    _anim = _this select 1;

    _object switchMove _anim;
    
}
;nopop=true;

