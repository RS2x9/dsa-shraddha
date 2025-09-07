// runtime polymorphism 
/*
    example : virtual functions :
    --> we can make any function as virtual function using keyword : virtual
    --> a virtual function is a member function that you expect to be redefined in derieved classes.
    --> A virtual function allows a derived class to override a method from its base class.
    --> dynamic in nature.
    --> always defined in base class and are always with base class and overridden in child class.
    --> always called during runtime.
*/

#include<iostream>
using  namespace std;

class parent 
{
    public: 
    virtual void hello()
    {
        cout <<" parent here" << endl;
    }
};

class ch : public parent 
{
    public :
    void hello()
    {
        cout << " child here " << endl;
    }

};

int main()
{
    ch c1;
    c1.hello();
}