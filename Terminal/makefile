
main: main.o game.o
		g++ -o main main.cpp game.o -Wall

game.o: game.cpp
		g++ -c game.cpp -Wall -g

main.o: main.cpp
		g++ -c main.cpp -Wall -g

clean :
	rm -f *.o 	

