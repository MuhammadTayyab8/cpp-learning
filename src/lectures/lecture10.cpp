#include<iostream>
using namespace std;


int age = 20;

// === call by value and call by reference
void change(int x) {
    x = 100;  // this change will not affect the original variable
}

void changeByReference(int &x) {
    x = 100;  // this change will affect the original variable
}

main()
{
    #define PI 3.14  // macro definition
    cout << PI << endl;

    const float pi = 3.14;  // constant variable definition
    cout << pi << endl;

    // ===- scope
    
    int age = 30;  // this age is different from the previous one
    cout << "Inner age: " << ::age << endl;  // (:: is called unary scope resolution operator) age prints 30 and ::age prints 20
    
    // ===== call by value and call by reference
    int a = 10;
    int b = 20;
    cout << a << " " << b << endl;
    cout << &a << " " << &b << endl;  // print the address of a and b

    change(a);  // call by value, a will not change
    cout << a << endl;  // a will still be 10

    changeByReference(b);  // call by reference, b will change
    cout << b << endl;  // b will be 100

    // resursive functions: fn who never stop

}