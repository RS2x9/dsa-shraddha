/*
    > Implementation of stack using linked list
    --> make the top element as head pointer of linked list, so we will do push_front()
*/
#include<iostream>
#include<list>
using namespace std;
class stack
{
    list<int> ll;   // from stl: directly creates linked list
    public :
    void push(int val)
    {
        ll.push_front(val);
    }
    void pop()
    {
        ll.pop_front();
    }
    int top()
    {
        return ll.front();
    }
    bool empty()
    {
        return ll.size() ==0;
    }
};
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty())
    {
        cout << s.top() << "\t";
        s.pop();
    }
    return 0;
}