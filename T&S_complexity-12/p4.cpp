// selection sort
// time complexity : O(n^2) ; because of two nested loop
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout <<"Number of elements : ";
    cin>>n;
    vector<int> arr(n);
    cout <<"Elements : ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    
    for (int i=0 ; i<n-1 ; i++)
    {
        int minIdx=i;
        for (int j=i+1 ; j<n ; j++)
        {
            if ( arr[j] < arr[minIdx])
            {
                minIdx=j;
            }
        }
        swap( arr[i] , arr[minIdx]);
    }

    for (int num : arr)
    {
        cout << num <<" ";
    }

}