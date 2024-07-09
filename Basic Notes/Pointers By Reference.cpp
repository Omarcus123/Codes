#include <iostream>
using namespace std;

void double_data(int *int_ptr) {
    *int_ptr = *int_ptr * 2;
}

int *largest_int(int *int_ptr1, int *int_ptr2) {
    if (*int_ptr1 > *int_ptr2) {
        return int_ptr1;
    }
    else
        return int_ptr2;
}

int *create_array(size_t size, int value) {
    
    int *new_storage; // declares a pointer variable
    
    new_storage = new int[size]; // declares the array with the size
    for (int i = 0; i < size; i++) {
        new_storage[i] = value; // stores value in each array index
    }
    
    return new_storage; // returns the array
    
}

void display(int *lame, size_t size) {
    for(int i = 0; i < size; i++) {
        cout << lame[i] << endl;
    }
}

int main() {
    int value = 10;
    
    // Without the return statement
    cout << value << endl;
    double_data(&value); // When calling a pointer by reference make sure to use the & symbol
    cout << value << endl;
    
    // With the return statement
    int small = 1, large = 4690;
    
    cout << small << endl;
    cout << large << endl;
    int *largest_ptr;
    largest_ptr = largest_int(&small, &large);
    cout << *largest_ptr << endl;
    
    // Function Pointers with Arrays
    int *my_array;
    size_t size = 10;
    int street = 2;

    my_array = create_array(size, street);
    
    display(my_array, size);
    
    return 0;
}
