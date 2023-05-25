#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    fstream myFile; // Used to open/close, read and write files 

    // Write into text file
    myFile.open("SF6.txt", ios::out); // Allows you to open and write into a text file. The "ios::out" function overwrites any text that is in the file
    if (myFile.is_open()) {
        myFile << "Hello" << endl;
        myFile << "This is second line" << endl;
        myFile.close(); // Must include this everytime you open a file
    }

    myFile.open("SF6.txt", ios::app); // Allows you to open and write into a text file. The "ios::app" function adds additional text in the file
    if (myFile.is_open()) {
        myFile << "Manon" << endl;
        myFile.close(); // Must include this everytime you open a file
    }

    myFile.open("SF6.txt", ios::in); // Allows you to read a text file with the "ios::in" function
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) { // The getline function stores the text from each line from "myFile" into the string variable "line"
            cout << line << endl; // Print the text
        }
        myFile.close(); // Must include this everytime you open a file
    }
    
    
    return 0; 
}