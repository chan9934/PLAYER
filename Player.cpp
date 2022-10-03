#include "Player.h"
#include "Monster.h"
#include "Map.h"
#include <iostream>

using namespace std;

Player::Player()
{
	X = 1;
	Y = 1;
}

Player::~Player()
{
	
}

int Player::Xplayer()
{
	return X;
}
int Player::Yplayer()
{
	return Y;
}

bool Player::IsDead(Player A, Monster B)
{
	if (A.Xplayer() == B.XMonster() && A.Yplayer() == B.YMonster())
	{
		cout << "Dead" << endl;
		return true;
	}
	return false;
}

bool Player::Clear(Player A)
{
	if (A.Xplayer() == 8 && A.Yplayer() == 8)
	{
		cout << "Clear" << endl;
		return true;
	}
	return false;
}
