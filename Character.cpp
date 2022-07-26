#include "Character.h"
#include <conio.h>
#include "Map.h"

Character::Character()
{
}
Character::~Character()
{
}
int Character::Input()
{
	int KeyNote = _getch();
	return KeyNote;
}
void Character::Move(int A)
{
	if (A == 'W')
	{
		--Y;
		if (Wall(X, Y))
		{
			++Y;
		}
	}
	else if (A == 'S')
	{
		++Y;
		if (Wall(X, Y))
		{
			--Y;
		}
	}
	else if (A == 'A')
	{
		--X;
		if (Wall(X, Y))
		{
			++X;
		}
	}
	else if (A == 'D')
	{
		++X;
		if (Wall(X, Y))
		{
			--X;
		}
	}
}

bool Character::Wall(int LaterX, int LaterY)
{
	if ('*' == Map[LaterY][LaterX])
	{
		return true;
	}
	return false;
	
}
