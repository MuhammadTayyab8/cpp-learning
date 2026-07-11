// OOPS

#include<iostream>
using namespace std;

class Student
{
    // Access Modifiers
    // private, public, protected

    // variables (member) & functions (methods) - members

    public:
        // constructor - same name as class name. can be parameterized
        Student(string name)
        {
            string name = name;
            cout << "Hello! " << name << endl;
            cout << "Constructor of class, run when class formed" << endl;
        }
        void call()
        {
            cout << "This is call func of class student" << endl;
        }
        void run();


    private:
        void prcall()
        {
            cout << "This is private" << endl;
        }
    
};

// protype
void Student::run()
{
    cout << "this is protype" << endl;
}

main ()
{
    Student s1("Tayyab");
    s1.call();

}
