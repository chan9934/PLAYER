#include "Monster.h"
#include <iostream>

using namespace std;

Monster::~Monster()
{
}
Monster::Monster()
{
	X = 5;
	Y = 5;
}

void Monster::RandomMove()
{
	srand(time(nullptr));
	int Randome = rand() % 4 + 1;
	if (Randome == 1)
	{
		--Y;
		if (Wall(X, Y))
		{
			++Y;
		}
	}
	else if (Randome == 2)
	{
		++Y;
		if (Wall(X, Y))
		{
			--Y;
		}
	}
	else if (Randome == 3)
	{
		--X;
		if (Wall(X, Y))
		{
			++X;
		}
	}
	else if (Randome == 4)
	{
		++X;
		if (Wall(X, Y))
		{
			--X;
		}
	}
}
int Monster::XMonster()
{
	return X;
}
int Monster::YMonster()
{
	return Y;
}
