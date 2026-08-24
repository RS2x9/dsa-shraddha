/*
    copy constructor:
    --> special constructor (default) used to copy properties of one object to another 
    --> 
*/

#include<iostream>
#include<string>
using namespace std;

class teacher
{
    public:
    string name;
    int salary;
    teacher( string name , int salary)
    {
        this -> name =name;
        this -> salary = salary;
    }

    void getinfo()
    {
        cout << "name : " << name <<endl;;
        cout << "salary : " << salary <<endl;;
    }
};

int main()
{
    teacher t("rishi",456864);
    teacher t2(t);       // default copy constructor is called 
    t2.getinfo();
}