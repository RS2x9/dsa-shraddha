/*
    pass by reference :
    --> can be used in two ways in functions :
    --> 1)  using pointers 
    --> 2) using aliasing (references) :
        two names refers to same memory address , so changes will be reflected to both the variables 
*/
#include<iostream>
using namespace std;

void change(int *ptr) // declare pointer 
{
    // deferencing : so that the value at address will get changed 
    *ptr=20;
    cout<< *ptr<<endl;;
}

void alias(int &c)  // using refernces
{
    c=200;
    cout <<c;
}
int main()
{
    int a=10;
    change(&a) ; // pass the address to the pointer
    

    // using refernces approach 
    int b=100;
    alias(b);
}