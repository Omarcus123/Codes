// This will explain how pointers are used
#include <iostream> 
using namespace std; 
int main() {     
  int a = 5;  //Declare and initialize a variable
  /*
  The following pointer declarations are all valid and they all are doing the same:
  Declaring a new pointer and initializing it with 0 (a non accessible memory address) for safety-reasons.
  int * b = 0;
  int* b = 0                 
  int *b = 0; // This is how its usually written.
  int *b; // <= this, however would cause "b" to point to some random address which might be unsafe.
  */
  int *b = 0; // Create a new pointer of type int and initialize it with 0

  cout << "\"b\" is initialized and now pointing to memory-address:  " << b << endl << endl;

  //Now make the pointer "point" to the address of a
  b = &a; //"b" now points to the address of "a"

  cout << "\"a\" is stored at memory-address:  " << &a << endl;
  cout << "\"b\" is stored at memory-address:  " << &b << endl;
  cout << "\"b\" is pointing to memory-address now:  " << b << endl << endl;

  cout << "The value of \"a\" is: " << a << endl;  // returns the value of a

  //the "*b" will get the value from the address b points to (the value of a)
  cout << "The value of the area \"b\" is pointing to is: " << *b << endl << endl << endl;

  //Now modify the value of the address "b" is pointing to...effectively changing the value of "a"     
  *b=10;

  cout << "\"a\" is still stored at memory-address:  " << &a << endl;
  cout << "\"b\" is still stored at memory-address:  " << &b << endl;
  cout << "\"b\" is still pointing to memory-address:  " << b << endl << endl;

  cout << "The value of \"a\" is now: " << a << endl;  // returns the value of a
  cout << "The value of the area \"b\" is pointing to is now: " << *b << endl << endl;
  
 // Exercise
 // Indirectly access and modify the value of "n": - Create 2 pointers p1 and p2 for the given integer "n", - with p1 being the void pointer, - and p2 the int pointer. - p2 must be assigned to p1. 
 //- indirectly increase the value of n's content by 1 and print the value.

  int n = 1;
     
  // Create pointers for n
  void* p1;  //Create a void-pointer
  int* p2;  //Create an int-pointer
  
  p1 = &n;  //let the void pointer reference "n"
  p2 = (int*) p1;  // let int-pointer reference the void-pointer but typecasted to int*
  p2 += 1;  // increment the value where p2 is pointing to by 1
  
  //cout << *p2 << endl; // points to the address of n. output will be identical to the line below
  cout << n << endl;

  return 0;        
}