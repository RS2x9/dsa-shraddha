/*
    static keyword :-
    --> static variables :
        --> static variales in a class are created and initialised once.
        --> they are shared by all the objects of the class
*/
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
        static  A obj;
    }
    
    cout << "End of main()" << endl;    // this is printed in mid line 
    // this indiactes : whichever object is creted with static keyword , it sustains for life time 
    // of the program . it will persists inside memory untill main() gets over.

}
