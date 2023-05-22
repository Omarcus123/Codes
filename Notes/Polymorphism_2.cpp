#include <iostream>
using namespace std;

// Declaring a Base class
class GFG_Base {

public:
    // virtual function - which prints the most derived version of the display class
    virtual void display() {
        cout << "Called virtual Base Class function" << endl;
    }
    // virtual function - which prints the most derived version of the print class
    virtual void print() {
        cout << "Called GFG_Base print function" << endl;
    }
};

// Declaring a Child Class
class GFG_Child : public GFG_Base {

public:
    void display() {
        cout << "Called GFG_Child Display Function" << endl; // derived version
    }

    void print() {
        cout << "Called GFG_Child Print Function" << endl; // derived version
    }
};

int main() {
    // Create a reference of class GFG_Base
    GFG_Base* base = new GFG_Child;
    GFG_Base* bass = new GFG_Base;

    cout << "Using Pointers Method" << endl;
    
    // This will call the virtual function
    base->display();

    // This will call the virtual function
    base->print();
    
    // This will call the non-virtual function
    bass->display();

    // This will call the non-virtual function
    bass->print();
    
    cout << endl;
}
