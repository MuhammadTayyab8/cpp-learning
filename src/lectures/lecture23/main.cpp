// PS D:\Tayyab\uni\sem2\cs201> g++ .\src\lectures\lecture23\main.cpp -o .\bin\lec23.exe 
// PS D:\Tayyab\uni\sem2\cs201> .\bin\lec23.exe

#include <iostream>
#include "myfile.h"

using namespace std;

int main()
{
    // Header Files (.h)
    cout << add(10, 20) << endl;

    // MACROS
    #define PI 3.141  // macros always define using #define and no ;
    double radius = 3;

    cout << "Area of circle with radius: " << PI * radius * radius << endl;

    // macro function
    #define square(x) ((x) * (x))

    cout << "square: " << square(3) << endl;

    return 0;
}