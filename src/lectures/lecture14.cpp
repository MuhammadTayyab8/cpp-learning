#include<iostream>
using namespace std;

main()
{
    // ======== pointer
    cout << endl << "============= Pointer ===============" << endl;

    int a = 10;
    int *a_ptr = &a; // & = call by reference operatoe

    cout << a << endl;
    cout << &a << endl;
    cout << a_ptr << endl;
    cout << *a_ptr << endl;

    *a_ptr = 30;

    // a      = normal variable
    // &a     = address of a
    // ptr    = pointer variable
    // *ptr   = value stored at that address

    cout << a << endl;
    cout << &a << endl;
    cout << a_ptr << endl;
    cout << *a_ptr << endl;


    // ============ Swapping
    cout << endl << "============= Swapping ===============" << endl;

    int a1=10, b1=5, temp;
    temp=a1;
    a1=b1;
    b1=temp;
    cout << a1 << " " << b1 << endl;

    int a2 = 5, b2 = 10;
    swap(a2, b2);
    cout << a2 << " " << b2;

}