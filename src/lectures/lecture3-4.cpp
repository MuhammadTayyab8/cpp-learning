// how to run code?
// g++ .\lecture3-4.cpp -o lecture3
// ./lecture3 

// === varible
// valid: age1, _age, age, 
// invalid: .age, !age, @age, 2age

// Data Types
// int, float, char, string. ex (int age = 20)

// arithematics operators is 5 (+,-,*,/,%)


// Operator Precedence:
// It tells which operator runs first in an expression.
// Example: * runs before +
// 5 + 3 * 2 = 11
// () has highest precedence.

// the quardic equ.
// y=ax^2+bx+c   ->  y = a*x*x + b*x + c also    y = a*(x*x) + (b*x) + c


#include<iostream>  // preprocessor directive or header file
using namespace std;  // standarad library

main()  // main function
{
    // cout
    cout << "VU" << endl;
    cout << "Virtual University" << endl;

    // varibles
    int x = 10;
    int y;  // declaratioon
    y = 9; // defination

    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;

    // input
    int age;
    cout << "Enter you age: ";
    cin >> age;
    cout << age << endl;

    // user enter 1234 display as 4,3,2,1
    int num, digit;
    cout << "Enter 4 digit: " << endl;
    cin >> num;
    // - first
    digit = num % 10;
    cout << digit << ", ";
    // - second
    num = num / 10;
    digit = num % 10;
    cout << digit << ", ";
    // - third
    num = num / 10;
    digit = num % 10;
    cout << digit << ", ";
    // - forth
    num = num / 10;
    digit = num % 10;
    cout << digit << ", " << endl;


    /* Following program takes the radius of a circle from the user and calculates the
    diameter, circumference and area of the circle and displays the result. */ 
    float radius, diameter, circumference, area;

    cout << "Enter radius of circle: " << endl;
    cin >> radius;

    // formulas:  diameter = 2 r circumference = 2 ח r and area = ח r
    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius;

    cout << "diameter of the circle is : " << diameter << endl;
    cout << "The circumference of the circle is : " << circumference << endl;
    cout << "The area of the circle is : " << area << endl; 

}