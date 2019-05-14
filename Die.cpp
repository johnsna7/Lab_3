/**********************************************************
 * Class Name: Die.cpp
 * Author: Nathan Johnson
 * Date: 04.20.2019
 * Description: Creates a die that returns rand #
 * ********************************************************/

#include "Die.hpp"
#include <cstdlib>

// Please seed in Main before running to get random results
Die::Die()   // Creates a 6-sided die
{
	N = 6;
}

Die::Die( int nIn )   // Creates die w/ nIn # of sides
{
	N = nIn;
}

int Die::roll()   // Returns random # between 1-N
{
	return ( (rand() % N) + 1 );
}

int Die::getSides()   // Returns # of sides of die
{
	return N;
}

