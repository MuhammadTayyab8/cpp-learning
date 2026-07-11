#include<iostream>
using namespace std;

#define MAX(A, B) ((A > B) ? (A) : (B))

// inline function: inline void add(int a, int b) { return a+ b }
inline int max(int x, int y)
{
    if(x > y)
    return x;
    return y;
}



// ********* function overloading **********
void print(int a) 
{
    cout << "value is int: " << a << endl;
}

void print(double a) 
{
    cout << "value is double: " << a << endl;
}

void print(const char* a)
{
    cout << "value is char: " << a << endl;
}

main()
{

    int x = 5;
    int y = 10;
    int i;

    i = MAX(x++, y++);  // if MAX(x, y) = x=5, y=10, i=10; if MAX(x++, y++) x=5, y=12, i = 11
    cout << "the value of x = " << x << ", value of y = " << y << ", MAX return i = " << i << endl;

    // inline function
    int x2 = 5;
    int y2 = 10;
    int i2;

    i2 = max(x2++, y2++);  //  max(x2, y2) x=5, y=10, i =10 if  max(x2++, y2++) x = 6, y=11 i = 10
    cout << "the value of x2 = " << x2 << ", value of y2 = " << y2 << ", max return i2 = " << i2 << endl;



    // ********* function overloading **********
    print(4);
    print(5.3);
    print("Karachi");


    return 0;

}