/*
pass by reference (address)
--> when address is passed then the changes in the original address is seen .
--> when the array is passed in function for any function : the values are changed by pass by reference 
--> array names are pointers which stores address of the first element of the array,
we can traverse the entire array and change all the elemennts in the array
*/

#include<bits/stdc++.h>
using namespace std;
void changearr(int arr[] , int size)
{
    cout <<"in function: ";
    for (int i=0 ; i<size ; i++)
    {
        arr[i]=2*arr[i];
        cout <<arr[i]<<"\t";
    }
    cout <<"\n";
}
int main()
{
    int arr[]={1,2,3};
    changearr(arr,3);
    cout <<"in main function: ";
    for (int i=0 ; i<3 ; i++)
    {
        cout <<arr[i]<<"\t";
    }
}