/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left/

Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/


#include <iostream>
#include <string> 
#include <vector>
using namespace std;

class Solution {
public: 
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int reversed = 0;
        int temp = x; // 123

        while (temp != 0) { 
            int digit = temp % 10; // display the last number ex: 123, this line will give you 3
            reversed = reversed * 10 + digit; // stores the reversed digit of the users input
            temp = temp / 10; // (123 / 10 = 12) 
        }

        return (reversed == x); 

    }
};

int main() {

    Solution Omarcus;
    cout << Omarcus.isPalindrome(123); // 0 represents false and 1 represents true

    return 0;
}