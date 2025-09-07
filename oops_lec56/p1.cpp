/*
    OOPS : object Oriented Programming system
    --> the internal codes of STL's are written using OOPS's
    --> Objects : These are entities  in real world 
    --> class: It's a blueprint of these objects 
    --> any sort of function defined in class is known as member function 
*/

/*
    Access Modifiers :
    --> private : data and methods accessible inside class . set by default 
    --> public : data and methodds accessible to everyone 
    --> protected : data and methods accessible inside class and to its derieved class
        --> During inheritence : one class sends it's properties to another class
        --> private properties can't go there 
        --> so we use protected 
*/

#include<iostream>
#include<string>
using namespace std ;

class teacher
{
    private :
    string salary;
    
    public: 
    // properties \ attributes 
    string name;
    string dept ;
    string subject;

    // method \ function
    void changedept( string newdept)
    {
        dept = newdept;
    }

    // setter : used  to assign values declared under private 
    void setsalary(string s)
    {
        salary=s;
    }

    // getter : to fetch the values declared under private 
    string getsalary()
    {
        return salary;
    }
};


int main()
{
    teacher t1;     // t1 is object for teacher 1 
    t1.name="rishi";    // assigning values to attributes 
    t1.dept="cse";
    cout << " Teacher 1: " << t1.name << endl;
    cout << " T1 depart: " << t1.dept <<endl;
    t1.changedept("isis" ) ;
    cout << " T1 new depart: " << t1.dept <<endl;

    t1.setsalary("100,000");
    cout << " salary : " << t1.getsalary() << endl;

    teacher t2;     // t2 is object for teacher 2 
    teacher t3;     // t3 is object for teacher 3 
}