#pragma once
#include "../main/global.h"

#include "../classes/piece.h"

class board
{
public:
	void draw();
	void writePiece(piece& p);
	void clearLine(int rowIndex);

private:
	cell grid[10][40]; // extra 20 rows as buffer zone
};

