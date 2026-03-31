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

// compile time polymorphism
#include<iostream>
#include<string>
using  namespace std;
class parent 
{
    public:
        void hello()
        {
            cout << "I am umunger sour" << endl;
        }
};

class child : public parent
{
    public:
        void hello()
        {
            cout <<"chotu ben ten" << endl;
        }
};

int main()
{
    parent* p;
    child c;
    p= &c;
    p->hello();
}

/*
    --> Lesson: Without virtual, the compiler is dumb — it only looks at the pointer type, 
        not the actual object. This is compile‑time polymorphism (really just function hiding).
*/