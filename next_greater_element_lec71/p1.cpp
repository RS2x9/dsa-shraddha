/*
    Next Greater Element:
    --> The element nextt to the current index which is immdediately greter than the elemnt at ith index 
        and is the closest value near to the value at current index 
    --> steps to solve :
        --> start in decresing order
        --> create one ans vector    
        --> if there is no greater element then store -1 
        --> in any condition ,push the current element on stack
        --> now iterator will be updated
        --> compare the current element with the element on stack 
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace  std ;
int main()
{
    vector<int> v={6,8,0,1,3};
    stack<int> s;
    vector<int> ans(v.size(),0);
    for ( int i= v.size()-1 ; i>=0 ; i--)
    {
        while ( s.size() > 0 && s.top() <= v[i])
        {
            s.pop();    // if the element on the top of the stack is not greater than current element then pop the values from stack untill greater element is found
        }
        if (s.empty()) 
        {
            ans[i]= -1 ;
            // beacause there is no greater element to the right of current element
        }
        else 
        {
            ans[i] = s.top();
            // stack is not empty but top element is greater than current element
        }
        
        s.push(v[i]);       // push the current element on stack 
    }
    for( auto it : ans)
    {
        cout<< it << "\t";
    }
}

// Time complexity = o(n)
// space complexity = o(n)