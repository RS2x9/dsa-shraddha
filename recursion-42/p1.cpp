/*
        recursion :
        -->the funtion which calls itself untill a certain condition is met is 
        recursive function and the process is said to be recursion.
        --> all the wworks done by loops can be done by recursion and vice versa 
        --> generally used to solve big problems 
*/


// print numbers from n -> 1 
#include<iostream> 
using namespace std;
void print(int n)
{
    cout <<n <<" ";
    if (n==1) return ;
    print(n-1);
}

int main()
{
    int n;
    cout <<"ENter number: ";
    cin>> n;
    print (n);
    return 0;
}

/*
        how it is happening in memory :
        --> the data is stored on heap  as: 

        | print()   n=1 |
        |  "        n=2 |
        |  "        n=3 |
        |  "        n=4 |
        .
        .
        .
        |  "        n=n |
        |  main()       |

        --> this diagram (strating from downwards ) is said as recursion tree

        --> after the condition of n==1 has meet , return is called which starts clearing 
        the heap from top and this is said as backtracking .
*/

/*
        Recurrence Relation : 
        --> It's mathematical way to represent recursion 
        --> Used to calculate time  complexity(TC)

        --> IIn the above prooblem :
        f(n)= print "n" +  f(n-1)
        so : TC(n) = O(1) + TC(n-1)  is the time complexity 
*/