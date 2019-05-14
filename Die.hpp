/**********************************************************
 * Class Header Name: Die.hpp
 * Author: Nathan Johnson
 * Date: 04.20.2019
 * Description: Creates a die of size 4-120
 * ********************************************************/

#ifndef DIE_HPP
#define DIE_HPP

// Class: Die
// What it does: Rolls a die to return a random int result
// in the range of the sides of the die.
// Parameters: int input for number of sides of the die.
class Die
{
	protected:
		int N;   // # of sides of the die
	public:
		Die();   // Creates a 6-sided die
		Die( int nIn );   // Creates die w/ nIn # of sides
		int roll();   // Returns random  # between 1-N
		int getSides();   // Returns # of sides of die
};

#endif
