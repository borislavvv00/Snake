#pragma once
#ifndef SnakeMovement
#define SnakeMovement
#include "ClassSnake.h"
#include "SetUp.h"

void Snake::FollowingTailPeaces()
{
	if (tailPeaces != 0)
	{
		tailY[0] = previousHeadY;
		tailX[0] = previousHeadX;
		if (tailPeaces > 1)
		{
			for (int i = 1; i < tailPeaces; i++)
			{
				tailY[i] = previousTailY[i];
				tailX[i] = previousTailX[i];
			}
		}
	}
}

void Snake::DescribeSnakeDirection()
{
	switch (snakeMove)
	{
	case SnakeDirection::stop:
		break;
	case SnakeDirection::up:
		headY--;
		FollowingTailPeaces();
		break;
	case SnakeDirection::down:
		headY++;
		FollowingTailPeaces();
		break;
	case SnakeDirection::left:
		headX--;
		FollowingTailPeaces();
		break;
	case SnakeDirection::right:
		headX++;
		FollowingTailPeaces();
		break;
	}

}

void Snake::GetUserCommands()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'w':
			snakeMove = SnakeDirection::up;
			break;
		case 's':
			snakeMove = SnakeDirection::down;
			break;
		case 'a':
			snakeMove = SnakeDirection::left;
			break;
		case 'd':
			snakeMove = SnakeDirection::right;
			break;
		}
	}
}

#endif // !SnakeMovement
