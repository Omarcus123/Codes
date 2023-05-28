#include <iostream>
#include <string>
using namespace std;

// Q. Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol. Email: byakuya809@gmail.com

int main() {

    try {
        string email;

        cout << "Enter your email address: ";
        cin >> email;

        // cout << email << endl;

        for (int i = 0; i < email.length(); i++) {

            // cout << email[email.length() - 1] << endl;
            // cout << email.length() << endl; 20

            if (email[i] == '@') {
                cout << "Email accpeted." << endl;
                break;
            }
            else if (email[email.length() - 1] != '@' && email[i] == email[email.length() - 1]) {
                throw "Invalid Email";
            } 
        }
    }

    catch (const char * txtException) {
        cout << "Exception: " << txtException << endl;
    }

    return 0;
}

