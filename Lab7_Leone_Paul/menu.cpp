/**********************************************************************************************
 * Program Name: menu.cpp
 * Author: Paul Leone
 * Date: 8/8/2019
 * Description: Implementation file to display the menu options for the user
 * ********************************************************************************************/

#include "menu.hpp"
#include <iostream>

using std::cout;

void displayMenu()
{
	cout << "--Stack and Queue STL Containers--\n\n";
	cout << "1. Queue Buffer Simulation\n";
	cout << "2. Create a Palindrome (Stack)\n";
	cout << "3. Quit\n\n";
	cout << "Enter your choice: ";
}
