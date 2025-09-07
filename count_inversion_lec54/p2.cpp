// method -2 
/*
    merge sort :
    --> we will have :
        --> st ; pointing to start of array
        --> end ; pointing to end of array
        --> mid ; pointing to mid of array 
        --> left  half including mid element    , we then sort it 
        --> right half excluding mid element    , we then sort it 

        --> i points to the left part of array
        --> j points to the right part of array
        --> then elements are compared and whoever is smaller is stored in another temporaray array.
            and since i < j for forever , so when arr[i] > arr[j] then the number of count inversion increases .
            also when we find arr[i] > arr[j] then the element right i in the left part of array are simultaneously 
            counted for count inversion . 
        --> also when left and right half was getting sorted then individual halfs can also contribute to inversion count 
            before sorting for the halves .

        .
*/


#include<iostream>
#include<vector>
using namespace std;

int merge ( vector<int> &arr , int st , int mid , int end )
{
    vector<int> temp;
    int i=st , j= mid+1;
    int invcount =0;

    while ( i<=mid && j<=end )
    {
        if ( arr[i] <= arr[j] )
        {
            temp.push_back(arr[i]);
            i++;
        }
        else 
        {
            temp.push_back(arr[j]);
            j++;
            invcount += (mid -i +1 );
        }
    }

    while ( i<= mid )
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx =0 ; idx<temp.size() ; idx++)
    {
        arr[idx+st] =  temp[idx];
    }

    return invcount;
}

int mergesort( vector<int> &arr , int st , int end )
{
    if ( st < end )
    {
        int mid = st + (end -st)/2;
        int leftinvcount= mergesort (arr , st , mid);         // from left half 
        int rightinvcount = mergesort (arr , mid+1 , end);     // from right half 

        int invcount = merge (arr , st , mid , end );

        return leftinvcount+ rightinvcount + invcount ;     // net count inversion
    }

    return 0 ;      // for invalid index 
}

int main()
{
    vector <int> arr = { 6,3,5,2,7 };
    // vector<int>  arr = {  1,3,5,10,2,6,8,9};
    int ans = mergesort( arr, 0 , arr.size()-1);
    cout<< ans<< endl;
}

// time complexity = O(n*logn)
// space complexity = O(n)