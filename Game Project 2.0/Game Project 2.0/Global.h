#pragma once
#include "PlayerClass.h"
#include "EventClass.h"

const int INITIALHEALTH = 10;
const int MAXROUNDS = 8;


void playgame();
void testfunctionality();
int randfunc(int);
void storyopening();
void addsupplies(PlayerClass*);
PlayerClass* setupplayer();
void gameover(PlayerClass*);
void testrand();
void teststoryopen();
void gameover(PlayerClass*);
void testplayersetup();
