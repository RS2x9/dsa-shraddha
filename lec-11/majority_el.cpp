/*
The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.
*/

// my logic 
// time  complexity:
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Number of elements :";
    cin>>n;
    int arr[n];
    cout <<"Elements : ";
    for (int i=0 ; i< n ; i++)
    {
        cin>>arr[i];
    }

    int rarr[1];  // if the array contains same element then also the maximum 1
    // elemnts will get stored in this array(conating repeated elements )
    // but the output will print that element 2 times 

    for (int i=0 ; i<n ; i++)
    {
        int count=0; // initialize it here so that count =0 for every i

        for (int j=i+1 ; j< n ; j++)
        {
            if (arr[i]  == arr[j]) count++;
        }

        if (count>(int)(n/2)) 
        {
            //rarr[0]=arr[i];
            if (arr[i] != rarr[0])  // to avoid printing of same element twice 
            {
                cout <<"\n"<<arr[i]<<" ";
            }
            rarr[0]=arr[i];
        }
    }
    
}