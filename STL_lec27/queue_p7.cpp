/*
    Queue:
    --> FIFO: first in first out 
    --> it has front part and rear part 
    --> elements are pushed from rear part 
    --> elements exit front part
*/

/*
    Time Complexities :
    --> top() : O(1)
    --> push : O(1)
    --> emplace : O(1)
    --> pop : O(1)

    --> O(logn ) : it's because of formation of trees 
*/

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while( ! q.empty() )
    {
        cout << q.front() <<" ";   // gives the first element to queue
        q.pop() ; // deleted the first element
    }
    cout <<" \n size: "<< q.size();

     q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // swapping two queue
    queue<int> q2;
    q2.swap(q); 
    cout <<" \n q2: ";
    while (!q2.empty() )
    {
        cout << q2.front() << " ";
        q2.pop();
    }
}