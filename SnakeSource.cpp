#include <iostream>
#include "MapFunctions.h"

using namespace std;

int main()
{
	srand(time(0));
	Map aMap;
	while (true)
	{
		aSnake.BuildingTail();
		aSnake.DescribeSnakeDirection();
		aSnake.GetUserCommands();
		aSnake.SnakeEatingNormalFood();
		aSnake.SnakeEatingSuperFood();
		aSnake.SnakeTouchingTheWall();
		aMap.BuildingMap();
		ClearScreen();
		Sleep(100);
	}
	return 0;
}