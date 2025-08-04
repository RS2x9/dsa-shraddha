/*
        MAXIMUM SUBARRAY SUM : 
        --> subarray : continious part of array
        --> total number of possible subarrays : n*(n+1)/2

        --> solved by : Brute Force Approach : see the code wwritten for finding the maxsum below 
*/

#include<iostream>
#include<vector>
#include<climits>   // to use INT_MIN
using namespace std;
int main()
{
    int arr[]={1,2,-3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    // printing all the possible subarrays (funny thing )
    cout <<"\n";
    for (int st=0 ; st<n ; st++)    // st: starting index
    {
        for (int en=st ; en<n ; en++)   // en : ending index
        {
            for (int i=st ; i<=en ; i++)        // i traverse as st , en changes
            {
                cout <<arr[i];
            }
            cout <<"\t";
        }
        cout <<"\n";
    }

    // finding the max sum 
    // time complexity : O(n^2)
    cout <<"\n";
    
    int msum=INT_MIN ; // INT_MIN represents the minimum value an int can hold in C++
    for (int st=0 ; st<n ; st++)
    {
        int csum=0;   // stores the value of current sum
        for (int en=st ; en<n ; en++)
        {
            csum+=arr[en];
            msum=max(csum,msum);  // this is put here so that it can check for all the possible subarrays 
        }
    }
    cout <<msum;
}