/*
    Largest rectangle in histogram:-
    
    Brute Force Approach:-
    --> use two for loops 
    --> ans =0 ; can't be negative 
    --> current_area = height * width
        --> height is known , but width calculation should be focused 
        --> don't calculate those widths whose heights are less than the current height 
        --> to calculate width move leftwards and obtain L 
            --> find left nearest smallest valued array
            --> start traversing from left end
            --> initialise one array where indexes of the smaller element should be stored because width calculations 
                are done on indexes 
        --> same operartion rightward 
            --> find next nearest smaller element 
            --> start traversing  from right end 
            --> initialise one array where indexes of the next smaller element should be stored because widht calculations 
                are done on indexes
        --> width = r-L-1 ;         -1 is because of right boundary is is before r
    --> ans = max( max , current_area)
*/
// leetcode : 84

#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std ;
int main()
{
    vector<int> ht = {2,1,5,6,2,3};
    stack<int> s;
    
    // next smaller element index array 
    vector <int> right(ht.size());
    for ( int i= ht.size() -1 ; i>=0 ; i-- )
    {
        while ( s.size() >0 && ht[i] <= ht[s.top()] )       // <= is taken beacuse in histogram eqaul heights could be there 
        {
            s.pop();
        }
        if (s.empty()) right[i] = ht.size();        // it means it is the smallest ffrom it's position towards right 
        else right[i] = s.top();
        s.push(i);
    }
    
    while(!s.empty())
    {
        s.pop();        // clearing stack 
    }

    // prev smaller element index array 
    vector<int> left(ht.size());  
    for ( int i=0 ; i< ht.size() ; i++)
    {
        while ( s.size() >0 && ht[i] <= ht[s.top()])        // <= is taken beacuse in histogram eqaul heights could be there 
        {
            s.pop();
        }
        if ( s.empty()) left[i] = -1 ;      // if ht.size() is used, it will go out of bounds 
        else left[i] = s.top();
        s.push(i);
    }
    
    int ans =0;
    for ( int i=0 ; i< ht.size() ; i++)
    {
        int current_area = ht[i]*(right[i] - left[i] -1);
        ans = max(ans , current_area);
    }
    cout << ans ;
}