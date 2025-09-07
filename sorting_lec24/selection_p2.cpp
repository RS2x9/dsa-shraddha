/*
    Selection Sort :
    --> opposite  of selection sort 
    --> one part is sorted , the other is unsorted
    --> take the element from the unsorted part to sorted part in n-1 iterations.
    -->  initially assumption is : the entire array is unsorted 
    --> w.r.t to ith element , a loop runs which checks for the smallest one in array
    --> swap that smallest one with ith element
    --> time complexity =O(n*n)
*/

#include<iostream>
#include<vector>
using namespace std;

void selection(vector<int> &arr , int n)
{
    for (int i=0 ; i<n-1 ; i++)
    {
        int small_idx =i  ;   // assume smallest element at this index
        for (int j=i+1 ; j< n ; j++)        // traversing over left over unsorted array
        {
            if ( arr[j] < arr[small_idx] )
            {
                small_idx=j;  // we get exact index of smallest element w.r.t to ith element
            }

        }
        swap( arr[i] , arr[small_idx] );
    }
}
int main()
{
    int n;
    cout <<"NUMber  of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout <<" Elements: ";
    for (int i=0 ; i< n; i++)
    {
        cin>>arr[i];
    }

    selection(arr,n);
    for (int num : arr)
    {
        cout << num <<" ";
    }
}