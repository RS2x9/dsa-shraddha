/*
    Deque ( Double Ended Queue) :-
    --> elements can be pushed from back and also to front 
    --> Elements can be popped from both back and front 
    --> we can fetch the front and back element 
*/

#include<iostream>
using namespace std ;
#include<deque>
int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(40);
    
    cout << d.front() << "  " << d.back() << endl ;
    d.pop_front();
    cout << d.front() << "  ";
    d.pop_back();
    cout << d.back() << endl;
}