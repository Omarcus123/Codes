#include <iostream>
#include <vector>
using namespace std;

// Vectors are better than arrays when you don't know what the exact size of the array needs to be
int main() {
    
    string input;
    vector <int> list;
    
    
    
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    
    cout << "Enter your choice: ";
    cin >> input;
        
    while (input != "Q" || input != "q") {
        
        // Print Numbers
        if (input == "P" || input == "p") {
            if (list.size() == 0) {
                cout << "[] - list is empty" << endl;
                cout << endl;
            }
            else {
                for (int i = 0; i < list.size(); i++) {
                    cout << list.at(i) << endl;
                }
            }
            }
        
        // Add a number
        else if (input == "A" || input == "a") {
            int add;
            cout << "Enter a element to add to the list: " << endl;
            cin >> add;
            cout << endl;
            list.push_back(add);
            cout << add << " added" << endl;
            cout << endl;
        }
        
        // Display the mean of numbers
        else if (input == "M" || input == "m") {
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
        }
        // Display the smallest number
        else if (input == "S" || input == "s") {
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
        }
        // Display the largest number
        else if (input == "L" || input == "l") {
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
        }
        
        else if (input == "Q" || input == "q") {
            cout << "Goodbye" << endl;
            cout << endl;
            break;
        }
    
        else {
            cout << "Unknown selection, please try again." << endl;
            cout << endl;
        }
        
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
        
    cout << "Enter your choice: " << endl;
    cin >> input;
    cout << endl;
   
}
    
    return 0;
}
    
