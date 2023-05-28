#include <iostream>
#include <string>
using namespace std;

class Printer {
    string name;
    int availablePaper;
public:
    Printer(string PrinterName, int paper) {
        name = PrinterName;
        availablePaper = paper;
    }    
    void Print(string txtDoc) {
        int requiredPaper = txtDoc.length() / 10; // 

        if (requiredPaper > availablePaper) 
            throw "No paper"; // string exception thrown
            // throw 101; // Integer exception thrown

        cout << "Printing..." << txtDoc << endl;
        availablePaper = availablePaper - requiredPaper;
    }
};

int main() {

    Printer myPrinter("Canon 2464", 10);

    // Try to excute these functions if not....
    try {
        myPrinter.Print("Hello, my name is Omarcus. I am a Professional Fighting Game Player");
        myPrinter.Print("Hello, my name is Omarcus. I am a Professional Fighting Game Player");
        myPrinter.Print("Hello, my name is Omarcus. I am a Professional Fighting Game Player");
    }
    // .....Catch them and print this error message
    catch (const char * txtException) {
        cout << "Exception: " << txtException << endl;
    }
    catch (int exCode) {
        cout << "Exception: " << exCode << endl;
    }
    // Default Exception, handles any exception type that is thrown BUT the int/string exceptions are prioritized first. This also must be placed after all after expection types
    catch (...) {
        cout << "Exception happened!" << endl;
    }



    return 0;
}