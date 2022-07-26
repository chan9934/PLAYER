#include "Player.h"
#include "Monster.h"
#include "Map.h"

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
		return true;
	}
	return false;
}
