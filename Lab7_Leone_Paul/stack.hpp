/*****************************************************************************************
 * Program Name: stack.hpp
 * Author: Paul Leone
 * Date: 8/8/2019
 * Description: This is the header file for the Palindrome class which contains a Stack
 * 		STL Container that creates a palindrome of the user input
 ******************************************************************************************/

#ifndef STACK_HPP
#define STACK_HPP

#include <stack>
#include <string>
#include <vector>

using std::stack;
using std::string;
using std::vector;

class Palindrome
{
	private:
		stack< char > stack1;
		stack< char > stack2;
		string input;
		string reverse;
		string palindrome;
		int length1;
		int length2;
	public:
		Palindrome();
		~Palindrome();
		string printPalindrome();
};
#endif
