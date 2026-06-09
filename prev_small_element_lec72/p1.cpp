/*
    previous smaller element:-
    --> this element will be smaller than the current element and will lie on the left side of current element 
    --> this problem is just the mirror of "next greater element" problem
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    vector<int> v = { 3,1,0,8,6};
    stack<int> s;
    vector<int> ans(v.size());      // initialse ans vector with the size of v 
    for ( int i=0 ; i< v.size() ;i++)       // traversing from left to right
    {
        while ( s.size() >0 && v[i] <= s.top()) 
        {
            s.pop();
            // if there is some element on the top of the stack it is larger than the current element then 
            // it should get removed from the top
        }
        if ( s.empty()) 
        {
            ans[i] = -1;
            // empty stack means there is no prev smaller element for the current eleemnt 
        }
        else 
        {
            ans[i]= s.top();        // prev smaller element is found
        }

        s.push(v[i]);       // push the current element on top of stack for comparision
    }
    for ( auto it : ans)
    {
        cout << it << "\t";
    }
}