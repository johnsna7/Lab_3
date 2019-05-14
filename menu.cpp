/*************************************************
 * Function Name: menu.cpp
 * Author: Nathan Johnson
 * Date: 04.11.2019
 * Description: Displays menu options and returns 
 * users validated choice
 * ***********************************************/

#include "menu.hpp"
#include "getInt.hpp"
#include <iostream>
#include <string>

// Function: menu()
// What it does: Displays a menu with various options, then returns the users choice
// Arguments: none (overloaded below)
// Returns: Validated integer for the menu option selected by user
int menu()
{
	// CUSTOMIZE OPTIONS HERE
	int numOptions = 2;   // Number of menu options
	std::string title = "War Game";   // Menu Title

	// Store menu items in array
	std::string menuOptions[numOptions];
	menuOptions[0] = "Play game";
	menuOptions[1] = "Exit game";

	// Display title & menu options
	std::cout << std::endl << "****************************************" << std::endl;
	std::cout << "Welcome to " << title << std::endl << std::endl;
	std::cout << "Enter a number to make a selection." << std::endl << std::endl;
	
	// Loop to display menu options
	for ( int i = 0; i < numOptions; i++ )
	{
		std::cout << (i+1) << ". " << menuOptions[i] << std::endl;
	}

	std::cout << "****************************************" << std::endl << std::endl;

	// Get menu choice
	int choice = 0;
	choice = getInt(1, numOptions);

	return choice;
}

