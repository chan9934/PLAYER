#pragma once
#include <conio.h>
class Character
{

protected:
	int X;
	int Y;
public:
	Character();
	~Character();

public:
	int Input();
	void Move(int A);

protected:
	bool Wall(int LaterX, int LaterY);

	
};


