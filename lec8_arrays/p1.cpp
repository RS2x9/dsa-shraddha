/*
--> Arrays  are data structure  : used to store data 
--> these can be linear, hierarchial 
--> Algorithims : these are ways to perform opeartions on data 
--> arrays are contigious and can store only same type of data 
--> values are accessed by index
--> sizeof(arr)  gives size of arrin bytes
*/

// find the smallest in the array 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout <<"Number of elements :";
    cin>>n;
    int arr[n];
    cout <<"Elements :";
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int small=arr[0];
    for (int num : arr)
    {
        if (num<small) small=num;
    }
    cout <<"smallest:"<<small;
}
