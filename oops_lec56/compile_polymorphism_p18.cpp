// compile time polymorphism 
// example : function overloading 

#include<iostream>
#include<string> 
using namespace std;

class print
{
    public:

    void show (int x)
    {
        cout << " x: " << x << endl;
    }

    void show (char ch)
    {
        cout << " ch: " << ch << endl;
    }
};

int main()
{
    print p1;
    p1.show(100);    // at compile time , 100 is assigned to x
    p1.show('a');
}