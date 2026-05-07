#include "bag.h"
#include <algorithm>
#include <random>
#include <vector>

bag::bag()
{
	contents.resize(7);
}

bag::~bag()
{}

void bag::generate()
{
	std::vector<int> nums = {0, 1, 2, 3, 4, 5, 6};
	std::shuffle(nums.begin(), nums.end(), std::default_random_engine(0));

	for (int i = 0; i < nums.size(); i++)
	{
		pieceType t = (pieceType) nums[i];
		contents[i].setType(t);
		contents[i].initializeShape(t);
	}
}
