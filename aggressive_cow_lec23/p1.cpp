/*
    Aggressive Cow Problem:
    --> n stalls where animals are being tied 
    --> an array have different positions of stalls  
    --> C number of cows 
    --> to each cow , assign one stall 
    --> the cows are aggressive , so if they come near they will fight 
    --> return the largest minimum distance :
            --> seperate them far apart as possible 
            --> obtain the minimum distance between them 
            -->  return the largest value among this 

    --> eg : N=5 , arr[]={ 1, 2, 8,4,9}  , C=3

        1  2  3  4  5   6   7   8   9
        c1 c2    c3
        after taking the difference between the cows :
                min of ( 1,2 , 3) = 1  , 1 is the minimum distance for any problem 

        one more combination is :
        1  2  3  4  5   6   7   8   9
           c1    c2             c3
           after taking the difference between the cows :
            min of ( 2 , 4 , 6) = 2 .
        
        one more combination is :
        1  2  3  4  5   6   7   8   9
        c1       c2             c3
           after taking the difference between the cows :
            min of ( 3 , 4 , 7) = 3 .
         
        
        max of ( 1, 2  ,3) =3  , this is our ans.

    --> since the name aggressive , there should be minimum two cows .
        the minimum distance between these cows is 1 , it can't be less than this .
        so the lowest distance between cow =1 ,
        the highest possible minimum distance between cow = largest value in array  -  lowest value in array.
        this is the range of our " ans " , we apply binary search here .
        find the possible values in this range and return the largest value .
    
    --> find mid ( minimum allowed distance ) , it  can possible , not possible 
        eg : arr[] = { 1,2,8,4,9}

            1   2   3   4   5   6   7   8   9
                        c1              c2
            
            lowest=1  , highest=8    , mid =4 .
            for these values c3 can't be placed anywhere when distance between cows should be mid value .\
            so this value of mid is not possible , the right part has to get discarded and "ans" lies in left part.     ( this part is not clear to me )
    --> whenever mid is not possible , go to left part .   
    --> when mid is possible , go to right part   
*/

// this problem is similar to book allocation problem

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

bool isvalid( vector<int> arr , int n , int c , int mid )
{
    int cows =1 ;  // start with one cow 
    int last_pos = arr[0] ;   // tracking the last position of the cow 

    // we wish to place next cow to  next position in arr such that the distance between this cow and arr[0] is >= mid
    for ( int i=1 ; i<n ; i++)
    {
        if ( arr[i] - last_pos >= mid)
        {
            cows++;  // posible position is found , so cow can be placed there 
            last_pos=arr[i];   // new cow postion is known
        }

        if ( cows ==c) return true;
    }

    return false ;      // when cows != c

    // time complexity =O(n)
}

int aggressive( vector<int> arr, int &st , int &end , int n , int c )  // st=min_pos   ,  end= max_pos
{
    int ans=-1;
    sort (arr.begin() , arr.end() );      // time complexity =O(n*logn)
    while ( st<= end )      /// time complexity =O( n * log ( range of ans ))
    {
        int mid = st + (end-st)/2;      // mid is minimum allowed distance 

        if ( isvalid(arr , n , c , mid ) )  // move to right 
        {
            ans =mid ;
            st=mid+1;
        }

        else    // move to left
        {
            end=mid-1;
        }
    }

    return ans;
}   

int main()
{
    int n;  // number of stalls ;
    cout <<" Number of stalls : ";
    cin>> n;
    vector<int> arr(n);   // stores positions of stall
    cout <<"Positions of stall: ";
    int max_pos=INT_MIN;  // max value of position in array
    int min_pos=INT_MAX;  // minimum value of posiyion in array

    for (int i=0 ; i<n ; i++)
    {
        cin>> arr[i];
        max_pos= max(max_pos , arr[i] );
        min_pos = min( min_pos , arr[i] );
    }

    int low=1;   // minimum lowest distance between cows
    int high = max_pos -min_pos;  // maximum lowest distance between cows 
    int c; // actual number of cows 
    cout << "NUmber of cows : ";
    cin>> c;

    cout << aggressive( arr , low , high , n , c) << endl;
    
}