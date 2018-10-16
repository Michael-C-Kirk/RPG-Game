#include "player.h"

using namespace std;

// member functions
Player::Player() //default constructor
{}

void Player::print_info()
{
	string sexString = "unassigned";
	if (sex == 0){
		sexString = "Male";
	}
	else if (sex == 1){
		sexString = "Female";
	}
	else{
		sexString = "Other";
	}

	cout << "Name:           " << name << endl;
	cout << "Age:            " << age << endl;
	cout << "Sex:            " << sexString << endl;
	cout << "Current Health: " << health << endl;
	cout << "Max Health:     " << maxHealth << endl;
}

bool Player::isPlayerDead()
{
	return health == 0;
}

void Player::damagePlayer(int amount){
	health -= amount;
}

void Player::takeCoins(int amount){
	cash -= amount;

	cout << "You lost " << amount << " coins.";
	if(amount >= 50){
		cout << " Yikes.";
	}
	cout << endl;
}

void Player::killPlayer(){
	health = 0;
}