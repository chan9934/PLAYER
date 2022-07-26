#include"Character.h"
#include "Player.h"
#include "Monster.h"
#include "Render.h"
#include "Map.h"
#include <iostream>

using namespace std;

int main()
{
	Player A;
	Monster B;
	while (true)
	{
		int Key = A.Input();
		A.Move(Key);
		B.RandomMove();
		Render(A, B);
		
		
	}

	return 0;
}