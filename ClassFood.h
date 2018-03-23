#pragma once
#ifndef ClassFood
#define ClassFood
#include "SetUp.h"

class Food
{
private:
	char normalFoodSign, superFoodSign;
public:
	int normalFoodX, normalFoodY;
	int superFoodX, superFoodY;
	int timeBeforeSupperFood;
	Food()
	{
		normalFoodSign = 'n';
		superFoodSign = 'S';
		normalFoodX = rand() % HIGH;
		normalFoodY = rand() % WIDTH;
		superFoodX = rand() % HIGH;
		superFoodY = rand() % WIDTH;
		timeBeforeSupperFood = 5;
	}
	void DrawingFood(int, int);
};

Food aFood;

#endif // !ClassFood
