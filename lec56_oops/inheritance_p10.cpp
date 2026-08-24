/*
    Inheritance:
    --> When properties and member functions of base class ( or parent class ) are passed
         on the derived class is inheritance.
    --> Used for code reusability from one class to another .
    --> while formation of object , the constructor of base class will be called then 
        constructor of derieved class will be called .
    --> in destructor : memory deallocation : first child then parent 

*/

#include<iostream>
#include<string>
using namespace std;

class person
{
    public:
    string name ;   // property
    int age ;       // property

    person()
    {
        cout << " constructor of parent here " << endl;
    }

    ~person()
    {
        cout << "parent destructor here" << endl;
    }
};

// inheriting the properties from person 
class student : public person
{
    public:
    int roll;

    student()
    {
        cout << " constructor of student here " << endl;
    }

    void getinfo ()
    {
        cout << " name: " << name << endl;
        cout << " age : " << age  << endl;
        cout << " roll: " << roll << endl;
    }

    ~student()
    {
        cout << "student destructor here" << endl;
    }
};

int main()
{
    student s1;
    s1.name ="rishi";
    s1.age= 20;
    s1.roll =91;
    s1.getinfo();
}