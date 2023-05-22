#include <iostream>
using namespace std;

int main() {
    
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    // unique_ptr<int>unPtr2 = unPtr1; // Unique pointers cannot be shared, instead you'll have to do this
    unique_ptr<int>unPtr2 = move(unPtr1); // unPtr1 becomes null once this move function is called
    
//    cout << unPtr1 << endl; // These two print statements run without the move function in line 8
//    cout << *unPtr1 << endl;
    
    cout << *unPtr2 << endl;
    
}

