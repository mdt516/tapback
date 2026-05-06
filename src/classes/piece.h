#pragma once

#include <vector>
#include "../main/global.h"

enum pieceType
{
	O,
	J,
	L,
	S,
	Z,
	T,
	I
};

enum pieceOrientation
{
	up,
	right,
	down,
	left
};


class piece
{
public:
	piece();
	~piece();

	// setters
	void setType(pieceType t) { this->type = t; };
	void setOrientation(pieceOrientation o) { this->orientation = o; };
	void setX(int x_value) { this->x = x_value; };
	void setY(int y_value) { this->y = y_value; };

	// getters
	pieceType getType() const { return this->type; };
	pieceOrientation getOrientation() const { return this->orientation; };
	int getX() const { return this->x; };
	int getY() const { return this->y; };

	void draw();
	void rotate(rotationDirection dir);
	void update();

private:
	std::vector<std::vector<int>> pieceShape;

	pieceType type;
	pieceOrientation orientation;

	int x;
	int y;

	void initializeShape(pieceType t);
};

