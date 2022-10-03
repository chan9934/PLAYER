#include"Character.h"
#include "Player.h"
#include "Monster.h"
#include "Render.h"
#include "Map.h"
#include <iostream>

using namespace std;

int main()
{
	Player* A = new Player;
	Monster* B = new Monster;
	while (true)
	{
		int Key = A->Input();
		A->Move(Key);
		B->RandomMove();
		Render(*A, *B);
		if (A->IsDead(*A, *B))
		{
			delete A;
			A = nullptr;
			break;
		}

		else if (A->Clear(*A))
		{
			delete A;
			A = nullptr;
			break;
		}
		
		
	}
	delete B;
	B = nullptr;

	return 0;
}