player removeAction BRIEF1;
player removeAction BRIEF2;
player removeAction BRIEF3;
bigScreen setObjectTextureGlobal [0, "imagem\base.jpg"]; 
mesa setObjectTextureGlobal [0, "imagem\base.jpg"];
BRIEFinit = mesa addAction [("<t color='#06FF94'>" + ("Iniciar Exibição") + "</t>"),{[(_this select 0)] execVM "Powerpoint\BRIEFinit.sqf"; (_this select 0) removeAction (_this select 2);},nil,6,true,true,"","_this distance _target < 3"];