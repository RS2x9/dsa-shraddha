/*
    Memory Address:
    --> address of variables are in form of hexadecimal 
    --> 0x36a6
    --> & is used to fetch address of variable 
    --> 
*/

/*
    Pointers :
    --> special variables which stores the address of other variable .
    --> single * is used while declaration 
    --> datatype of pointer is same as the data of varibale whose address is 
    being stored in pointer variable 
    --> address of pointer is different from the address stored in it 
*/

/*
    Pointer to Pointer:
    --> stores the address of another pointer
    --> ** will be used while declaration 
*/ 

/*
    deference operator 
    --> denoted by *
    --> used to fetch value from the address
*/

#include<iostream> 
using namespace std;
int main()
{
    int a=10;
    cout <<"Adress of a: "<<&a<< endl;

    //  decaring pointers 
    int *ptr =&a ;   // & is used becuase pointer stores address
    cout <<"value of ptr : "<<ptr<<endl;
    cout <<"Address of ptr: "<<&ptr<<endl;

    // declaring pointer to pointer
    int **pptr=&ptr;
    cout <<"value of pptr: "<<pptr<<endl; // this is same as address of ptr 

    // using deference opeartor 
    cout <<"value of a: "<<*(&a)<<endl;
    cout <<"value of a : "<< *ptr<<endl;
    cout <<"Value of a: "<<*(*pptr)<<endl;  // answer is same without brackets 
    
}