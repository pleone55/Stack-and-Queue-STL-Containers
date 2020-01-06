/******************************************************************************************
 * Program Name: queue.cpp
 * Author: Paul Leone
 * Date: 8/8/2019
 * Description: Implementation file of the buffer simulation. Adds or removes integers 
 * 		based on percentage.
 ******************************************************************************************/

#include "queue.hpp"
#include "validate.hpp"
#include <iostream>
#include <cstdlib>
#include <queue>
#include <string>
#include <iomanip>
#include <sstream>

using std::cout;
using std::queue;
using std::string;
using std::showpoint;
using std::fixed;
using std::setprecision;

/*****************************************************************************
 * Constructor that intializes the member variables
 * ***************************************************************************/

Queue::Queue()
{
	round = 0;
	N = 0;
	append = 0;
	remove = 0;
	averageLen = 0.0;
}

/*****************************************************************************
 * Destructor
 * ***************************************************************************/

Queue::~Queue()
{

}

/*****************************************************************************
 * Getter functions that return the values of the member variables
 * ***************************************************************************/

int Queue::getRounds()
{
	return round;
}

int Queue::getN()
{
	return N;
}

/*****************************************************************************
 * This is the function that sets the number of rounds the program will run
 * ***************************************************************************/

void Queue::setRounds()
{
	cout << "Enter the number of rounds you would like to simulate (Max 15): ";
	validate(round);
}

/*********************************************************************************
 * Function generates a random number between 1 and 100
 * *******************************************************************************/

void Queue::setN()
{
	N = (rand() % 1000 + 1);
	cout << "The number generated for N is: " << N << "\n";
}

/***********************************************************************************
 * Function generates a random number between 1 and 100 and adds it to the queue
 * *********************************************************************************/

void Queue::Append()
{
	int percent;

	//Prompt user to enter a percentage of appending N
	cout << "Percentage chance of appending N: ";
	//validate user input
	validatePercent(percent);

	//generate random number
	append = (rand() % 100 + 1);

	//if the outcome is less than or equal to the user percentage
	//append the number N into the queue
	if(append <= percent){
		buffer.push(getN());
	}
}

/***********************************************************************************
 * Function generate random number between 1 and 100. Depending on number and
 * user specified percentage, number may be removed from queue.
 * *********************************************************************************/

void Queue::Remove()
{
	int percent2;

	//prompt user to enter a percentage chance of removing N
	cout << "Percentage chance of removing N: ";
	//validate user input
	validatePercent(percent2);

	//generate random number
	remove = (rand() % 100 + 1);

	//if the outcome is less than or equal to the user percentage
	//remove a number from the front of the queue
	if(remove <= percent2){
		buffer.pop();
	}
}

/************************************************************************************
 * Function calcualtes the average length of the buffer
 * **********************************************************************************/

void Queue::Average(int length)
{
	//if there is only one integer in the buffer
	if(buffer.size() == 1){
		averageLen = (averageLen * (length - 1.0) + 1.0) / length;
	}
	else{
		averageLen = (averageLen * (length - 1.0) + buffer.size()) / length;
	}
}

/************************************************************************************
 * Function prints the buffer
 * **********************************************************************************/

void Queue::print()
{
	//if the buffer is empty
	if(buffer.empty()){
		cout << "Buffer is empty\n";
	}
	else{
		if(buffer.empty()){
			cout << "Buffer is empty\n";
		}
		else{
			cout << "Current contents of the buffer: ";
			int printSize = buffer.size();

			//Print contents of buffer
			//Reference stackoverflow.com/questions/22280318/how-do-i-print-a-queue
			for(int i = 0; i < printSize; i++){
				cout << buffer.front() << " ";
				temp.push(buffer.front());
				buffer.pop();
				buffer.push(temp.back());
			}

			cout << "\n";

			//print buffer size
			cout << "Buffer size: " << printSize << "\n";
			cout << "\n";

			//print average length of buffer
			cout << fixed << showpoint << setprecision(2);
			cout << "Average length: " << averageLen << "\n";
			cout << "\n";
		}
	}
}
