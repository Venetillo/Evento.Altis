﻿//Based on Original Script by goldenfiver take on Bohemia Forum Corriged and edited by Cutkiller26 [SIRA]
//Source: http://forums.bistudio.com/showthread.php?171349-Scripting-a-Power-Point-presentation-need-help
_BRIEFinit = _this select 0;

//change "slideArray" with location and name of picture jpg or paa files. You can add how many picture.
slideArray = ["imagem\base.jpg","imagem\m1.jpg","imagem\m2.jpg","imagem\m3.jpg","imagem\m4.jpg","imagem\m5.jpg","imagem\m6.jpg","imagem\m7.jpg","imagem\m8.jpg","imagem\m9.jpg","imagem\m10.jpg"]; 
slideIndex = 0;
slides = count slideArray;

greenText = {"<t color='#00FF00'>" + _this + "</t>"};
redText = {"<t color='#FF0000'>" + _this + "</t>"};
orangeText = {"<t color='#FFA500'>" + _this + "</t>"};



BRIEF1 = player addAction ["Avançar" call greenText, "Powerpoint\BRIEFnext.sqf", [], 99, false, false, ""];  //should be first in action list
BRIEF2 = player addAction ["Voltar" call orangeText, "Powerpoint\BRIEFprevious.sqf", [], 98, false, false, ""];  //should be second in action list
BRIEF3 = player addAction ["Fechar Powerpoint" call redText, "Powerpoint\BRIEFend.sqf", [], 97, false, false, ""];  //should be last in action list
