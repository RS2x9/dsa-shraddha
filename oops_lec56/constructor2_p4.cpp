//      constructor 
/*
    this :
    --> it's special pointer that points to current object
    --> when object name and parameter name are same then to avoid confusion , this is used 
    --> this-> property_name is same *(this).property_name
*/

#include<iostream>
#include<string> 
using namespace std ;

class teacher
{
    public: 
    string name;
    string dept ;
    int salary;
    teacher( string name , string dept , int salary)
    {
        this-> name = name ;    // LHS name is object , RHS name is parameter
        this-> dept = dept ;
        this-> salary = salary;
    } 
    void getinfo()
    {
        cout << "name: " << name <<endl;
        cout << "dept: " << dept << endl;
        cout << "salary: " << salary << endl;
    }
};

int main()
{
    teacher t( "rishi" , "cse" , 100000);   // t is the calling object for "this" constructor
    t.getinfo();
}