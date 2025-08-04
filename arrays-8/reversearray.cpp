// p5.cpp 
// reverse the array in the original array without making a new array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"how many: ";
    cin>>n;
    int arr[n];
    cout <<"Elements :";
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int temp;
    for (int i=0 ; i<n/2 ; i++)
    {
        temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }

    
    for (int num : arr)
    {
        cout <<num <<"\t";
    }
}