/*
    maam's approach :-
    --> store the value of person on stack and clear the stack from top in pairs 
    --> among this removed pair , whoever is the celebrity will be pushed back on the stack and gain the same process repeats 
    --> repeat the procedure untill a single candidate comes on the stack 
*/

#include<iostream>
using namespace std  ;
#include<stack>
#include<vector>
#include<algorithm>
int main()
{
    vector<vector<int>> arr = { {0,1,0} , {0,0,0}, {0,1,0} } ;
    // vector<vector<int>> arr = { {0,1,0} , {0,0,0}, {0,1,0} } ;   check the code with this input also 

    stack <int > s;     // stores celebrities 
    for ( int i=0 ; i< arr.size() ; i++)
    {
        s.push(i);
    }

    while ( s.size() >1 )   
    {
        int i= s.top() ;
        s.pop();
        int j= s.top();
        s.pop();
        if ( arr[i][j] == 0)
        {
            // j can't be the celebrity
            s.push(i);
        }
        else if ( arr[i][j] ==1 )
        {
            // i can't be the celebrity
            s.push(j);
        }
    }
    
    // there will be one element at the top for sure 
    int celeb = s.top();            // it may be the celebrity
    
    // let's check whether this is real celebrity or not 
    bool flag = true;       // celebrity exsits 
    for ( int i= 0 ; i  < arr.size() ; i++)
    {
        if( i != celeb)     // don't compare for the same elements 
        {
            if ( arr[i][celeb] == 0 || arr[celeb][i] == 1)
            {
                /*
                arr[i][celeb] == 0;    // i don't know celeb so celeb is not celebrity
                arr[celeb][i] == 1;  // celeb knows somebody so he is not real celebrity
                */  
                
                cout << -1 << endl;         // celebrity not found 
                flag = false;
                break;          // if not used the output repeats 
            }
        }
    }
    if ( flag) cout << celeb ;
    return 0;
}

/*
    --> Time complexity :-
        --> O(n) for all the for loops and one while loop
        --> TC = O(n)

    --> Space complexity:- 
        --> stack was declared 
        --> SC = O(n)
*/
