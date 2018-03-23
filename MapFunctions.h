#pragma once
#ifndef MapFunctions
#define MapFunctions
#include "SetUp.h"
#include "ClassMap.h"
#include "SnakeMovement.h"
#include "SnakeFunctions.h"
#include "FoodFunctions.h"

void Map::BuildingMap()
{
	for (int i = 0; i < WIDTH; i++)
	{
		cout << wallSign;
	}
	cout << endl;
	for (int j = 0; j < HIGH; j++)
	{
		for (int i = 0; i < WIDTH; i++)
		{
			printSpace = true;
			aSnake.DrawingHead(i, j);
			aSnake.DrawingTail(i, j);
			aFood.DrawingFood(i, j);
			if (i == 0 || i == WIDTH - 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				cout << wallSign;
			}
			else if (printSpace == true)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = 0; i < WIDTH; i++)
	{
		cout << wallSign;
	}
	cout << endl;
	cout << "score = " << score << endl;
}

#endif // !MapFunctions
