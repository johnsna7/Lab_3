/******************************************
 * Function Name: getInt.cpp
 * Author: Nathan Johnson
 * Date: 04.07.2019
 * Description: Returns validated int input
 * ****************************************/

#include "getInt.hpp"
#include <iostream>
#include <sstream>

// Function: getInt()
// What it does: Prompts for user input until it receives an integer,
// then returns that integer.
// Arguments: none (overloaded below)
// Returns: Validated integer
int getInt()
{
	int input = 0;
	bool validInput = false;

	// Prompt for user input
	while ( !validInput )
	{
		std::string tempIn;

		std::cout << "Please enter an integer." << std::endl;
		std::cin >> tempIn;

		bool error = false;

		for ( unsigned i = 0; i < tempIn.length(); i++ )   // Parse through every char
		{
			char cTemp = tempIn[i];

			if ( cTemp == '-' && i == 0 )   // Negative #
			{
				error = false;
			}

			else if ( cTemp < '0' || cTemp > '9' )   // non-int char
			{
				error = true;
			}
		}

		if ( !error )   // int input
		{
			std::stringstream ss(tempIn);
			ss >> input;
			validInput = true;
		}

		else   // Input not an int
		{
			std::cout << "\nInvalid input, please try again." << std::endl;
			std::cin.clear();
			std::cin.ignore(96, '\n');
		}
	}

	return input;
}

// Function: getInt(int, int)
// What it does: Prompts for user input until it receives an integer,
// within a certain range, then returns that integer.
// Arguments: two ints, min & max values respectively, for the acceptable range allowed
// Returns: Validated integer between (or including) the range passed in parameter
int getInt( int minVal, int maxVal )
{
	int input = 0;
	bool validInput = false;

	// Prompt for user input
	while ( !validInput )
	{
		std::string tempIn;

		std::cout << "Please enter an integer between " << minVal;
		std::cout << " & " << maxVal << "." << std::endl;
		std::cin >> tempIn;

		bool error = false;

		for ( unsigned i = 0; i < tempIn.length(); i++ )   // Checks every char in input
		{
			char cTemp = tempIn[i];

			if ( cTemp == '-' && i == 0 )   // Check for negative #
			{
				error = false;
			}

			else if ( cTemp < '0' || cTemp > '9' )   // non-int input
			{
				error = true;
			}
		}

		if ( !error )
		{
			int rangeCheck = 0;
			std::stringstream ss(tempIn);
			ss >> rangeCheck;
			
			if ( rangeCheck >= minVal && rangeCheck <= maxVal ) // Check if integer is in range
			{
				input = rangeCheck;
				validInput = true;
			}

			else   // Int is out of range
			{
				std::cout << "\nInput is out of range, please try again." << std::endl;
			}
		}

		else   // Input is not an int
		{
			std::cout << "\nInput is not an int, please try again." << std::endl;
		}
	}

	return input;
}
