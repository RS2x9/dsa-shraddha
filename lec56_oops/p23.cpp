#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout << "Constructor" << endl;
    }

    ~A()
    {
        cout << " destructor" << endl;
    }
};

int main()
{
    if (true)
    {
        A obj;
    }
    
    cout << "End of main()" << endl;

}

// see the output difference between this code and p24