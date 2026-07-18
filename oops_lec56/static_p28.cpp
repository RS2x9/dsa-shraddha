/*
    static keyword :-
    --> static variables :
        --> variables declred as static in a function are created and initialised
            once for the lifetime of the program
        --> static variales in a class are created and initialised once.
        --> they are shared by all the objects of the class
*/

#include<iostream>
using namespace std ;
void fun()
{
    static int x =0 ;       // this line will only run once during multiple calling also 
    cout << "x : " << x << endl;
    x++;
}
int main()
{
    fun();
    fun();
    fun();
}