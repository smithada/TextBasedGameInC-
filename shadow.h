#include "character.h"
#ifndef SHADOW_H
#define SHADOW_H

class Shadow : public Character
{
private:
	int roll1;	//holds first roll
	int roll2;	//holds second roll
	int coinflip;	//holds value for coin flip
public:
        Shadow();	//constructor
	int attack();	//attack function
	int defend();	//defense function
	//strength function
	void setStrength(int attack_roll, int defend_roll);
	//void setAchilles();
};
#endif
