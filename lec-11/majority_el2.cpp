// using more optimize way 
// using sorting : my logic 

// net time complexity : o(nlogn)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout <<"Number of elements : ";
    cin>>n;
    vector <int> arr(n);
    cout <<" Elements : ";
    for (int i=0 ; i< n ; i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin() , arr.end());  // time complexity: O(nlogn)

    int count=1 ; // ssymbolises element is prrsent for atleast once 
    for (int i=0 ; i<n-1 ; i++)
    {
        if (arr[i]!= arr[i+1]) count =1; // means adjacent elements are not same and for single it's present for atleast once 
        else count++;
        if (count>(int)(n/2)) 
        {
            cout <<" majority element : "<<arr[i];
            break;  // break is used so that the same element could not get printed multiple times 
        }
    }
}