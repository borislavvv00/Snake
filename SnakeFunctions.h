#pragma once
#ifndef SnakeFunctions
#define SnakeFunctions
#include "ClassSnake.h"
#include "ClassFood.h"
#include "SetUp.h"

void Snake::BuildingTail()
{
	previousHeadX = headX;
	previousHeadY = headY;
	if (tailPeaces > 1)
	{
		for (int i = 0; i < tailPeaces - 1; i++)
		{
			previousTailX[i + 1] = tailX[i];
			previousTailY[i + 1] = tailY[i];
		}
	}
}

void Snake::SnakeEatingSuperFood()
{
	if (headX == aFood.superFoodX && headY == aFood.superFoodY)
	{
		score += 10;
		aFood.superFoodX = rand() % (HIGH - 2) + 1;
		aFood.superFoodY = rand() % (WIDTH - 2) + 1;
		aFood.timeBeforeSupperFood = 5;
	}
}

void Snake::SnakeEatingNormalFood()
{
	if (headX == aFood.normalFoodX && headY == aFood.normalFoodY)
	{
		score++;
		aFood.normalFoodX = rand() % (HIGH-2) + 1;
		aFood.normalFoodY = rand() % (WIDTH-2) + 1;
		tailPeaces++;
		aFood.timeBeforeSupperFood--;
		tailX.push_back(1);
		tailY.push_back(1);
		previousTailX.push_back(0);
		previousTailY.push_back(0);
		if (tailPeaces > 1)
		{
			previousTailX.push_back(tailX[0]);
			previousTailY.push_back(tailY[0]);
		}
	}
}

void Snake::DrawingTail(int i, int j) //output of tail sign
{
	for (int k = 0; k < tailPeaces; k++)
	{
		if (i == tailX[k] && j == tailY[k])
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << tailSign;
			printSpace = false;
		}
	}
}

void Snake::DrawingHead(int i, int j)
{
	if (i == headX && j == headY)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << headSign;
		printSpace = false;
	}
}

void Snake::SnakeTouchingTheWall()
{
	if (headX == 0)
	{
		headX = HIGH - 2;
	}
	else if (headX == HIGH - 1)
	{
		headX = 1;
	}
	else if (headY == 0)
	{
		headY = WIDTH - 2;
	}
	else if (headY == WIDTH - 1)
	{
		headY = 1;
	}
}

void Snake::SnakeEatPartOfTheTail()
{
	for (int i = 1; i < tailX.size(); i++)
	{
		if (headX == tailX[i] && headY == tailY[i])
		{
			gameOver = true;
		}
	}
}

#endif // !SnakeFunctions
