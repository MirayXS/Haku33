#include <iostream>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <inttypes.h>
#include <switch.h>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <memory>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <iterator>
#include <dirent.h>
#include <cstdio>
#include <filesystem>
#include <unistd.h>
#include <sys/socket.h>
#include <cstring>
#include <vector>
#include <stdlib.h>
void set_LANG();
typedef struct {
	const char* text1;
	const char* text2;
	const char* text3;
	const char* text4;
	const char* text5;
	const char* text6;
	const char* text7;
	const char* text8;
	const char* text9;
	const char* text0;
	const char* text11;
	const char* text12;
/*	const char* text;
	const char* text;
	const char* text;
	const char* text;
	const char* text;
	const char* text;
	const char* text;
	const char* text;
	const char* text;
	const char* text;
	const char* text;
	const char* text;*/
} language;

language LG;
	//traduction
	
	void set_LANG()
	{
		setInitialize();
		u64 lcode = 0;
		SetLanguage lang;
		setGetSystemLanguage(&lcode);
		setMakeLanguage(lcode, &lang);
			switch(lang)
			{
				case 5:
				case 14: //spanish
				LG.text1 = "\n\x1b[30;1m TU CONSOLA SERA COMPLETAMENTE LIMPADA: SAVES, JUEGOS, ETC  \x1b[0m\n";
				LG.text2 = "\n\x1b[30;1m SE REALIZARA UN HARD RESET LUEGO SE APAGARA LA CONSOLA \x1b[0m\n";
				LG.text3 = "\n\x1b[30;1m SI NO SABES LO QUE HACES, PRESIONA B PARA ABORTAR \x1b[0m\n";
				LG.text4 = "\n\n\x1b[30;1m-------- LO DEVORARE TODO --------\x1b[0m\n\n";
				LG.text5 = "\n\nPULSA A PARA LIMPIAR\n\n";
				LG.text6 = "\x1b[33;1m*\x1b[0m Recuerda Desinstalar Incognito Desde Incognito-RCM\n\n";
				LG.text7 = "\x1b[33;1m*\x1b[0m Luego del Reinicio ve a Hekate -> More configs -> Haku33\n\n";
				LG.text8 = " No se puede Reiniciar al Payload en una consola Mariko\n";
				LG.text9 = "\n\x1b[33;1m*\x1b[0m Si se congela mucho tiempo, Es que ha fallado. Pulsa POWER 15s \n\ny haslo de nuevo\n\n";
				LG.text0 = "\x1b[32;1m*\x1b[0m Deshabilitando FTP de SXOS\n";
				LG.text11 = "\x1b[32;1m*\x1b[0m Esto no esta pensado para usarse en EMU\n";
				LG.text12 = "\x1b[32;1m*\x1b[0m NO Existe /switch/prod.keys, usa LockPick_RCM\n";
				break;
				default: //all
				LG.text1 = "\n\x1b[30;1m YOUR CONSOLE WILL BE COMPLETELY CLEANED: SAVES, GAMES, ETC  \x1b[0m\n";
				LG.text2 = "\n\x1b[30;1m A HARD RESET WILL BE PERFORMED AFTER THE CONSOLE WILL BE OFF \x1b[0m\n";
				LG.text3 = "\n\x1b[30;1m IF YOU DON'T KNOW WHAT YOU DO, PRESS B FOR ABORT \x1b[0m\n";
				LG.text4 = "\n\n\x1b[30;1m-------- I WILL CONSUME EVERYTHING --------\x1b[0m\n\n";
				LG.text5 = "\n\nPRESS A TO CLEAN\n\n";
				LG.text6 = "\x1b[33;1m*\x1b[0m Remember Uninstall Incognito from Incognito-RCM\n\n";
				LG.text7 = "\x1b[33;1m*\x1b[0m After the Reboot go to Hekate -> More configs -> Haku33\n\n";
				LG.text8 = " Reboot to payload cannot be used on a Mariko system\n";
				LG.text9 = "\n\x1b[33;1m*\x1b[0m If it freezes for a long time, It has failed. Press POWER 15s \n\nand try again \n\n";
				LG.text0 = "\x1b[32;1m*\x1b[0m Disabling SXOS FTP\n";
				LG.text11 = "\x1b[32;1m*\x1b[0m This is not intended to be used at EMU\n";
				LG.text12 = "\x1b[32;1m*\x1b[0m /switch/prod.keys does not exist, use LockPick_RCM\n";
				break;
			}
		setsysExit();
		
	}

void set_LANG();