/*********************************************************************************************
 * Program Name: validate.cpp
 * Author: Paul Leone
 * Date: 8/8/2019
 * Description: Implementation file to validate user input
 * *******************************************************************************************/

#include "validate.hpp"
#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::stringstream;

void validate(int &validate)
{
	bool input = false;

	while(!input){
		cin >> validate;

		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer.\n";
		}
		else if(validate < 0 || validate > 15){
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer between 1 and 15.\n";
		}
		else
			input = true;
	}
}

void validatePercent(int &validate)
{
	bool input = false;

	while(!input){
		cin >> validate;

		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer value.\n";
		}
		else if(validate < 0 || validate > 100){
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer no less than 0 and no greater than 100.\n";
		}
		else
			input =true;
	}
}

void menuValidate(int &validate)
{
	bool input = false;

	while(!input){
		cin >> validate;

		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer value.\n";
		}
		else if(validate < 0 || validate > 3){
			cin.clear();
			cin.ignore();
			cout << "Please enter an integer from the given options.\n";
		}
		else{
			input = true;
		}
	}
}
