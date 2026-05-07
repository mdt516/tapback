#pragma once
#include <queue>
#include "../main/global.h"

#include "../classes/piece.h"
#include "../classes/bag.h"

class pieceQueue
{
public:
	pieceQueue();
	~pieceQueue();

	piece& getNextPiece();
	void loadBag(bag& b);

private:
	std::queue<piece> contents;
};

