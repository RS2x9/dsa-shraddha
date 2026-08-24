// custom copy constructor 

/*
    Key Difference in Logic:
    --> 
        Feature         |     Parameterized Constructor       |    Custom Copy Constructor
        -----------------------------------------------------------------------------------

        Input Source    |     Values provided at              |  Existing object instance
                                 creation time
        
        Purpose         |    Initialize from new              |  Initialize by duplicating 
                                 data                                    another object

        When Called     |    Explicitly with arguments       |      Implicitly when you pass an 
                                                             |      object of the same type to create another
*/


/*
    what are the + points of initially custom constructor using pass by refernce ?
    --> Avoids infinite recursion:
        --> If you passed by value (teacher orig), the compiler would try to copy the parameter into the 
            function — which itself calls the copy constructor again to create the copy — causing infinite recursion.

    --> No unnecessary copy:
        --> Pass‑by‑value would first create a copy of the object (extra work) just to copy it again into this. 
            Passing by reference directly accesses the original object with no extra copy.
*/


#include<iostream>
#include<string>
using namespace std;

class teacher
{
    public:
    string name;
    string dept ;
    string subject;
    int salary;

    /*
        defining constructor :
        --> Create a brand new object from scratch using values you provide
    */
    teacher ( string name  , string dept , string subject , int salary)
    {
        this -> name = name ;
        this -> dept = dept ;
        this -> subject = subject ;
        this -> salary = salary;
    }

    /*
        custom copy constructor:
        --> Create a brand new object by **cloning** an existing object’s data.
    */
    teacher( teacher & origobj)
    {
        cout << " Custom copy constructor here " << endl;
        this-> name = origobj.name;
        this -> dept = origobj.dept ;
        this -> subject = origobj.subject;
        this -> salary = origobj.salary;
    }

    void getinfo()
    {
        cout << "name: " << name <<endl;
        cout << " dept : " << dept << endl;
        cout << " subject: " << subject << endl;
        cout << " salary : " << salary << endl;
    }
};

int main()
{
    teacher t( "rishi" , "cse", " cse" , 23456);           // this line calls the copy constructor 
    teacher t2(t);     // It creates a new teacher object t2 by cloning the values from object t 
    t2.getinfo();
}