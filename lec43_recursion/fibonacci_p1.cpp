// Fibonacci series
// leetcode is accepting this code but here its not working 
#include<iostream>
using namespace std;

int fab(int n )
{
    if (n==0 || n==1 ) return n;
    return fab(n-1)+fab(n-2);
}
int main()
{
    int n;
    cout <<"Number: ";
    cin>> n;
    cout<<fab(n);
}

/*
        time complexity : 
        --> Draw balanced recursion tree.
        --> the number of function calls in each branch follows : 2^0 , 2^1 , .... 2^(n-1)
        --> using GP sum: f(n)=2^n -1
        --> TC= o(2^n)  , this is exponential time complexity

        --> when recursive tree is not balanced then accurate TC=O(  1.618^n)  , 1.618 is golden ratio
*/

/*
        Space comlexity = O(n)  because there are n levels in stack 
*/