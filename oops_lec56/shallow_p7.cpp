/*
    Shallow copy :
    -->  A shallow copy of an object copies all of the member  values from one object to another
    --> the default and custom copy constructors make shallow copy
    -->  generally whatever variables are declared get stored on sttack 
    --> the problem comes during dynamic memory allocation i,e when memory is stored on heap 
    -->  
*/

#include<iostream>
#include<string>
using namespace std;

class student 
{
    public:
    string name;
    double *cgpaptr;    // pointer to store cgpa address
    student( string name , double cgpa)
    {
        this -> name = name ;
        cgpaptr = new double;    // memory allocated on heap to store cgpa 
        *cgpaptr = cgpa ;  // deferencing pointer to store cgpa value 
    }

    void getinfo()
    {
        cout << " name: " << name <<endl;
        cout << "cgpa : " << *cgpaptr << endl;
    }
};

int main()
{
    student s1( "rishi" , 12.78);
    s1.getinfo();

    student s2(s1) ; // copying the values of s1 to s2 
    *( s2.cgpaptr) =10;

    s1.getinfo();   // we have changed for s2 but changes are seen for s1 also , this is the problem in shallow copy
    // reason: while copying the pointer  also gets copied which stores address , so changing for s2 will aviiously changes for s1 as both stores same address.
    // default copy constructor gives the same issue 
}