#include<iostream>
using namespace std;


// friend function
class Student
{
    private:
    int marks;

    public:
    // constructor
    Student()
    {
        marks = 80;
    }

    friend void show(Student);  // friend funtion
};

void show(Student s)  // Student is type and s is parameter
{
    cout << "Marks = " << s.marks << endl;
}



// friend class
class Employee1
{
    private:
        int salary;

    public:
        Employee1()
        {
            salary = 6000;
        }

        friend class Employee2;
};

class Employee2
{
    public:
    void display(Employee1 obj) {
        cout << "Salary: " << obj.salary << endl;
    }
};




// this pointer
class StudentInfo
{
    private:
    int marks;

    public:
    void setMarks(int marks) {
        this->marks=marks;
    }

    void showMarks() {
        cout << "Marks marks: " << marks << endl;
        cout << "Marks this->: " << this->marks << endl;
        cout << "Marks (*this). : " << (*this).marks << endl;
    }
};


main()
{

    // friend function
    cout << "********** Friend Function *******" << endl;

    Student s1;
    show(s1);

    // friend class
    cout << "********** Friend Class *******" << endl;

    Employee1 e1;
    Employee2 e2;

    e2.display(e1);


    // reference
    cout << "********** Reference & *******" << endl;

    int a;
    int &b = a;  // b is reference of a
    a = 100;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    b = 55;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;



    // this pointer
    cout << "********** this Pointer *******" << endl;
    StudentInfo si1;
    si1.setMarks(90);
    si1.showMarks();


    return 0;

}
