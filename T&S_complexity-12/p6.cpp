// Recursive fibonacci

// this code returns the nth element

#include <iostream>
using namespace std ;

int fib(int n )
{
    // no extra variable is used in this auxillary space 
    if (n==1 || n==0) return n;
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    cout <<"Number  : ";
    cin>> n;
    cout << fib (n);
    return 0;
}

/*
        Time complexity :
        --> after drawing balanced recursion tree : 2^n   , n ranges from : 0 to n-1 
        --> GP  sum= 2^n -1

        --> TC= total calls * work done in each call 
        --> TC (2^n -1 )*k  =O(n)

        --> when the tree is not balanced :
           TC = O((1.618)^n)  , 1.618 is golden ratio
*/

/*
    space complexity :
    ---> there are  n levels 
    --> so SC=n*1
    --> SC= O(n)
*/