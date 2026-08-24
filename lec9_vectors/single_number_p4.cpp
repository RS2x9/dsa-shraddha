// leetcode - problem -136
// linear runtime complexity mean : no use of nested loops
/*
  we will solve using bit manupulation : bitwise XOR
  XOR on same bits results 0 , else it results 1 .
*/

// take XOR of all the numbers , it will return a number which is not repeated in vector 
// reason: same numbers XOR results in 0 . any number XOR 0 is that number itself 

// example 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={5,4,4,2,2};
    int ans=0;  // 0^any_number=any_number
    for (int num: vec)
    {
        ans=ans^num;  // num is stored in ans
    }
    cout <<ans;
}