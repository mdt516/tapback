#include <iostream>
#include <raylib.h>

#include "window.h"
#include "board.h"
#include "game.h"
#include "piece.h"
#include "queue.h"

int main()
{
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "tapback");

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(BLUE);

		EndDrawing();
	}
	return 0;
}