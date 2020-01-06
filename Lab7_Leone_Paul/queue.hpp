/*************************************************************************************************
 * Program Name: queue.hpp
 * Author: Paul Leone
 * Date: 8/8/2019
 * Description: This is the header file for the class Buffer, which contains a STL Queue 
 * 		container that simulates a buffer and displays the contents
 *************************************************************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <queue>
#include <string>

using std::queue;
using std::string;

class Queue
{
	private:
		queue<int> buffer;
		queue<int> temp;
		int round;
		int N;
		int append;
		int remove;
		double averageLen;
	public:
		Queue();
		~Queue();
		//getter functions
		int getRounds();
		int getN();
		//setter function
		void setRounds();
		void setN();			//generate a random number
		void Append();			//append the number N
		void Remove();			//remove a number
		void Average(int);		//average length of buffer
		void print();
};
#endif
