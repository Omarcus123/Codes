#include <iostream>
using namespace std;

int main() {
    
    char middle_intial = 'T'; //must be single quotes, double quotes are strings
    cout << "My middle intial is " << middle_intial << endl;
    
    // unsigned integers can only print positive numbers or zero
    // regular integers or signed integers can print anything
    
                    // *** Floating point types ***
    
    float team = 78.432; // float is used for shorter variables
    cout << "My bank account has: $" << team << endl;
    
    double pi = 3.14159; // double is used for long variables
    cout << "My second bank account has: $" << pi << endl;
    
    long double hop = 2.7e120; // long double is used for very long variables
    cout << "My third bank account has: $" << hop << endl;
    
                    // *** Boolean Types ***
    
    bool state = false; // False = 0; True = 1
    cout << "The value is: " << state << endl;
    
                    // *** Overflow Examples
    //int flow = 12343240262985082459726524059826290876;
    //cout << flow << endl;
    
    return 0;
}
