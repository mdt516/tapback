#include "../classes/piece.h"


piece::piece() : x(0), y(0), orientation(up)
{
	int randType = GetRandomValue(1, 7);
	this->type = pieceType(randType);
	initializeShape(type);
}

piece::~piece()
{}



void piece::initializeShape(pieceType t)
{
	switch (t)
	{
		case O:
			this->pieceShape = 
			{
				{0, 1, 1, 0},
				{0, 1, 1, 0},
				{0, 0, 0, 0}
			};
			break;

		case J:
			this->pieceShape =
			{
				{1, 0, 0},
				{1, 1, 1},
				{0, 0, 0}
			};
			break;

		case L:
			this->pieceShape =
			{
				{0, 0, 1},
				{1, 1, 1},
				{0, 0, 0}
			};
			break;

		case S:
			this->pieceShape =
			{
				{0, 1, 1},
				{1, 1, 0},
				{0, 0, 0}
			};
			break;

		case Z:
			this->pieceShape =
			{
				{1, 1, 0},
				{0, 1, 1},
				{0, 0, 0}
			};
			break;

		case T:
			this->pieceShape =
			{
				{0, 1, 0},
				{1, 1, 1},
				{0, 0, 0}
			};
			break;

		case I:
			this->pieceShape =
			{
				{0, 0, 0, 0},
				{1, 1, 1, 1},
				{0, 0, 0, 0},
				{0, 0, 0, 0}
			};
			break;
	}
}
