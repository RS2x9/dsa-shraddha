/*
    Run time Polymorphism 
    --> executed at run time 
    --> dynamic
    --> example : function overriding 
        --> both parent and child contain the same function .
        --> parameters can be same .
        --> implementation should be different .
        --> parent class function is overridden by child class function.
*/

#include<iostream>
using namespace std;

class parent 
{
    public:
    void getinfo()
    {
        cout << " Parent here " << endl;
    }
};

class child : public parent 
{
    public : 
    void getinfo ()
    {
        cout << " child here " << endl;
    }
};

int main()
{
    parent p1 ;
    p1.getinfo();

    child c1;
    c1.getinfo();     // here parent wala getiinfo is replaced by child wala getinfo. this is funcion overriding
}