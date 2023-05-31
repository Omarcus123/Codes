#include <iostream>
using namespace std;

int *apply_all (int array1[], size_t size_one, int array2[], size_t size_two) {
    int *new_array;
    int spot = 0;
    new_array = new int[size_one * size_two];
    
    for (size_t i = 0; i < size_two; i++) { 
        for (size_t j = 0; j < size_one; j++) {
            new_array[spot] = array2[i] * array1[j];
            spot = spot + 1;
        }
        }
    
    return new_array;
}

void print(int *display, size_t size) {
    for (int i = 0; i < size; i++) {
        cout << display[i] << endl;
    }
}

int main() {
    const size_t array1_size = 5;
    const size_t array2_size = 3;
    
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};
    
    cout << "Array 1: " << endl;
    print(array1, array1_size);
    
    cout << "Array 2: " << endl;
    print(array2, array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size = array1_size * array2_size;
    
    cout << "Result: " << endl;
    print(results, results_size);
    
    cout << endl;
    
    return 0;
}
