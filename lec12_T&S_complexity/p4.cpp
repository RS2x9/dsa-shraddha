// selection sort
// time complexity : O(n^2) ; because of two nested loop
#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int n ;
    cout<< "Enter number of elements:";
    cin>>n;
    vector<int> arr(n);
    for( int i=0 ; i<n ; i++)
    {
        cout<<"Enter "<<i+1<<" st value: ";
        cin>>arr[i];
    }

    // algo
    for( int i=0 ; i<n-1 ; i++)
    {
        int min =i;     // stores min. index of the min. value found during traversing
        for ( int j=i+1 ; j<n ; j++)
        {
            if ( arr[j] < arr[min]) min =j;
        }
        if ( min!= i) swap(arr[i] , arr[min]);      // if block is introduced to minimise extra processing
    }

    for ( auto iter: arr)
    {
        cout << iter<< "\t";
    }
    return 0;
}