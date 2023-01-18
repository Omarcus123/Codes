#include <iostream>
using namespace std;

// This method is used to edit variables inside functions where as the other passing function methods just creates copies of functions
void swap(int &v, int &a) {
    int space = v;
    v = a;
    a = space;
};



int main() {
    
    int x = 10, y = 22;
    
    cout << "x is " << x << " y is " << y << endl;
    
    swap(x, y);
    
    cout << "x is " << x << " y is " << y << endl;
    
    return 0;
}
