#pragma once
#ifndef ClassSnake
#define ClassSnake
#include "SetUp.h"

class Snake
{
private:
	char headSign, tailSign;
	int previousHeadX, previousHeadY;
	int tailPeaces;
	vector<int> tailX;
	vector<int> tailY;
	vector<int> previousTailX;
	vector<int> previousTailY;
	SnakeDirection snakeMove;
public:
	int headX, headY;
	Snake()
	{
		headSign = 'O';
		tailSign = 'o';
		headX = HIGH / 2;
		headY = WIDTH / 2;
		tailPeaces = 0;
	}
	void DrawingHead(int, int);
	void DrawingTail(int, int);
	void SnakeEatingNormalFood();
	void SnakeEatingSuperFood();
	void SnakeTouchingTheWall();
	void DescribeSnakeDirection();
	void GetUserCommands();
	void BuildingTail();
	void FollowingTailPeaces();
};

Snake aSnake;

#endif // !ClassSnake
