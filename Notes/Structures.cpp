// # Exercise
// # Create a structure named "person" with the following fields
// # name (should be string)
// # age (should be int)
// # do_programming (should be bool)
// # declare two objects "p1" and "p2" of your structure's datatype
// # set the values for "p1" as follows:
// # name: alice
// # age: 20
// # do_programming: true
// # set the values for "p2" as follows:
// # name: bob
// # age: 18
// # do_programming: false
// # "cout" their informations in the scheme "name (age)" => e.g. tim (23) by getting the values from your structure-objects

#include <iostream>
#include <string>
using namespace std;

struct person {
	string name;
    int age;
    bool do_programming;
};

int main (void){

	person p1;
    person p2;
    

	p1.name = "alice";
    p1.age = 20;
    p1.do_programming = true;

	p2.name = "bob";
    p2.age = 18;
    p2.do_programming = false;

    cout << p1.name << '(' << p1.age << ')' << endl;
	cout << p2.name << '(' << p2.age << ')' << endl;
    
    return 0;
}

