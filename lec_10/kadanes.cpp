//              IMPORTANT FOR INTERVIEWS 
/*
        maximum subarray sum by kadane's algorithm .
        --> logic : (small +ve )+ (big -ve ) = -ve .
        ---> instad of using big -ve number , use 0 i,e whenver the currentsum becomes 
        -ve , reset it to 0.

        --> reason :
        eg : {3,-4,5,4,-1,7,-8}
        csum=3+(-4)=-1  , reset it to 0 becomes if there is any positive number to right ,
        this -ve csum will decrease the sum value by addding to it .
        --> so we will forget the old 3,-4 and will again start csum from 5
        
*/

// problem -53 on leetcode 
// time complexity : O(n)

// we solve on example here 
#include <iostream> 
#include<climits>
using namespace std;
int main()
{
    int arr[]={-1 , -2 ,-3,-4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int msum =INT_MIN;
    int csum=0;  // current sum 
    for(int st=0 ; st<n ; st++)
    {
        csum=csum+arr[st];
        msum=max(msum,csum);
        if (csum<0)  // this loop is placed here so that if the array contains all the -ve numbers then we can't miss the max
        {
            csum=0;
        }
    }
    cout << msum;

}