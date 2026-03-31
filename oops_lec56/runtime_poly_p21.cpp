// run time polymorphism 
#include<iostream>
#include<string>
using namespace std ;

class parent
{
    public:
        virtual void hello()
        {
            cout << "I am Monster" << endl;
        }
};

class child : public parent 
{
    public:
        void hello() override
        {
            cout << "I am ben 10" << endl;
        }
};

int main()
{
    parent* p;
    child c;
    p = &c;
    p-> hello();
}

/*
    --> The actual object type (Child) decides which function runs. This is runtime polymorphism.
*/