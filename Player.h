#pragma once
#include <conio.h>
#include <iostream>
#include "Map.h"
#include "Character.h"
#include "Monster.h"

using namespace std;
class Player : public Character
{



public: 
	Player();
	~Player();

public:
	int Xplayer();
	int Yplayer();
	bool IsDead(Player A, Monster B);

	

};

