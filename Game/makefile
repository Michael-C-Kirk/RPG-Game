RPGGame.out: main.o
	g++ -std=c++14 main.o -o RPGGame.out

main.o: RPGMain.cpp RPGMain.h player.h
	g++ -Wall -Werror -std=c++14 -c RPGMain.cpp -o main.o

clean:
	rm -fr *.o *.out