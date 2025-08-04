/*
    REcursion :
    --> method-1 :
    --> calculate TC using recurrence relation 
    --> Method -2 
    --> TC =total number of recursion calls * work done in each call
*/

// example :
#include <iostream>
using namespace std;

int fact(int n)
{
    // no extra variable   is used in this auxillary space 
    if (n==0 || n==1 ) return 1;   // Auxillary space 
    return n*fact(n-1);     // auxillary space 
}
int main()
{
    int n;
    cout <<"NUmber : ";
    cin>> n;
    cout<< " Factorial : "<< fact(n);
    return 0;
}

/*  
        -->  f(n) = k1+ f(n-1)
            f(n-1) =  k1 + f(n-2)
            .
            .
            .
            f(1) 1+ f(0) 

            f(0) is constant =k2 
        --> adding all the equations : f(n) = n*k1 + k2 ;
        --> TC = O(n)  , ignoring the constants 
        --> for any value of n , we are  doing n+1 calls but approximately n calls 

*/

/*
        space complexity : 
        --> auxillary space is also counted in space complexity
        --> SC = depth of recursion tree * memeory in each call stack 
        --> sc =height of call stack * memory in each stack 
        
        --> in the above eg : height is approx : n
           SC = n* k , k for any extra space occupied 
           SC=O(n)
*/