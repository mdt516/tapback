#pragma once
/* This file contains global enums and constants */

#include <raylib.h>


const int SCREEN_WIDTH = 1920;
const int SCREEN_HEIGHT = 1080;


enum rotationDirection
{
	cw,
	ccw
};

struct cell
{
	Color c;
	int x;
	int y;
};