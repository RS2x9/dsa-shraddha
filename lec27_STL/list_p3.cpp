/*
    List:
   --> sequential containers  
   --> internally implemented as doubly linked list : 
        --> elements can be pushed to list from both the sides 
        --> elements can be pop back from both the sides 
        --> similarly implace_back and implace_front 
    
    --> size() , earse() , clear() , begin() , end() , rbegin() ,
        rend() , insert() , front() , back()   exists in list
*/

#include<iostream>
#include <list>
using namespace std;
int main()
{
    // declaring list
    list<int> l;
    l.push_back(1);   // adds elements at the back 
    l.push_back(2);
    l.push_front(5);       // adds element at the front 
    l.push_front(10);
    l.emplace_back(20);     // adds elements at the back
    cout << " list : ";
    for (int num : l)
    {
        cout << num << " ";
    }

    l.pop_back() ;    // removes element from end 
    l.pop_front() ;    // removes element from front 
    cout << "\n list : ";
    for (int num : l)
    {
        cout << num << " ";
    }

    // initiallising list 
    list<int> l2= { 10,20,30};
    cout << "\n list2: ";
    for (int num : l2)
    {
        cout << num << " ";
    }
}