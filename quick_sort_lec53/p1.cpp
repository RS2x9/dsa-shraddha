// video : https://youtu.be/8MNB0Mba_Dc?si=q4sdAW0T-zfA3qlG
/*
    Quick Sort Algorithm :
    --> based on pivot and partition logic
    --> first pivot (special index) is found and then partitions are done accordingly. 
    --> there are multiple ways to select pivot . we will select the last element as pivot.
    --> now the elements smaller than it will be arranged left to it 
        and the elements larger than it will be arranged to its right .
    --> the elements kept on the left and right are not necessarily to be sorted .
    --> now repeatedly call quick sort to the left and right part
    --> there are some variables which points to different index of the array :
        --> st : starting index of array
        --> end : ending index of array
        --> idx : the elements lying to the left of the pivot element after partition, 
            assigns them the correct position .
            and idx = st-1 ;
                so when st=0 then idx = -1.
        --> j : moves from st to end-1 ; 
            end == pivot point before partition.
        --> when st== end , then we have single element in hand whose further partition can't be done.

        --> now we have to devide the elements around pivot element , so we have to 
            compare every element in the array to pivot element:
                --> any element greater than pivot : increment j
                --> any element lesser than pivot then :
                    --> first of all idx should be a valid index 
                    --> increment idx .
                    --> then swap ( arr[j] , arr[idx] )  ;  this is done to take the smaller values at the idx position .
                        --> in this way all the partition will be done . 
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition( vector<int> &arr , int st , int end )
{
    int idx = st-1 ; 
    int pivot = arr[end];    // last element is pivoted 

    for (int j=st ; j<=end-1 ; j++)    // for now pivoted element is at end index 
    {
        if ( arr[j]<= pivot )
        {
            idx++;
            swap ( arr[j] , arr[idx]);   // moving smaller to left , largger to right 
        }
    }

    // assigning correct position to pivoted element
    idx++;
    swap( arr[end] , arr[idx] );


    return idx;     // this is the correct position of pivot after partition
}

void quicksort( vector<int> &arr , int st , int end )
{
    if (st < end)
    {
        int pividx = partition( arr , st , end );
        quicksort( arr , st  , pividx-1 ) ;    // forms the left part after partition
        quicksort( arr , pividx+1 , end );    // for the right half
    }
}

int main()
{
    vector<int> arr = {12 , 31 , 35 , 8 , 32 , 17 };
    quicksort(arr , 0 , arr.size() -1 );
    cout << "sorted array : \n";
    for (int num : arr)
    {
        cout << num << " "  ;
    }
}

/*
    Time complexity :
    --> in average/pratical  : O( n*logn )  .    
    --> in worst case it's = O(n*n) : 
        --> this is when pivot element is the smallest or largest in array
*/

/*
    space complexity = O(1)
    --> no extra auxillary space used.
*/