/*
    Priority Queue:
    -->  uses  maxheap , minheap structure , both are complete  binarry trees.
    --> maxheap : largest element is at the top 
    --> minheap : minimum element is at the top
    --> at the top of priority queue : highest priority element is stored 
    -->largest value has highest priority
    --> elements are stored in descending order in tree automatically
*/

/*
    Store as minheap:
    --> this is reverse priority queue
    --> declaration syntax : priority_queue <int , vector<int> , greater<int> > pq ;
    --> pq is variable name 
    --> greater<int> : 
            --> it's functor 
            --> arrange the elements in descending order 
    --> functor : it's function object used to do some task 
*/

/*
    Time Complexities :
    --> top() : O(1)
    --> push : O(logn)
    --> emplace : O(logn)
    --> pop : O(logn)
 
*/

#include<iostream> 
#include<queue>
using namespace std;
int main()
{
    // declare 
    priority_queue <int> pq;
    pq.push(10);
    pq.push(3);
    pq.push(5);
    pq.push(4);

    while (! pq.empty() )
    {
        cout << pq.top() <<" ";
        pq.pop();
    }

    // reverse priority queue
    // declare 
    priority_queue <int ,  vector<int> , greater<int>>  rpq;
    rpq.push(10);
    rpq.push(3);
    rpq.push(5);
    rpq.push(4);

    cout <<" \n rpq: ";

    while (! rpq.empty() )
    {
        cout << rpq.top() <<" ";
        rpq.pop();
    }
}