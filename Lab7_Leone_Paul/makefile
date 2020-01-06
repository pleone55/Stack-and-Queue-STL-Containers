
#Program Name: makefile
#Author: Paul Leone
#Date: 8/8/2019
#Description: This is the makefile to implement and recompile the Stack and Queue STL Containers Lab

CXX = g++
CXXFLAGS = -std=c++11

OBJS = main.o menu.o validate.o queue.o stack.o

SRCS = main.cpp menu.cpp validate.cpp queue.cpp stack.cpp

HEADERS = menu.hpp validate.hpp queue.hpp stack.hpp

stl: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o stl

clean:
	rm *.o main
