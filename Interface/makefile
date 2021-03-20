
main: main.o game.o
		g++ -o main -I/usr/include/SDL2 main.cpp -lSDL2_image -lSDL2_ttf -lSDL2 game.o -Wall

game.o: game.cpp
		g++ -c game.cpp -Wall `sdl-config --cflags --libs` -g

main.o: main.cpp
		g++ -c main.cpp -Wall `sdl-config --cflags --libs` -g

clean :
	rm -f *.o 	

