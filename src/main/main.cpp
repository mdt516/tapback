#include <raylib.h>

#include "../main/global.h"
#include "../classes/board.h"
#include "../main/game.h"
#include "../classes/piece.h"
#include "../classes/pieceQueue.h"

int main()
{
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "tapback");
	board b;
	piece p;
	game g;
	pieceQueue q;

	while (!WindowShouldClose())
	{
		BeginDrawing();

		p.draw();

		ClearBackground(GRAY);

		EndDrawing();
	}
	return 0;
}