#ifndef RPGMAIN_H
	#define RPGMAIN_H
	#include <iostream>
	#include <string>
	#include "player.h"

	void setupGame(Player& player);
	void startGame(Player& player);
	bool isGameOver(Player& player);
	void introduction(Player& player);
	void playRPS(Player& player);
	// bool monsterEncounter();
	// bool itemDrop();
	// void battle();
	// int getMove();
	// void makeMove(Move& move, Level& level);

#endif