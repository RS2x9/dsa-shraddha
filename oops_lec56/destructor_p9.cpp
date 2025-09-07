/*
    destructor:
    --> oppositr of constructor
    --> destructor deallocates memory .
    --> constructor allocates memory
    --> compiler makes a default destructor.
    --> destructor only deallocates the static memory 
    --> so if memory is allocated dynamically then it has to get deallocated dynamically .
    --> we use "new" keyword to allocate dynamic memory , use "delete" keyword to deallocate dynamic memory..
    --> so is any pointer points to dynamic memory then after using "delete" , the memory pointed by pointer
        will get deleted , pointer won't get deleted .
    --> destructor has same name as class.
    --> when int main is over then default destructor is called .
    --> IN the normal IDE's we are using , elthough the memory will be get cleared , but at the organisation level 
        knowledge of destructor is important .
*/

#include<iostream>
#include<string>
using namespace std;

class student 
{
    public:
    string name ;
    double *cgpaptr;

    // constructor 
    student (string name , double cgpa)
    {
        this -> name = name ;
        cgpaptr = new double;
        *cgpaptr =cgpa;
    }

    // destructor  . this one is automaticallly called 
    ~student()
    {
        cout << " Destructor here" << endl;

        // to delete dynamic memory allocated , use "delete" keyword
        delete cgpaptr;      // memory pointed by cgpaptr will get deleted 
    }

    void getinfo()
    {
        cout<< "name: " << name << endl;
        cout << "salary: " << *cgpaptr << endl ;
    }
};

int main()
{
    student s("rishi", 9);
    s.getinfo();
}