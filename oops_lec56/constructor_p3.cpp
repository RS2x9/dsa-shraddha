/*
    Constructor:
    --> special method which automatically gets called during object creation
    --> during initialisation of variables in class , constructor is used 
    --> if we are not defining constructor , then  cpp automatically makes it 
    --> same as name class
    --> don't have return type 
    --> Only called once ( automatically ) at object creation
    --> memory allocation happens when constructor is called 
    --> main() can't call variables under private automatically , so declare them under public
    --> types :
        --> non - parameterised : no parametres 
        --> parameterised : has parametres 
        --> copy 
    
    -->same class can have multiple coonstructors with different parameters
    --> constructor overloading : same parameter name with different data types 
        --> this is example of polymorphism 
*/

#include<iostream>
#include<string>
using namespace std;

class teacher
{
    private :
    int salary;

    public: 
    string name;
    string dept ;
    string subject;

    
    teacher()   // non - parameterised constructor 
    {
        cout << "Constructor here \n";      // automatically getting printed on output
        dept =  "cse";      // set for all the teachers
    }

    teacher ( string n , string sub)     //  parameterised constructor
    {
        name =n ;
        subject=sub;
    }

    void getinfo()
    {
        cout << " name of t1: " << name << endl;
        cout << " subject of t1: " << subject << endl;
    }

    void setsalary(int sal)     // setter for updating variables declared under private
    {
        salary =sal ;
    }

    int getsalary()     // getter for fetching  variables values  declared under private
    {
        return salary;
    }
};

int main()
{
    teacher t1("rishi" , "cse");   // t1 is object for teacher 1
    teacher t2;   // t2 is object for teacher 2
    t1.setsalary(10000);
    
    t1.getinfo();
    cout << "salary : " << t1.getsalary() <<endl;
    cout << "dept of teacher 1: " << t1.dept <<endl;
    cout << "dept of teacher 2: " << t2.dept <<endl;
}