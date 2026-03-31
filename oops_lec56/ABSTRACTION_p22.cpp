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
using namespace std ;

class parent
{
    protected :     // accessible to derieved classes , but not outside 
        int secret ;
    public:
        parent(int x)
        {
            secret = x;
            cout << "Parent me value: " << secret << endl;
        }
};

class child : public parent
{
    public :
        child(int val) : parent(val) {}
        void call()
        {
            cout << "child secret: " << secret <<endl;
            // child can access the protected member 
        }
};

int main()
{
    parent p(100);
    
    child c(200);
    c.call();
}