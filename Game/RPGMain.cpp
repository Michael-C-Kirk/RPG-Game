#include <iostream>
#include "RPGMain.h"

using namespace std;
// void setupGame(Player& player);

int main(){

	// int move = -1;
	Player player;
	//Level level;

	setupGame(player);
	startGame(player);

	return 0;
}

void startGame(Player& player){
	//begin the game and start the game loop

		introduction(player);

		while(!isGameOver(player)){
		// if(monsterEncounter()){
		// 	battle();
		// }
		// else{
		// 	itemDrop();
		// }

		// move = getMove();
		// makeMove(move, level);
	}
}

void introduction(Player& player){
	int answer = 0;

	cout << endl << "[insert compelling narrative]" << endl;
	cout << "You see an old man along the dirt road. He seems to just be sitting in the mud. As you get closer you notice" << endl;
	cout <<	"that an old cloak is covering his face and body. It's hard to see anything in the dark anyway." << endl;
	cout << "Will you approach the old man?" << endl << "Press 1 for yes and 2 for no." << endl;

	cin >> answer;
	cout << "----------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl;

	if(answer == 1){
		cout << "You approach the old man but before you can say anything he begins coughing very loudly." << endl;
		cout << "\"Let's play Rock Paper Scissors shall we?\"" << endl;
		cout << "Press 1 to agree or 2 to disagree." << endl;

		cin >> answer;
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		cout << endl;

		if(answer == 1){
			playRPS(player);
		}
		else{
			player.killPlayer();
			cout << "  \"I see...\"" << endl;
			cout << "The old man produces a dagger and lunges towards you." << endl;
			cout << "Since you lack experience you cannot react in time, and the old man slits your throat." << endl;
			cout << "You grasp your throat in disbelief and stare at the old man. Even though he just cut your throat, " << endl;
			cout << "You were not able to see his face at all. The blood fills your mouth and nose and you fall over." << endl;
			cout << "Your nose fils with a metallic smell as you gasp for air. As you take your final breaths, the old man" << endl;
			cout << "walks away into the distance. Your vision fades." << endl << endl;
		}
	}
	else{
		cout << "You try to awkwardly walk past the old man but you trip on something just as you pass him." << endl;
		cout << "The old man helps you up without saying a word. As you spit out mud he asks you a question: " << endl;
		cout << "\"Let's play Rock Paper Scissors shall we?\"" << endl;
		cout << "Press 1 to agree or 2 to disagree." << endl;

		cin >> answer;
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		cout << endl;

		if(answer == 1){
			playRPS(player);
		}
		else{
			player.killPlayer();
			cout << "  \"I see...\"" << endl;
			cout << "The old man produces a dagger and lunges towards you." << endl;
			cout << "Since you lack experience you cannot react in time, and the old man slits your throat." << endl;
			cout << "You grasp your throat in disbelief and stare at the old man. Even though he just cut your throat, " << endl;
			cout << "you were not able to see his face at all. The blood fills your mouth and nose as you fall over." << endl;
			cout << "Your nose fils with a metallic smell as you gasp for air. As you take your final breaths, the old man" << endl;
			cout << "walks away into the distance. Your vision fades." << endl << endl;
		}
	}
}

void playRPS(Player& player){
	int answer;

	cout << "3" << endl << "2" << endl << "1" << endl << "GO!" << endl;
	cout << "Press 1 for rock." << endl << "2 for paper" << endl << "3 for scissors" << endl;

	cin >> answer;
	cout << "----------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl;

	if(answer == 1){
		cout << "The old man plays paper." << endl << "You lose." << endl;
	}
	else if(answer == 2){
		cout << "The old man plays scissors." << endl << "You lose." << endl;
	}
	else{
		cout << "The old man plays rock." << endl << "You lose." << endl;
	}

	cout << "The devs are too lazy to make the rest of the game. Go choose not to play rock paper scissors " << endl;
	cout << "to read some cringey dialogue." << endl << "I will kill you now." << endl << endl;
	player.killPlayer();
}

void setupGame(Player& player){
	int answer;
	int isPlayerReady = 2;

	cout << "Welcome to [game name]!" << endl;

	while (isPlayerReady == 2){
		cout << "What is your name?" << endl;

		getline(cin, player.name);
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		cout << "Oh, so " << player.name << " is your name, huh?" << endl << endl;

		cout << "Are you a boy, or a girl???" << endl;
		cout << "Press 1 for boy, and 2 for girl" << endl;
		cin >> answer;
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;

		if (answer == 1){
			player.sex = 0;
			cout << "So you're a boy, huh?" << endl << endl;
		}
		else if(answer == 2){
			player.sex = 1;
			cout << "So you're a girl, huh?" << endl << endl;
		}
		else{
			player.sex = 2;
			cout << "So you're other, huh? Interesting..." << endl << endl;
		}

		cout << "Finally, how old are you?" << endl;
		cin >> player.age;
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		if (player.age >= 60){
			cout << "Wow, you're pretty old, seems like your bones are starting to creak..." << endl;
			cout << "[-10 max starting HP]" << endl << endl;
			player.health -= 10;
		}

		cout << "So here's some info about yourself: " << endl;
		player.print_info();

		cout << endl << endl << "If this looks OK, press 1. Otherwise press 2 to remake yourself!" << endl;
		cin >> isPlayerReady;
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
	}
}




//player
//monster
//level
//inventor
