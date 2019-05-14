/*************************************************
 * Program Name: warMain.cpp
 * Author: Nathan Johnson
 * Date: 04.20.2019
 * Description: Plays a war game between 2 people
 * ***********************************************/

#include "Die.hpp"
#include "LoadedDie.hpp"
#include "getInt.hpp"
#include "Game.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	// Seed random generator
	unsigned seed = time(0);
	srand(seed);

	// Play war game
	Game g1 = Game();
	g1.play();

	return 0;
}
