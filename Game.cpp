/**************************************************************
 * Class Name: Game.cpp
 * Author: Nathan Johnson
 * Date: 04.20.2019
 * Description: Contains logic & implementation for
 * War Game, played with two players who select between 
 * regular and loaded dice, and choose the number of
 * sides for the dice. They also input the number of rounds
 * to be played, and then the game shows the results of
 * each round along with the overall winner and player scores.
 * *************************************************************/

#include "Game.hpp"
#include "getInt.hpp"
#include "menu.hpp"
#include "Die.hpp"
#include "LoadedDie.hpp"
#include <iostream>


Game::Game()   // Default constructor, initializes variables
{
	roundsTotal = 0;
	roundCurrent = 0;
	menuChoice = 0;
	dieType_p1 = 0;
	dieType_p2 = 0;
	dieSides_p1 = 0;
	dieSides_p2 = 0;
	score_p1 = 0;
	score_p2 = 0;
}

// Contains game logic & implementation
// No parameters or return values
void Game::play()   
{

	while ( menuChoice != 2 )   // Runs game until user exits
	{
		menuChoice = menu();   // Displays menu & returns user's choice
		
		if ( menuChoice == 1 )   // Play game
		{
			// Clear variables from previous game
			roundsTotal = 0;
			roundCurrent = 0;
			menuChoice = 0;
			dieType_p1 = 0;
			dieType_p2 = 0;
			dieSides_p1 = 0;
			dieSides_p2 = 0;
			score_p1 = 0;
			score_p2 = 0;

			// User inputs validated parameters
			// Input rounds played
			std::cout << "Please enter number of rounds to play:" << std::endl;
			roundsTotal = getInt(1,1000);

			// Input p1 die type
			std::cout << "Please enter Player 1's die type.\n";
			std::cout << "1 = Normal Die, 2 = Loaded Die" << std::endl;
			dieType_p1 = getInt(1,2);

			// Input p1 die # sides
			std::cout << "Please enter the number of sides for Player 1's die.\n";
			dieSides_p1 = getInt(4,120);

			// Input p2 die type
			std::cout << "Please enter Player 2's die type.\n";
			std::cout << "1 = Normal Die, 2 = Loaded Die" << std::endl;
			dieType_p2 = getInt(1,2);

			// Input p2 die # sides
			std::cout << "Please enter the number of sides for Player 2's die.\n";
			dieSides_p2 = getInt(4,120);

			// Start Game
			// Create dice
			Die d1(dieSides_p1);   // p1 standard die
			Die d2(dieSides_p2);   // p2 standard die
			LoadedDie d3(dieSides_p1);   // p1 loaded die
			LoadedDie d4(dieSides_p2);   // p2 loaded die


			// Display results for each round
			for ( int i = 0; i < roundsTotal; i++ )
			{

				roundCurrent++;  // Advance round counter

				int roll_p1, roll_p2, winner;   // Tracks player's roll & winner
				roll_p1 = roll_p2 = winner = 0;

				// Roll p1 die
				if ( dieType_p1 == 1)
				{
					roll_p1 = d1.roll();
				}

				else
				{
					roll_p1 = d3.roll();
				}

				// Roll p2 die
				if ( dieType_p2 == 1)
				{
					roll_p2 = d2.roll();
				}

				else
				{
					roll_p2 = d4.roll();
				}

				if ( roll_p1 > roll_p2 )   // p1 wins
				{
					score_p1++;
					winner = 1;
				}

				else if ( roll_p2 > roll_p1 )   // p2 wins
				{
					score_p2++;
					winner = 2;
				}

				else if ( roll_p1 == roll_p2 )   // Tie
				{
					winner = 3;
				}

				std::cout << "Results for Round " << roundCurrent << std::endl;
				
				// Displays P1 results
				std::cout << "Player 1: ";
				if ( dieType_p1 == 1 )
				{
					std::cout << "Standard ";
				}
				else
				{
					std::cout << "Loaded ";
				}
				std::cout << "die with " << dieSides_p1 << " sides." << std::endl;
				std::cout << "Player 1 rolled a " << roll_p1 << std::endl;
				
				// Displays P2 results
				std::cout << "Player 2: ";
				if ( dieType_p2 == 1 )
				{
					std::cout << "Standard ";
				}
				else
				{
					std::cout << "Loaded ";
				}
				std::cout << "die with " << dieSides_p2 << " sides." << std::endl;
				std::cout << "Player 2 rolled a " << roll_p2 << std::endl;

				// Display round winner
				if ( winner == 1 )
				{
					std::cout << "Player 1 wins!" << std::endl;
				}
				else if ( winner == 2 )
				{
					std::cout << "Player 2 wins!" << std::endl;
				}
				else
				{
					std::cout << "This round is a draw!" << std::endl;
				}
				std::cout << "Player 1 score: " << score_p1 << std::endl;
				std::cout << "Player 2 score: " << score_p2 << std::endl << std::endl;
			}

			// Display overall results
			if ( score_p1 > score_p2 )   // p1 wins
			{
				std::cout << "Player 1 wins the War!" << std::endl;
			}
			else if ( score_p2 > score_p1 )   // p2 wins
			{
				std::cout << "Player 2 wins the War!" << std::endl;
			}
			else   // Tie
			{
				std::cout << "The War is a draw!" << std::endl;
			}
			std::cout << "Player 1 final score: " << score_p1 << std::endl;
			std::cout << "Player 2 final score: " << score_p2 << std::endl;
		}
	}
}

