player enableFatigue false;
player addMPEventhandler ["MPRespawn", {player enableFatigue false}]; 
["InitializePlayer",[player,true]]call BIS_fnc_dynamicGroups; 