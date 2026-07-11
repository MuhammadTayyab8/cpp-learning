#include<iostream>
using namespace std;

class Student
{
    public:
    string name;

    class School {
        public:
        string schoolname;
        string city;
    };

    School s;

    void display() {
        cout << "Name: " << name << endl;
        cout << "School Name: " << s.schoolname << endl;
        cout << "City: " << s.city << endl;
    }


};

main()
{

    Student s1;
    s1.name = "Tayyab";
    s1.s.schoolname = "MIT";
    s1.s.city = "Karachi";

    s1.display();

    return 0;
}
