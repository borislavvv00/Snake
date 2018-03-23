#pragma once
#ifndef ClassMap
#define ClassMap
#include "SetUp.h"
#include "ClassSnake.h"
#include "ClassFood.h"

class Map
{
private:
	char wallSign;
public:
	Map()
	{
		wallSign = '#';
	}
	void BuildingMap();
};

#endif // !ClassMap
