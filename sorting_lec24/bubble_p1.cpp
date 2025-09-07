/*
    BUbble sort :
    --> compare the elements for n-1 times 
    --> compare adjacent elements 
    -->  swap the larger one to right 
    --> time complexity = O(n*n)
    --> comparing  1st time pushes the largest element to last 
    --> comparing 2nd time pushes the second largets element at n-2 index 
    --> and so on....

    --> eg: arr[]={ 4,1,5,2,3}
        1st for loop     |  comparisions required
        i=0              |  4
        i=1              |  3
        i=2              |  2
        i=3              |  1
        i=i              |  n-i-1
    
    --> for any array , time complexity=o(n*n)
    --> using flags like used  in code can optimize the solution in case of sorted array
*/

#include<iostream> 
#include<vector>
using namespace std;

void bubble( vector<int> &arr , int n)
{
    bool isswap=false;  // flag : represents no swapping is required 
    for (int i=0 ; i<n-1 ; i++)  // loop runs for this much because n-1 gets sorted 
    {
        for (int j=0 ; j<n-i-1 ; j++)
        {
            if ( arr[j]> arr[j+1] ) swap( arr[j] , arr[j+1] );
            isswap=true ;  // swapping is done 
        }
        if (!isswap)  // isswap=false i,e array is already sorted , so we came out 
        {
            return ;
        }
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

    bubble(arr,n);

    for ( int num : arr)
    {
        cout << num <<" ";
    }
}