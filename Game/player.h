using namespace std;

class Player()
{
public:
	// variables
	int health = 100;
	int maxHealth = 100;
	int armor = 0;
	int maxArmor = 50
	string name = "";
	int age = 0;
	int sex = 0;
	int xp = 0;
	

	// member functions
	Player()
	{}

	void print_info()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Sex: " << sex << endl;
		cout << "Health: " << health << endl;
	}

	bool player_dead()
	{
		return health == 0;
	}


};
