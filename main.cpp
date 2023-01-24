//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
//
//Symbol       Value
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
//
//Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
//
//I can be placed before V (5) and X (10) to make 4 and 9.
//X can be placed before L (50) and C (100) to make 40 and 90.
//C can be placed before D (500) and M (1000) to make 400 and 900.
//Given a roman numeral, convert it to an integer.

#include <iostream>
using namespace std;

int main() {
    string s;
    int value;

    cout << "Enter the roman numeral to convert: ";
    cin >> s;
    
    //cout << s.size() << endl;
    // MCMXCIV = 1000 + 900 + 90 + 4
    for (int i = 0; i < s.size(); i++) { // 1, 3, 5, 7
        if (s[i] == 'I') {
            if (s[i + 1] == 'V') {
                value = value + 4;
                i = i + 1;
            }
            else if (s[i + 1] == 'X') {
                value = value + 9;
                i = i + 1;
            }
            else {
                value = value + 1;
            }
        }
        else if (s[i] == 'V') {
            value = value + 5;
        }
        else if (s[i] == 'X') {
            if (s[i + 1] == 'L') {
                value = value + 40;
                i = i + 1;
            }
            else if (s[i + 1] == 'C') {
                value = value + 90;
                i = i + 1;
            }
            else {
                value = value + 10;
        }
        }
        else if (s[i] == 'L') {
            value = value + 50;
        }
        else if (s[i] == 'C') {
            if (s[i + 1] == 'D') {
                value = value + 400;
                i = i + 1;
            }
            else if (s[i + 1] == 'M') {
                value = value + 900;
                i = i + 1;
            }
            else {
                value = value + 100;
        }
        }
        else if (s[i] == 'D') {
            value = value + 500;
        }
        else if (s[i] == 'M') {
            value = value + 1000;
        }
        
       // cout << "Value after loop is: " << value << endl;
    }
    
    cout << value << endl;
    
    return 0;
}
