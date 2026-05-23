// how to run code?
// g++ .\lecture5.cpp -o lecture5
// ./lecture5


#include<iostream>
using namespace std;

main()
{
    // if/else
    int age1, age2;
    cout << "Enter age1: " << endl;
    cin >> age1;
    cout << "Enter age2: " << endl;
    cin >> age2;

    if(age1 == age2) {
        cout << "Condition True" << endl;
    } 
    else if(age1 > age2) {
        cout << "Age1 is greater" << endl;
    }
    else if(age1 < age2) {
        cout << "Age2 is greater" << endl;
    }
    else {
        cout << "Condition False" << endl;
    }

    // logical operator
    string username = "Tayyab";
    int password = 1234;

    if (username == "Tayyab" && password == 1234) {
        cout << "Login Successfully." << endl;
    } else {
        cout << "Invalid credients" << endl;
    }


}