// find the largest in the array 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"Number of elements :";
    cin>>n;
    int arr[n];
    cout<<"Elements :";
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int large =arr[0];
    for (int num : arr)
    {
        if (num> large ) large =num;
    }
    cout <<"largest "<<large;
}