/*
    The Celebrity Problem :-
    --> Given a 2D array (nxn) such that arr[i][j] =1 means ith person knows the jth person, the task is to find the celebrity.
    --> A celebrity is a person who is known to all but does not knows anyone.
    --> return the index of the celebrity, if there is no celebrity return -1
    
    --> arr = [ [0,1,0] , [0,0,0], [0,1,0] ]
*/

// this question is the premium content on leetcode
// my approach : brute force approach 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
    vector < vector<int>> arr ={ {0,1,0} , {1,0,0}, {0,1,0} } ;
    // vector < vector<int>> arr ={ {0,1,0} , {0,0,0}, {0,1,0} } ;          check this also 
    vector < int> cl(arr.size());       // stores all the celebritis 

    for( int i=0 ; i< arr.size() ; i++)
    {
        cl[i] = i;      // stores the values of all the person
    }

    // check whether row person knows the column person 
    for ( int r=0 ; r< arr.size() ; r++)        
    {
        for ( int c = 0 ; c < arr[0].size() ; c++)
        {
            if( r!= c )
            {
                if ( arr[r][c] == 0) cl[c] = -1 ;   //that person is not celebrity

            }
        }
    }
    // some celebrity may be obtained here 
    
    // if this above selected celebrity knows anybody then he is not a celebrity
    for ( int r=0 ; r< arr.size() ; r++)
    {
        for ( int c = 0 ; c < arr[0].size() ; c++)
        {
            if( r!= c )
            {
                if ( arr[r][c] == 1) cl[r] = -1 ;   

            }
        }
    }
    
    bool flag = false ;
    for ( int i=0 ; i< cl.size() ; i++)
    {
        if (cl[i] != -1) 
        {
            cout << cl[i] << "\t";          // outputs the guy who is celebrity
            flag = true ;
        }
    }
    if ( flag == false) cout << -1 ;        // no celebrity is obtained
    
    return 0;
}