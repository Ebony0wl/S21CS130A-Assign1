main: main.o sha256.o
	g++ main.o sha256.o -o main

main.o: main.cpp
	g++ -c main.cpp

sha256.o:
	g++ -c sha256.cpp
