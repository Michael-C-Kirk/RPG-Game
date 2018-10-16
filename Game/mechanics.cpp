#include "RPGMain.h"

using namespace std;

bool isGameOver(Player& player){
	//implement different ways the game can be over
	//right now its just if the player is dead

	if(player.isPlayerDead()){
		cout << "You died! Idiot!" << endl;
		return true;
	}

	//MAKE THIS RETURN FALSE LATER. JUST PUTTING RETURN TRUE FOR NOW SO THE GAME ENDS
	return false;
}