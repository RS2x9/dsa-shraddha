/*
    Static Keyword:
    --> we can make variables and objects static
    --> variables declared as static in a function are created and initialised 
        once for the lifetime of the program.

    --> static variables in a class are created and initialised once.
        They are shared by all the objects of the class.
*/

#include<iostream>
using namespace std;

void fun()
{
    int x=0;
    static int y=1;
    cout << "x: " << x << " , " << "y: " << y << endl;
    x++;
    y++;
}

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
    fun();
    fun();
    fun();
    cout << "\n";
    A obj1 ;
    
    if (true)
    {
        static A  obj2;
    }
    cout << "End of main()" << endl;

}