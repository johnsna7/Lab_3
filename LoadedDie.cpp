/**********************************************************
 * Class Name: Die.cpp
 * Author: Nathan Johnson
 * Date: 04.20.2019
 * Description: Creates a loaded die that returns rand #
 * ********************************************************/

#include "LoadedDie.hpp"
#include <cstdlib>

LoadedDie::LoadedDie() : Die::Die()
{
	N = 6;
}

LoadedDie::LoadedDie( int nIn ) : Die::Die(nIn)
{
	N = nIn;
}

int LoadedDie::roll()   // Returns random # between N/2-N
{
	return ( (rand() % (N - N/2 + 1) + N/2) );
}
