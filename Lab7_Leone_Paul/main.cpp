/*************************************************************************************************
 * Program Name: main.cpp
 * Author: Paul Leone
 * Date: 8/8/2019
 * Description: This is the main file that implements the Stack and Queue STL Containers
 * ***********************************************************************************************/

#include "queue.hpp"
#include "stack.hpp"
#include "validate.hpp"
#include "menu.hpp"

#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

int main()
{
	//generate random seed
	srand(time(0));

	int choice;

	//display the menu calling the menu function
	displayMenu();
	menuValidate(choice);

	switch(choice)
	{
		case 1:
		{
			//create buffer object
			Queue buff;
			//set the number of rounds
			buff.setRounds();
			//return the number of rounds
			buff.getRounds();
			//use loop to call functions according to the number of rounds
			for(int i = 0; i < buff.getRounds(); i++){
				cout << "\n--Round " << i + 1 << "--\n\n";
				//Call functions to generate random numbers, retrieve user percentages
				//and remove or append integers
				buff.setN();
				buff.Append();
				buff.Remove();
				buff.Average(i + 1);
				buff.print();
			}
			break;
		}
		case 2:
		{
			//create Palindrome object
			Palindrome reversal;
			//call function to ask user for string and return its palindrome
			reversal.printPalindrome();
			break;
		}
		case 3:
		{
			cout << "Program Quit\n";
			return 0;
		}
	}

	return 0;
}
