#include "../classes/piece.h"


piece::piece() : x(SCREEN_HEIGHT / 2), y(SCREEN_WIDTH / 2), orientation(up)
{
	int randType = GetRandomValue(0, 6);
	this->type = pieceType(randType);
	initializeShape(type);
}

piece::piece(pieceType t) : x(SCREEN_HEIGHT / 2), y(SCREEN_WIDTH / 2), orientation(up)
{
	initializeShape(t);
}

piece::~piece()
{}



void piece::draw()
{
	// calculate dimensions
	int pieceWidth = pieceShape[0].size();
	int pieceHeight = pieceShape.size();

	// get offset, center piece
	int offsetX = x - (pieceWidth * cell::SIZE) / 2;
	int offsetY = y - (pieceHeight * cell::SIZE) / 2;

	// get pieceShape matrix and draw squares of that piece's color
	for (int i = 0; i < pieceShape.size(); i++)
	{
		for (int j = 0; j < pieceShape[i].size(); j++)
		{
			if (pieceShape[i][j] == 1)
			{
				DrawRectangle(offsetX + (j * cell::SIZE), offsetY + (i * cell::SIZE), cell::SIZE, cell::SIZE, pieceColor);
			}
			else // purely for outlining
			{
				DrawRectangle(offsetX + (j * cell::SIZE), offsetY + (i * cell::SIZE), cell::SIZE, cell::SIZE, BLACK);
			}
		}
	}

	// not sure how to center this?
}

void piece::initializeShape(pieceType t)
{
	switch (t)
	{
		case O:
			pieceShape =
			{
				{0, 1, 1, 0},
				{0, 1, 1, 0},
				{0, 0, 0, 0}
			};

			pieceColor = YELLOW;
			break;

		case J:
			pieceShape =
			{
				{1, 0, 0},
				{1, 1, 1},
				{0, 0, 0}
			};

			pieceColor = DARKBLUE;
			break;

		case L:
			pieceShape =
			{
				{0, 0, 1},
				{1, 1, 1},
				{0, 0, 0}
			};

			pieceColor = ORANGE;
			break;

		case S:
			pieceShape =
			{
				{0, 1, 1},
				{1, 1, 0},
				{0, 0, 0}
			};

			pieceColor = GREEN;
			break;

		case Z:
			pieceShape =
			{
				{1, 1, 0},
				{0, 1, 1},
				{0, 0, 0}
			};

			pieceColor = RED;
			break;

		case T:
			pieceShape =
			{
				{0, 1, 0},
				{1, 1, 1},
				{0, 0, 0}
			};

			pieceColor = PURPLE;
			break;

		case I:
			pieceShape =
			{
				{0, 0, 0, 0},
				{1, 1, 1, 1},
				{0, 0, 0, 0},
				{0, 0, 0, 0}
			};

			pieceColor = SKYBLUE;
			break;
	}
}
