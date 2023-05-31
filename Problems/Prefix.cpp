//Write a function to find the longest common prefix string amongst an array of strings.
//
//If there is no common prefix, return an empty string "".
//
//
//
//Example 1:
//
//Input: strs = ["flower","flow","flight"]
//Output: "fl"
//Example 2:
//
//Input: strs = ["dog","racecar","car"]
//Output: ""
//Explanation: There is no common prefix among the input strings.
//
//
//Constraints:
//
//1 <= strs.length <= 200
//0 <= strs[i].length <= 200
//strs[i] consists of only lowercase English letters.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    string storage = "";
    vector <string> prefix {"flower","flow","flight"};
        sort(prefix.begin(),prefix.end());
        string a = prefix[0]; // flight
        string b = prefix[prefix.size()-1]; 
        
        for (int i = 0; i < prefix.size(); i++) {
                if (a[i] == b[i]) {
                    storage = storage + a[i];
                }
                else {
                    break;
                }
            }
        cout << storage << endl;
    
    return 0;
}
