#pragma once
#include <conio.h>
#include "Input.h"
class Locate
{
public:
	Locate()
	{
		X = 1;
		Y = 1;
	}
	~Locate();

private:
	int X;
	int Y;

public:
	int Input()
	{
		int KeyNote = _getch();
		return KeyNote;
	}

	void Move(int Input())
	{
		
	}


};

