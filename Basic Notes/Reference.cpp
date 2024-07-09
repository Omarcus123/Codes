#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // Basic range based for loop explanation, think of this as for in range for python
    int scores[] {100, 97, 90};
    
    for (auto new_var : scores) {
        cout << new_var << endl;
    }
    
    // Pointer references
    vector<string> numbers {"Let Me", "Run", "The Numbers"};
    
    for (auto &neww: numbers) {
        neww = "Walmart";
    }
    
    for (auto neww: numbers) {
        cout << neww << endl;
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}
