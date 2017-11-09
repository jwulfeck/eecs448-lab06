#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o test.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o test.o -o prog


main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp

test.o: test.cpp test.h
	g++ -g -Wall -std=c++11 -c test.cpp



#Add needed Test.o recipe and compiler command


#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog
