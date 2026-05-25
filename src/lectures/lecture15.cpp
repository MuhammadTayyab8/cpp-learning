#include <iostream>
using namespace std;

main() {

    cout << "int: " << sizeof(int) << endl;  // 4
    cout << "string: " << sizeof(string) << endl;  // 24
    cout << "char: " << sizeof(char) << endl;  // 1
    cout << "float: " << sizeof(float) << endl;  //4
    cout << "double: " << sizeof(double) << endl; // 8
    cout << "long: " << sizeof(long) << endl;  // 4
    cout << "short: " << sizeof(short) << endl;  // 2


    // relation between array and pointer
    cout << "\nrelation between array and pointer" << endl;
    int y[10];
    int *yptr;
    yptr = y;

    // printing the memory address
    cout << "The memory address of yptr = " << yptr << endl ;
    yptr++; // incrementing the pointer

    // printing the incremented memory address
    cout << "The memory address after incrementing yptr = " << yptr << endl; 

    cout << "value of *yptr = " << *yptr << endl; 


    
    int y2[10] = {0,5,10,15,20,25,30,35,40,45};
    int *yptr2;
    yptr2 = y2; // Assigning the address of first element of array.
    cout << "Accessing 6th element of array as y2[5] = " << y2[5] << endl;
    cout << "Accessing 6th element of array as *(yptr2 + 5) = " << *(yptr2 + 5) << endl;
    cout << "Accessing 6th element of array as yptr2[5] = " << yptr2[5] << endl;

    return 0;
}