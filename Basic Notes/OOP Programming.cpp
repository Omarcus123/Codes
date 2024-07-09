#include <iostream>
#include <vector>
using namespace std;

class Player {
    // Attributes
public: // The public method contain variables accessible everywhere like the air 
    int health;
    int xp;
    
    // Function Methods
    void set_name(string func_name) {
        name = func_name;
    }
    void talk(string text_to_say) {
        cout << name << " says" << text_to_say << endl;
    };
    bool is_dead;
private: // The private method contain variables only accessible inside the class
    string name;
};

int main() {
    // Object Calls
    Player frank;
    Player hero;
    
    // Pointer object, still confused on this so I probably won't use it
    Player *enemy = new Player();
    
    // Arrays Objects
    Player characters[] {frank, hero};
    
    // Vector Objects
    vector<Player> neutral {frank};
    
    // Accessing Variables inside the Class
    frank.xp = 1000;
    frank.health = 950;
    frank.set_name("Walmart");
    frank.talk(" Numbers");
    
    // Accessing Class Members Example Function
    //frank.Example(1000);
    
    // Accessing with Pointers Example Function
    //enemy->Example(1000);
    
    return 0;
}
