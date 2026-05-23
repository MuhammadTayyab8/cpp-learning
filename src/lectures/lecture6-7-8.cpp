// how to run code?
// g++ .\lecture6-7-8.cpp -o lec678
// ./lec678



#include<iostream>
using namespace std;
main() 
{
    // while loop
    int i = 1;
    while(i <= 10) {
        cout << i << ": Hello World from while" << endl;
        i++;
    }

    cout << endl << endl;

    // do while loop
    int x2 = 1;
    do {
        cout << x2 << ": Hello World from do while" << endl;
        x2++;
    } while(x2 <= 5);

    cout << endl << endl;

    // for loop
    for(int x = 1; x<=5; x++)
    {
        cout << x << ": Hello from for." << endl;
    }

    // === Assignment Operators (also called shorthand operators)
    int x, y, z;
    x = 8;
    y = 4;
    z = 2;
    x += 2;
    cout << x << endl;

    // === switch
    char grade = 'a';

    switch (grade)
    {
    case 'a':
        cout << "Excellent" << endl;
    break;
    case 'b':
        cout << "Very Good" << endl;
    case 'c':
        cout << "Good" << endl;
    default:
        break;
    }

}
