#include <iostream>
#include <vector>
using namespace std;

void menu() {
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
};

string selection() {
    string shits;
    
    cout << "Enter your choice: ";
    cin >> shits;
    
    return shits;
};

void add_numbers(vector <int> &list) {
    // Add a number
    int add;
    cout << "Enter a element to add to the list: " << endl;
    cin >> add;
    cout << endl;
    list.push_back(add);
    cout << add << " added" << endl;
    cout << endl;
};

void print_numbers(vector <int> &list) {
        // Print Numbers
        if (list.size() == 0) {
            cout << "[] - list is empty" << endl;
            cout << endl;
        }
        else {
            for (int i = 0; i < list.size(); i++) {
                cout << list.at(i) << endl;
            }
        }
};

void display_mean(vector <int> &list) {
   // display the mean
    if (list.size() == 0) {
        cout << "Unable to calculate the mean - no data" << endl;
        cout << endl;
    }
    else {
        int math = 0;
        double mean;
        for (int v = 0; v < list.size(); v++) {
            math = math + list.at(v);
        }
    cout << math;
    mean = math / list.size();
    cout << "The mean is: " << mean << endl;
    cout << endl;
}
};

void display_small(vector <int> &list) {
    // Display the smallest number
    if (list.size() == 0) {
        cout << "Unable to determine the smallest number - no data" << endl;
        cout << endl;
    }
    else {
        int small = 1000;
        for (int i = 0; i < list.size(); i++) {
            if (list.at(i) < small) {
                small = list.at(i);
            }
        }
        cout << "The smallest number is: " << small << endl;
        cout << endl;
    }
};

void display_largest(vector <int> &list) {
    // Display the largest number
    if (list.size() == 0) {
        cout << "Unable to determine the largest number - no data" << endl;
        cout << endl;
    }
    else {
        int large = 0;
        for (int i = 0; i < list.size(); i++) {
            if (list.at(i) > large) {
                large = list.at(i);
            }
        }
        cout << "The largest number is: " << large << endl;
        cout << endl;
    }
};

void quit_loop() {
    cout << "Goodbye" << endl;
    cout << endl;
    // include after function call break
};

void unknown_selection() {
    cout << "Unknown selection, please try again." << endl;
    cout << endl;
};

// Vectors are better than arrays when you don't know what the exact size of the array needs to be
int main() {
    
    string input;
    vector <int> main_list;
    
    menu();
    input = selection();
    
    while (input != "Q" || input != "q") {

        // Print Numbers
        if (input == "P" || input == "p") {
            print_numbers(main_list);
            }

        // Add a number
        else if (input == "A" || input == "a") {
            add_numbers(main_list);
        }

        // Display the mean of numbers
        else if (input == "M" || input == "m") {
            display_mean(main_list);
        }
        // Display the smallest number
        else if (input == "S" || input == "s") {
            display_small(main_list);
        }
        // Display the largest number
        else if (input == "L" || input == "l") {
            display_largest(main_list);
        }

        else if (input == "Q" || input == "q") {
            quit_loop();
            break;
        }

        else {
            unknown_selection();
        }
        
        menu();
        input = selection();
    }
    
    return 0;
}
    
