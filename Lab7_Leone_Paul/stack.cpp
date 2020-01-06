/***********************************************************************************************
 * Program Name: stack.cpp
 * Author: Paul Leone
 * Date: 8/8/2019
 * Description: Implementation file of the palindrome stack
 * **********************************************************************************************/

#include "stack.hpp"
#include <stack>
#include <string>
#include <iostream>
#include <algorithm>

using std::string;
using std::stack;
using std::reverse;
using std::cout;
using std::cin;
using std::getline;

/******************************************************************************************
 * Constructor intializes the member variables
 * ****************************************************************************************/

Palindrome::Palindrome()
{
	input = " ";
	reverse = " ";
	palindrome = " ";
	length1 = 0;
	length2 = 0;
}

/*****************************************************************************************
 * Destructor
 * ***************************************************************************************/

Palindrome::~Palindrome()
{

}

/*****************************************************************************************
 * Function prompts user to enter a string and prints out the original and its
 * palindrome
 * ***************************************************************************************/

string Palindrome::printPalindrome()
{

	//prompt user to enter a string
	cout << "Enter a word or random string: ";
	cin >> input;

	//determine the size of the string and validate input
	length1 = input.length();
	/*while(length1 == 0){
		cout << "A string needs to be entered to continue: ";
		getline(cin, input);
		length1 = input.length();
	}*/

	//add characters to palindrome stack
	for(int i = 0; i < length1; i++){
		stack1.push(input.at(i));
	}

	//reverse the string
	for(int i = length1 - 1; i >= 0; i--){
		reverse = reverse + input.at(i);
	}

	//copy to original stack
	for(int i = 0; i < length1; i++){
		stack2.push(reverse.at(i));
	}

	//double the size of the string for the palindrome
	length2 = length1 * 2;

	//create the palindrome
	for(int i = 0; i < length1; i++){
		palindrome = palindrome + stack2.top();
		stack2.pop();
	}

	for(int j = 0; j < length1; j++){
		palindrome = palindrome + stack1.top();
		stack1.pop();
	}

	//print palindrome
	cout << "Palindrome of your string: " << palindrome << "\n";
	cout << "\n";

	return palindrome;
}
