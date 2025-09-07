/*
    Stack:
    --> LIFO : last in first out 
*/

/*
    Time Complexities :
    --> top() : O(1)
    --> push : O(logn)
    --> emplace : O(logn)
    --> pop : O(logn)
 
*/

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    // declare
    stack<int> s;
    // pushing elements on stack 
    s.push(1);
    s.push(2);
    s.push(3);

    cout <<"size:"<<s.size();
    cout <<"\n";
    while(!s.empty() )
    {
        cout <<s.top();   // returns the topmost element on stack
        cout <<" ";
        s.pop();   // deletes the topmost element on stack
    }
    cout<<"\n is stack empty:" << s.empty() ;  // checks whethere stack is empty or not 

    s.push(10);
    s.push(20);
    s.push(30);
    // swap() : swaps the values of two stacks 
    stack<int> s2;
    s2.swap(s);  // s2 gets the element of s and s becomes empty

    cout << " \n size of s:"<< s.size()<<endl;
    cout << "  size of s2:"<< s2.size()<<endl;
    cout << " s2: \n";
    while (!s2.empty() )
    {
        cout << s2.top() <<" ";
        s2.pop();
    }
}
