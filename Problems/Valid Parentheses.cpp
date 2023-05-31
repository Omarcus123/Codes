#include <iostream>
#include <stack>
using namespace std;


class Solution { // ()[]{}
public:
    bool isValid(string s) {
        stack<char> st;  // taking stack for keep tracking the order of the brackets..
        for(int i = 0; i < s.length(); i++) { // iterate over each and every elements
            // if current element of the string will be opening bracket then we will just simply push it into the stack
            // cout << s[i] << endl;
            if (s[i] =='(' or s[i] =='{' or s[i] =='[')
                st.push(s[i]);
            else {
                if(st.empty() or (st.top()=='(' and s[i] !=')') or (st.top() =='{' and s[i] !='}') or (st.top()=='[' and s[i] !=']'))
                    return false;
                st.pop();  // If the code runs this line the means we have to right pair of brackets, so just delete the string so that the stack can be empty
            }
        }
        return st.empty();  // returns true if the stack is empty and false if it is full
    }
};

int main() {
    
    Solution Omarcus;
    
    // 0 = False and 1 = True
    cout << Omarcus.isValid("(]") << endl;
    cout << Omarcus.isValid("()") << endl;
    
    return 0;
}
