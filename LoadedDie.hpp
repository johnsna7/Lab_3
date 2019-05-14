/**********************************************************
 * Class Header Name: LoadedDie.hpp
 * Author: Nathan Johnson
 * Date: 04.20.2019
 * Description: Creates a loaded die that returns a 
 * random number, with a higher chance for a large #
 * ********************************************************/

#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP

#include "Die.hpp"

// Class: Loaded Die
// What it does: Rolls a die to return a random int result
// in the range of the sides of the die. Will not roll lower
// than half # of sides. Inherited from Die class.
// Parameters: int input for number of sides of the die.
class LoadedDie : public Die
{
	public:
		LoadedDie();   // Creates a loaded 6-sided die
		LoadedDie( int nIn );   // Creates loaded die w/ nIn # of sides
		int roll();   // Returns rand # N/2-N
};
#endif
