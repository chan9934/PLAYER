#include "Render.h"
#include "Map.h"
#include "Player.h"
#include "Monster.h"
#include <iostream>
using namespace std;

void Render(Player A, Monster B)
{
	system("cls");
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (j == A.Xplayer()&& i ==A.Yplayer())
			{
				cout << 'P' << ' ';
			}

			else if (j ==B.XMonster()&& i == B.YMonster())
			{
				cout << 'M' << ' ';
			}
			else
			{
				cout << Map[j][i] << ' ';
			}
		}
		cout << endl;
	}
	

}
