/*
        MAXIMUM SUBARRAY SUM : 
        --> subarray : continious part of array
        --> total number of possible subarrays : n*(n+1)/2

        --> solved by : Brute Force Approach : see the code wwritten for finding the maxsum below 
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n , value ;
    vector<int> arr;
    cout<<"\nEnter number of elements : \n";
    cin>>n ;

    // taking input
    for ( int i=0; i<n ; i++)
    {
        cout<<"Enter "<< i+1 <<"st value: ";
        cin>> value;
        arr.push_back(value);
    }

    // printing all the possible subarrays : brute force method 
    cout<<"\nAll possible subarrays :";
    for (int st =0 ; st<n ; st++)
    {
        for (int en = st ; en<n ; en++)
        {
            for ( int trav= st ; trav<=en ; trav++)
            {
                cout<<arr[trav] << ",";
            }
            cout<<"\t";
        }
        cout<<"\n";
    }

    int sum=0;
    int msum = INT_MIN;
    for ( auto iter : arr)
    {
        sum =sum+iter;
        msum = max( sum , msum);

        if (sum<0)   // if the sum  is -ve then also max sum will be fetched correctly
        {
            sum =0;     // without this reset , we will get incorrect answers
        }
    }
    cout<<"\nMax sum : "<< msum;
}