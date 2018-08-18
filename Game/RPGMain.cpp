#include <iostream>
#include <string>
#include "player.h"

using namespace std;
void setupGame(Player& player);

int main(){

	//int move = -1;
	Player player;
	//Level level;

	setupGame(player);
	
	// while(!isGameOver()){
	// 	if(monsterEncounter()){
	// 		battle();
	// 	}
	// 	else{
	// 		itemDrop();
	// 	}

	// 	move = getMove();
	// 	makeMove(move, level);
	// }


	return 0;
}

void setupGame(Player& player){
	int answer;

	cout << "Welcome to [game name]!" << endl;
	cout << "What is your name?" << endl;

	cin >> player.name;
	cout << "Oh, so " << player.name << " is your name, huh?" << endl;

	cout << "Are you a boy, or a girl???" << endl;
	cout << "Press 1 for boy, and 2 for girl" << endl;
	cin >> answer;

	if (answer == 1){
		player.sex = 0;
		cout << "So you're a boy, huh?" << endl;
	}
	else if(answer == 2){
		player.sex = 1;
		cout << "So you're a girl, huh?" << endl;
	}
	else{
		player.sex = 2;
		cout << "So you're other, huh? Interesting..." << endl;
	}

	cout << "Finally, how old are you?" << endl;
	cin >> player.age;
	if (player.age >= 60){
		cout << "Wow, you're pretty old, seems like your bones are starting to creak..." << endl;
		cout << "[-10 max starting HP]" << endl;
	}

	cout << "So here's some info about yourself: " << endl;
	player.printInfo();
}




//player
//monster
//level
//inventor