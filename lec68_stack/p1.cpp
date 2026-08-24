/*
    --> During the recursion call, the data got stored on stack, this is stack data structure 
    --> It's last in first out data structure 
    --> pop operation deletes the top data stored on stack
    --> there are 3 functions executed in O(1) time complexity:
        --> push() , pop() , top()
        --> because 
            --> <vector>.push_back() is done in constant time 
            --> <vector>.pop_back() is done in constant time 
            --> <vector>.push() is done in constant time 
*/

/*
    --> implementatio of stack using array/vector
    --> code for both will be same 
    --> array has size limitations and vector don't have size limitations 
    --> create a vector and implement the behaviour of vector of stack behaviour 
    --> keep track of the top element
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
class stack
{
    public :
        vector<int> v ;
        void push(int val)      // stores the value on the top of the previous stored value 
        {
            v.push_back(val);
        }
        void pop()              // delets the top value 
        {
            v.pop_back();
        }
        int top()               // returns the top element
        {
            return v[v.size() -1];
        }
        bool empty()            // checks whether the stack is empty or not 
        {
            return v.size() == 0;
        }
};
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty())
    {
        cout << s.top() << "\t";
        s.pop();
    }
}