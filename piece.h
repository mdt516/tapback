#pragma once
#include <raylib.h>

class piece
{
public:
	void rotate();
	void update();

private:
	enum type
	{
		O,
		J,
		L,
		S,
		Z,
		T,
		I
	};

	enum rotation
	{
		up,
		right,
		down,
		left
	};

	int x;
	int y;
};

