#pragma once
#include <queue>
#include "../main/global.h"

#include "../classes/piece.h"

class pieceQueue
{
public:
	piece& getTop();
private:
	std::queue<piece> pieceQueue;
};

