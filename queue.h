#pragma once
#include <raylib.h>
#include <queue>

#include "piece.h"

class queue
{
public:
	piece& getTop();
private:
	std::queue<piece> pieceQueue;
};

