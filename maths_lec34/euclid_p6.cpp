/*
    Euclid's Algorithm : 
    --> Efficiently calculates the gcd of two numbers
*/ 

#include<iostream>
using namespace std;

int gcd(int a , int b)      // the logic used here here is euclid's algorithm
{
    while ( a> 0 && b>0)
    {
        if (a>b) 
        {
            a=a%b;  // % is used to avoid repeated substraction
        }
        else b=b%a;
    }

    if ( a==0) return b;
    return a;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>> a>>b;
    cout << "gcd: " << gcd(a,b);
}