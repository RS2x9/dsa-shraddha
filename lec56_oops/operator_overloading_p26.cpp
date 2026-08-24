/*
    OPERATOR OVERLOADING : type 3 of compile time polymorphism 
    --> It's mean giving additional meaning to operators for user defined objects 

*/

#include<iostream>
using namespace std ;
class channel
{
    int sub;
    public :
        channel( int s)
        {
            sub = s ;
        }
        void operator++ ()
        {
            /*
                --> operator : this is keyword 
                --> ++   : the operator for which we have to do overloading , we can use any operator
                --> ()    : this is empty becasue no parameter is passed 
            */
            sub = sub+1;
        }
        void print()
        {
            cout << sub;
        }
};
int main()
{
    channel gs(1000);
    ++gs;       // this is same as gs.operator++
    gs.print();
    
}

/*
    Operators That Cannot Be Overloaded in C++

    Operator	    Meaning
    .	            Dot operator
    ::	            Scope resolution
    ?:	            Ternary operator
    sizeof	        Size operator
    typeid	        Runtime type info
    .*	            Pointer-to-member operator
*/