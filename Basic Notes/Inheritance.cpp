#include <iostream>
#include <list>
using namespace std;

/* Inheritance is used if we have multiple classes with simaliar functionailities but we want to implement
additional functionilites , instead of creating 4 different classes that do the same thing we can just use
inheritance
 
instead of:

Class Account {
 // balance, deposit, withdraw.....
 }
 
Class Savings_Account {
 // balance, deposit, withdraw, interest rate,.....
  }
 
Class Checking_Account {
  // balance, deposit, withdraw, minimum balance, per check fee,.....
  }
 
Class Trust_Account {
  // balance, deposit, withdraw, interest rate,.....
  }
 
We can do this instead:
 
 Class Account {
  // balance, deposit, withdraw.....
  }
  
 Class Savings_Account : public Account {
  // interest rate, specialized withdraw,.....
   }
  
 Class Checking_Account : public Account{
   // minimum balance, per check fee, specialized withdraw,.....
   }
  
 Class Trust_Account {
   // interest rate, specialized withdraw,.....
   }
*/

class Low_Tier_Character { // Base Class
private: // Only accessible within this class
    string Player;
    int Player_Base;
    list<string> PublishedMoveSet; //????
protected: // Accessible in the Base class and Derived class but not through objects in the main class
    string Character; // Makes this variable accessible in the Base class and Derived class
public: // Accessible every where like the air
    Low_Tier_Character(string character, string player) { // Constructor that intializes the variables
        Character = character;
        Player = player;
        Player_Base = 0;
    }
    void GetInfo() {
        cout << "Character: " << Character << endl;
        cout << "Player: " << Player << endl;
        cout << "Player Base: " << Player_Base << endl;
        cout << "Moveset: " << endl;
        for (string i : PublishedMoveSet) {
            cout << i << endl; // ????
        }
    }
    void More_Players() {
        Player_Base++;
    }
    void Less_Players() {
        if (Player_Base > 0)
            Player_Base--;
    }
    void Moveset(string moves) {
        PublishedMoveSet.push_back(moves); // ????
    }
};

class Top_Tier_Character : public Low_Tier_Character { // Derived Class
public:
    Top_Tier_Character(string character, string player) : Low_Tier_Character(character, player) {}
    
    void Character_Info() {
        cout << Character << " is fair and balanced" << endl;
    }
};

int main() {
    Low_Tier_Character Akuma("Akuma", "Pure");
    Akuma.More_Players();
    Akuma.Moveset("St.HP");
    Akuma.Moveset("Cr.MK");
    Akuma.GetInfo();
    // Akuma.Character = "Akaglk"; Protected members are not accessible here
    
    cout << endl;
    
    Top_Tier_Character Luke("Luke", "Punk");
    Luke.More_Players();
    Luke.Moveset("Sandblast");
    Luke.GetInfo();
    Luke.Character_Info();
    
    cout << endl;
    
    Top_Tier_Character Cammy("Cammy", "Mago");
    Cammy.More_Players();
    Cammy.Moveset("Spiral Arrow");
    Cammy.GetInfo();
    Cammy.Character_Info();
    
    return 0;
}
