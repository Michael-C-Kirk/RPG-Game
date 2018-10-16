RPGGame.out: main.o mechanics.o player.o
	g++ -std=c++14 main.o mechanics.o player.o -o RPGGame.out

main.o: RPGMain.cpp RPGMain.h player.h
	g++ -Wall -Werror -std=c++14 -c RPGMain.cpp -o main.o

mechanics.o: mechanics.cpp RPGMain.h player.h
	g++ -Wall -Werror -std=c++14 -c mechanics.cpp -o mechanics.o

player.o: player.cpp player.h
	g++ -Wall -Werror -std=c++14 -c player.cpp -o player.o

clean:
	rm -fr *.o *.out