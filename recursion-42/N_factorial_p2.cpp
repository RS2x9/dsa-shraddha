// n factorial 
#include<iostream>
using namespace std;

int fact(int n)
{
    if (n==0) 
    {
        return 1;
    }
    if (n>=2 )
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n ;
    cout <<"Enter number: ";
    cin>>n;
    cout << fact (n);
    return 0;
}

/*
        base case : 
        --> region of code where recursion stops 
        --> we already knew the answer , so n=0 is base case above .
*/

/*
        Time  Complexity :
        --> Write recurrence relation 
        --> TC= (total number of recursive calls)*(work done in each call)

        --> now : How the above code was running 
            f(n)=k1+f(n-1)  , k1 is constant for the work done like cout 
            f(n-1)=k1+ f(n-2)
            .
            .
            .
            f(1)=k1+f(0)  , here f(0) is when n=0 , so f(0) =constant =k2

        --> adding all the equations :
            f(n)=k1*n +k2
        --> TC= O(n)  , after ignoring the constants 
*/

/*
        Recursion Tree:
        --> used for prblems where recurrence relation is dificult 
        --> write the tree: n-> (n-1) -> (n-2) -> ..... -> 0.
        --> in general we have approx n calls 
        --> there are some work done like return things , so k is considered for them 
        --> TC= O(n)  , ignoring constants 
*/

/*
        Space Complexity :
        --> There is one extra stack used  in memory  without declaring any extra variables 
        --> that will also counted in space complexity 
        --> whatever called in recursion call stack is accounted for counting space somplexity
        like function was called when n=n , n=n-1 , ..... n=0 arre stored on call stack
        --> Space complexity(SC) = Auxillary space + recursion call stack memory.
        --> SC =Depth of recursion tree * ememory in each call
        --> SC= height of call stack * memory in each call

        --> in factorial : 
        SC=n*k i,e SC=O(n)
*/