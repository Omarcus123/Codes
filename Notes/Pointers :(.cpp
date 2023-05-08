#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    // Dereferencing a pointer
    int score = 100;
    int *score_ptr = &score;

    cout << *score_ptr << endl; // 100

    *score_ptr = 200;

    cout << *score_ptr << endl; // 200
    cout << score << endl; // 200
    cout << score_ptr << endl; // The address

     // Dynamic Memory Location
    int *int_ptr = nullptr; // Gives the pointer a memory address of 0

    int_ptr = new int; // Gives the address of the pointer a memory address

    cout << int_ptr << endl;

    // Relationship between Arrays and Pointers
    int scores[] {100, 95, 89};

    cout << scores << endl; // Prints the address of the array
    cout << *scores << endl; // Prints the first element of the array {100}

    int *scores_ptr = scores; // When dereferencing arrays you don't need the & symbol

    cout << scores_ptr << endl; // Prints the address of the array
    cout << *scores_ptr << endl; // Prints the first element

    // What I will mostly use to print specific indexes with pointers
    cout << scores_ptr[0] << endl; // 100
    cout << scores_ptr[1] << endl; // 95
    cout << scores_ptr[2] << endl; // 89

    // Alternative options
    cout << *scores_ptr << endl; // 100
    cout << *(scores_ptr + 1) << endl; // 95
    cout << *(scores_ptr + 2) << endl; // 89

    // Pointer Arithmetic
    int scores[] {100, 95, 89, 68, -1};
    int *scores_ptr = scores;
    
    while (*scores_ptr != -1) {
        cout << *scores_ptr << endl;
        scores_ptr++; // Points to the next index in the array
    }
    
    // Same thing as above but just different styles
    while (*scores_ptr != -1) {
        cout << *scores_ptr++ << endl;
    }
    return 0;

}
