#include<iostream>
using namespace std;

main ()
{
    // ***** Lecture#20 *****
    // structure 
    struct info {
        char name[20];
        char address[40];
        float CGPA;
    };

    info i = {"Tayyab", "Gulshan, Karachi", 3.63};

    cout << "Name: "<< i.name << endl;
    cout << "Adress: "<< i.address << endl;
    cout << "CGPA: "<< i.CGPA << endl;

    // structure with pointer 
    info *j;
    j = &i;

    cout << "Name with (*j).name: "<< (*j).name << endl;
    cout << "Adress with j->address: "<< j->address << endl;



    // left shift: <<; right shift >>;

}
