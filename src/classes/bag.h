#pragma once
#include "../main/global.h"

#include "../classes/piece.h"

class bag
{
public:
	bag();
	~bag();

	void generate();

private:
	std::vector<piece> contents;
};

