/*
    Insertion Sort:
    --> some part is sorted and other part is not sorted 
    eg : arr[]= { 4 ,1 5,2,3}
        --> 4 is sorted 
        --> current =1 
        --> compare current with all the values in array and place it at it's correct position 
        -->  
*/

#include<iostream> 
#include<vector>
using namespace std;

void insertion( vector<int> &arr , int n )
{
    for (int i=1 ; i<n ; i++)
    {
        int j=i-1; 
        int current =arr[i];  // the element we want to insert

        while ( j>=0 && arr[j]> current )
        {
            arr[j+1]=arr[j]  ;  // shifting 
            j--;    // going backwards 
        }

        arr[j+1] = current ;  // placing the value to it's current position
        // reason:  find the correct spot (where arr[j] <= current),  insert current at arr[j + 1]
    }
}

int main()
{
    int n;
    cout <<"Number  of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout <<" Elements: ";
    for (int i=0 ; i< n; i++)
    {
        cin>>arr[i];
    }

    insertion( arr , n);

    for (int num: arr)
    {
        cout<<num << " ";
    }
}