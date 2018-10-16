#ifndef PLAYER_H
	#define PLAYER_H

	#include <iostream>
	using namespace std;

	class Player
	{
	public:
		// variables
		int health = 100;
		int maxHealth = 100;
		int armor = 0;
		int maxArmor = 50;
		string name = "noname";
		int age = 0;
		int sex = 0;
		int xp = 0;
		int level = 0;
		int cash = 0;

		//functions
		Player(); //default constructor
		void print_info();
		bool isPlayerDead();
		void damagePlayer(int amount);
		void takeCoins(int amount);
		void killPlayer();
	};

#endif