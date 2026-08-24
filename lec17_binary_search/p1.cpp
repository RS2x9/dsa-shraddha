/*
    Binary Search
    --> time complexity =O(logn)
        becuase the opeartions goes like : n , n/2 , n/4 ..... 1 ,   some k operations .

    --> applied only in sorted array in ascending or descending order 
    --> we find the mid index and the value at this is compared with the target value 
    --> when solved using iteration approach :
        space complexity =O(1)
    --> when solved using recursive approach :
        space complexity =O(logn )  , because of stack formation 
*/

// leetcode -problem -704

// iteration approach 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout <<"Number of elements : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Elements in sorted order: ";
    for (int i=0 ; i< n ; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout <<"Target : ";
    cin>> target;

    int st=0 ; // starting index
    int end=n-1; // ending index 
    while (st <= end) // = sign is there because we have to take average 
    {
        int mid =st +(end-st)/2;
        if (arr[mid]==target) 
        {
            cout << "index: "<< mid;
            break;
        }
        else if ( arr[mid] > target ) end--;
        else if (arr[mid]< target) st++;
    }

    if (st > end) cout <<"Not found";
    return 0;
}