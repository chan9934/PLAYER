#pragma once
#include <iostream>
#include "Character.h"

class Monster : public Character
{
public:
	Monster();
	
	~Monster();

public:
	void RandomMove();

	int XMonster();

	int YMonster();
};

