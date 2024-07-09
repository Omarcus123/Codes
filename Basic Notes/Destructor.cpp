#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string name_val) {
        name = name_val;
    }
    // Constructors are always the same name of the class and can be used to declare variables in the private class
    Player() { // Default Constructor
        cout << "No args constructor called" << endl;
    }
    Player(string name) { // Parameterized Constructor
        cout << "String arg constructor called" << endl;
    }
    Player(string name, int health, int xp) { // Multiple Parameterized Constructor
        cout << "Three args constructor called" << endl;
    }
    ~Player() { // Destructor
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    // Object Calls
    Player slayer; // Automatiaclly runs the constructor depending on which one is called
    slayer.set_name("Slayer");
    
    Player frank; // 1st constructor
    frank.set_name("Frank");
    
    Player hero("Hero"); // 2nd constructor
    hero.set_name("Hero");
    
    Player villian("Villian", 100, 12); // 3rd constructor
    villian.set_name("Villian");
    
    Player *enemy = new Player; // 1st constructor
    enemy->set_name("Enemy");
    
    Player *rebel = new Player; // 1st constructor
    rebel->set_name("Rebel");
    
    Player *level_boss = new Player("Level Boss", 1000, 300); // 3rd constructor
    level_boss->set_name("Level Boss");
    
    // Destructor is automatically called here at the end of the function
    
    return 0;
}
