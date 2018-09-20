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
	

	// member functions
	Player()
	{}

	void print_info()
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

	bool player_dead()
	{
		return health == 0;
	}

	void player_damage(int damage){
		health -= damage;
	}
};
