// p4.cpp
// Linear search : searching the element in the array and returning the index of it 
// time complexity : O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"how many : ";
    cin>>n;
    int arr[n];
    cout <<"Elements :";
    for (int i=0 ; i< n ; i++)
    {
        cin>>arr[i];
    }

    int target;
    cout <<"Target element:";
    cin>>target;
    for (int i=0 ; i<n ; i++)
    {
        if (arr[i]==target)
        {
            cout<<"index: "<<i;
            break;
        }
    }

    cout <<"not found";
}