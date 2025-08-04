/*
         Binary search:
         --> we take start index and end index and find the index of target element by comparing with element lying at the mid
         --> works on sorted array
*/

#include<iostream>
#include<vector>
using namespace std;

int binary( vector<int> arr , int target , int st , int en)
{
    int mid = st+ (int)((en-st)/2);  // mid index
    if (arr[mid]==target ) return mid;
    else if (arr[mid] > target ) return binary(arr , target, st , mid-1);
    else if (arr[mid] < target ) return  binary ( arr , target , mid+1 , en);
    return false ;  // when element is not found
}

int main()
{
    int n;
    cout <<"NUmber of elements : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Elements : ";
    for (int i=0 ; i<n ; i++)
    {
        cin>> arr[i];
    }

    int st=0 ;      // starting index 
    int en=n-1;     // ending index
    int target;
    cout<<"Target: ";
    cin>>target;
    cout << binary ( arr , target , st , en);
    return 0;
}

// time complexity = (logn with base 2) * O(1)= O(logn )