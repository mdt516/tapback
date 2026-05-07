#pragma once
#include <vector>

#include "../main/global.h"
#include "../classes/piece.h"
#include "../classes/pieceQueue.h"

class board
{
public:
	void loadNextPiece(pieceQueue& q);
	void draw();
	void writePiece(piece& p);
	void clearLine(int rowIndex);

private:
	std::vector<std::vector<cell>> grid;
};

