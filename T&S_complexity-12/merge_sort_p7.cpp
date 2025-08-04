/*
        Merge sort :
        --> video link for code : https://youtu.be/cQDtOBTy7_Y?si=ScO2TaGr4HcF3nfq
        --> we sort the array in ascen or dec order 
        --> works on Divide and Conquer technique  
        --> divide the array repeatedly in two equal parts , we wish to find the mid part of the array 

        --> then again divide these divided array in two equal parts 
        --> do this utill , get the individual elements
        --> Merge these divided parts in a sorted array after backtracking 

        --> we have to always track start , end part to find mid , because array is repeadtly getting divided 
        --> the left half array goes from start to mid 
        --> the right half array goes  from mid+1 to array_size-1 
        ---> when we reach the individual elements , that is start=end 

        --> on doing backtrcking with sorting when we reach stage when we get two equal halves,
            we take two pointers both at the starting of the two halves and we will
            compare the values .
        --> we then take a temptorary array where we store sorted array
        --> after comparing the values at the start of the halves , we then increase the pointer acording the values compared.
            and again compare both and store the smallest one in the temporary array.
       
        --> copy  the temporary array to original array
*/

// the code is not properly understood 

#include<iostream>
#include<vector>
using namespace std;

void merge( vector<int> &arr , int st , int mid , int end)
{
    vector<int> temp;
    int i=st ;   // starting from left half 
    int j=mid+1;    // strating from right half 
    
    while ( i<= mid && j<=end)
    {
        if (arr[i] <= arr[j] )
        {
            temp.push_back(arr[i]);
            i++;
        }

        else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // copy left half to temp arr ubtill all gets copied 
    while (i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // copy right half of arr to temp untill all the elements get copied 
    while (j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // store the values from temp array to original array 
    for ( int idx=0 ; idx < temp.size() ; idx++ )
    {
        arr[idx+st] = temp[idx] ;
    }
}

void mergesort( vector<int> &arr , int st , int end)      // dividing the array 
{
    if (st<end)
    {
        int mid =st + (end-st)/2;      // this formula is used to avoid overflow during large values of end

        mergesort(arr , st , mid) ;    // left half 
        mergesort ( arr , mid+1 , end)   ;    // right half 

        merge (arr , st , mid , end);
    }
}

int main()
{
    vector <int> arr={12 , 31 , 35 , 8 , 32 , 17};

    mergesort( arr , 0 , arr.size()-1);    // 0: start index    , arr.size()-1 : end index

    // printing the sorted values 
    for (int num : arr)
    {
        cout <<num <<" ";
    }
}

// complexity is also not properly understood
/*
        TC in merge step (not merge sort ) is : O(n+n) = O(n)
        SC=o(n)
*/