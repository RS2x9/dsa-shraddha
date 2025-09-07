/*
    polymorphism :
    --> This is the ability of objects to take on different forms or behave in different 
        forms or behave in different ways depending on the context i,e in which they are used.
    --> example : constructor overloading 
*/

#include <iostream>
#include<string>
using namespace std;

class student 
{
    public:
    string name ;

    student ()    // non - parametrized constructor
    {
        cout << "\nnon - parametrized constructor " << endl;
    }

    student (string name )    // non - parametrized constructor
    {
        cout << "\nparametrized constructor " << endl;
        this -> name = name ;
    }
};

int main()
{
    student s1("rishi");    //  parametrized constructor is called 
    // student s1();    // non- parametrized constructor is called 
    
}