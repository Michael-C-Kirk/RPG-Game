#include "RPGMain.h"

int main(){

	int move = -1;
	Player player;
	Level level;

	setupGame(player);
	
	while(!isGameOver()){
		if(monsterEncounter()){
			battle();
		}
		else{
			itemDrop();
		}

		move = getMove();
		makeMove(move);
	}


	return 0;
}


//player
//monster
//level
//inventor
