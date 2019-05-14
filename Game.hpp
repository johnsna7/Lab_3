/**************************************************************
 * Class Header Name: Game.hpp
 * Author: Nathan Johnson
 * Date: 04.20.2019
 * Description: Contains logic & implementation for
 * War Game, played with two players who select between 
 * regular and loaded dice, and choose the number of
 * sides for the dice. They also input the number of rounds
 * to be played, and then the game shows the results of
 * each round along with the overall winner and player scores.
 * *************************************************************/

#ifndef GAME_HPP
#define GAME_HPP

#include "Die.hpp"

class Game
{
	private:
		int roundsTotal;   // # rounds should be between 1-1000
		int roundCurrent;   // Tracks current round in game
		int menuChoice;   // Stores user's menu selection
		int dieType_p1;   // 1 = normal die, 2 = loaded die
		int dieType_p2;   // 1 = normal die, 2 = loaded die
		int dieSides_p1;   // # sides of die, b/t 4-120 sides
		int dieSides_p2;   // # sides of die, b/t 4-120 sides
		int score_p1;   // Tallies Player 1 score
		int score_p2;   // Tallies PLayer 2 score

	public:
		Game();   // Default constructor, init var
		void play();   // Contains game logic & implementation
};

#endif
