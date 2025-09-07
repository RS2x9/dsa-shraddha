/*
    Abstraction :
    --> Hiding all unnecessary and sensative details and showing the important parts 
    --> access modifiers or specifiers  are also used :
        --> private : to make the data inaaccessible outside class 
        --> public: showing important data 
        --> protected : private and used during inheritance .
*/

/*
    Abstraction using abstract class 
    --> Do not creates objects ( or instances) .
    --> This becomes the blueprint of other classes i,e it guides other classes what 
        properties should be there in other classes which inherites it's properties .
    --> Abstract classes are typically used to define an interface for derived classes.

    --> when the value of the function is 0 , the class is automatically called as abstract class
*/

#include<iostream>
using namespace std;

class shape     // absttract class
{
    virtual void draw() =0 ;    // pure virtual function
};

class circle 
{
    public:
    void draw()
    {
        cout << " drawing circle " << endl;
    }
};

int main()
{
    circle c1;
    c1.draw();
}