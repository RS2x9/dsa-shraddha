// leetcode -problem -238
// my logic
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Number of elements :";
    cin>>n;
    int arr1[n];   // stores the input elements 
    int arr2[n];   // stores the multiplied elements 
    cout <<"Elements :";

    for (int i=0; i<n ; i++)
    {
        cin>>arr1[i];
    }

    // doing multiplication 
    for (int i=0 ; i<n ; i++)
    {
        int st=0;  // for every i , st=0
        int end=n-1;  // end will always start from last index 
        if (st==i) st++;   // this will only work for i=0
        if (end==i) end--;   // when end clashes with i

        arr2[i]=1;  // 1 is assumed for multiplication purpose in near future
        while (st < end)
        {
            if (st==i) st++;   // this will only work for i=0
            if (end==i) end--;   // when end clashes with i
            if (st==end) 
            {
                break;
            }
            arr2[i] = arr2[i]*arr1[st]*arr1[end];
            st++;
            end--;
        }

        if (st==end)  arr2[i]=arr2[i]*arr1[st];  // only works when n is odd 
        // for even n , while loop is enough 
    }

    // printing result 
    for (int num: arr2)
    {
        cout <<num<<" ";
    }
}