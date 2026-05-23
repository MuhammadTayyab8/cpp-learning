// how to run code?
// g++ .\lecture9.cpp -o lecture9
// ./lecture9



#include<iostream>
using namespace std;


void greet() {
    cout << "Hello World from greet!" << endl;
}

// prototype of function
void greet1();

// parameter
void greet2(string name) {
    cout << "Hello " << name << endl;
}

main()
{
    greet();
    greet1();
    greet2("Tayyab");
}


void greet1() {
    cout << "Hello World from greet1!" << endl;
}
