// O(1) : constant 
// sum of n natural numbers 

#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int result =n*(n+1)/2;
    cout <<result ;
}


// other time complexities 

/*
o(n) : linear time complexity . eg: factorial , fabonnaci , kadane's algo
--> loop runs n number of times 
*/

/*
O(n^2)  : 
--> selection sort , bubble sort , insertion sort 
*/

/*
o(n^3):
--> 3 nested loops   
*/

/*
O(logn)  : very near to O(1) as logn is very small number.
--> binary search tree:   using start and end index
*/

/*
 o(nlogn) : 
 --> optimised algorithms : merge sort , quick sort , greedy algo
*/

/*
exponential time complexities : O(2^n) , O(3^n) ,etc.
--> recursion (brute force algo)
*/

/*
O(n!)
--> n queens , knights tour , finding all possible permutations in string 
*/
