/*
    Stock span :
    --> span = maximum number of consecutive days  befor today where price < = today's price 
        --> this also includes current day 
    --> prevhigh: that previous  day immediately  greater than current day
    --> span = current value index - prevhigh index 
    --> we will store the index of prevhigh on stack
    --> for 0th element , the stack will be empty 
    --> when the elements are arranged in descending order , then also the stack will be empty and the value of span = i+1
    --> whatever value lesser than  the current valuw will be popped from stack 
    --> store the current valuei index on stack before updating the current value 
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std ;
int main()
{
    vector<int> price = {100,80,60,70,60,75,85};
    stack<int> s;       // stack on which the prevhigh values index will be stored 
    vector<int> ans(price.size() , 0) ;        // segmentation fault without declaring size

    for( int i=0 ; i< price.size() ; i++)       
    {
        while( s.size() >0 && price[s.top()] <= price[i])
        {
            s.pop();        // previous value is leser than current value 
        }
        if ( s.empty())
        {
            ans[i] = i+1;   
        }
        else 
        {
            ans[i] = i-s.top();
        }
        s.push(i);      // current index pushed on stack 
    }

    cout << "Span elements:"<< endl;
    for ( auto it : ans)
    {
        cout << it << "\t";
    }
    return 0;
}

/*
    Time complexity:
    --> the while loop inside for loop runs for limited number of times 
    --> TC = O(n+n) = O(n)

    Space Complexity = O(n) because of stack 
*/