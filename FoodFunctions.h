#pragma once
#ifndef FoodFunctions
#define FoodFunctions
#include "SetUp.h"
#include "ClassFood.h"

void Food::DrawingFood(int i, int j)
{
	if (i == normalFoodX && j == normalFoodY)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cout << normalFoodSign;
		printSpace = false;
	}
	else if (timeBeforeSupperFood <= 0)
	{
		if (i == superFoodX && j == superFoodY)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << superFoodSign;
			printSpace = false;
		}
	}
}

#endif // !FoodFunctions
