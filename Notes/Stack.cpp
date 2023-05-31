#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> stack) {
    while (!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main() {

    stack<int>numbersStack; // creates a stack
    /* Stack Functions
    numbersStack.empty - displays if the stack is empty 
    numbersStack.size - displays the size of the stack
    numbersStack.push - pushes a element in the top of the stack
    numbersStack.pop - removes a element from the top of the stack
    numbersStack.top - displays the element in the top of the stack 
    */

    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);

    // numbersStack.pop();

    printStack(numbersStack);    
    // if (numbersStack.empty())
    //     cout << "Stack is empty" << endl;
    // else 
    //     cout << "Stack is not empty" << endl;
    // cout << "Stack size is " << numbersStack.size() << endl;    



    return 0;
}