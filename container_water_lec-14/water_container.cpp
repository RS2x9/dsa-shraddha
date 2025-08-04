// leetcode -problem -11

/*
    --> use two pointer approach 
    --> st ,end will be pointing to start and end of the array 
    --> the index which has smaller height , it's pointer will be changed 
    --> because this will give the max water stored 
    --> changing the pointer who has larger height will give less amount of water
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    int mw=0;  // stores max water
    cout <<"Number of elements : ";
    cin>>n;
    vector<int> arr(n);
    cout <<"Elements: ";
    for (int i=0 ; i< n ; i++)
    {
        cin>>arr[i];
    }

    int st=0;  // starting index
    int end=n-1;  // last index 
    while (st<end)
    {
        int w=end-st; // stores total number of gaps between two walls 
        int mh =min(arr[st] , arr[end] );  // stores value of smaller wall
        int cw=w*mh ; // current water
        mw=max(mw,cw);

        arr[st]<arr[end] ? st++ : end--;  
    }
    cout <<"max water: "<<mw;

}