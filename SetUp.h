#pragma once
#ifndef SetUp
#define SetUp
#include <iostream>
#include <vector>
#include <stack>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#define WIDTH 20
#define HIGH 20

using namespace std;

bool printSpace;
int score = 0;

enum class SnakeDirection
{
	stop, up, down, left, right
};

void ClearScreen()
{
	COORD cursorPosition;
	cursorPosition.X = 0;
	cursorPosition.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}


#endif // !SetUp
