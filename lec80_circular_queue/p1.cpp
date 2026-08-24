/*
    Circular Queue:-
    --> It has all the properties of Queue
    --> It has fixed capacity, so we can use arrays for this.
    --> generally the rear node is connectd to the front node  
    --> Implementation:-
        --> push() , pop() , front() will be used in O(1) time complexity
        --> Use two pointers f, r that represents front and rear
            --> Initially store 0, -1 in them as their indexes
        --> we will keep track of the current size to know how many spaces are left 
        --> elements will be added at the rear part, so for this rear pointer has to be incremented first because 
            elements can't be added at -1 index.
        --> Example:-
            --> pop() one element then increse r pointer , at the end of the array if r is incresed further to 
            perform any push() operation then r pointer will point to an invalid index so always increase the pointers using:-
                --> r = (r+1) % cap ;    cap is capacity
                --> f = ( f+1) % cap
                    This way the new element will get pushed at the front i,e at the correct position
*/

#include<iostream>
using namespace std ;
class circularqueue
{
    public :
    int* arr;       // pointer variable to int
    int currsize =0;       // keeps track of current size
    int cap;            // capacity of array
    int f ;             // front pointer
    int r;              // rear pointer
    circularqueue(int size)
    {
        cap = size ;
        arr = new int[cap];     // allocates an array of cap integers on heap
        // this is dynamic allocation beeacuse the size of the array can be declared anything
        
        f = 0;
        r =-1;
    }
    void push( int data )
    {
        if (currsize == cap )
        {
            cout << "CQ is full" << endl;
            return ;
        }
        r = ( r+1) % cap;       // the actual real index where the data will be stored 
        arr[r] = data ;     // pushing back the data
        currsize++ ; 
    }
    void pop()
    {
        if ( empty())
        {
            cout << "Already empty" << endl;
            return ;
        }
        else 
        {
            f = ( f+1) % cap;   // the 1st value becomes irrelevant to us 
            currsize-- ; 
        }
    }
    int front()
    {
        if ( empty())
        {
            return -1 ;
        }
        //else if ( currsize == cap) return arr[0];
        else return arr[f];
    }
    bool empty()
    {
        return currsize == 0;
    }
    void print()
    {
        cout<<"\n" << "Elements:";
        for ( int i=0 ; i< cap ; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};
int main()
{
    circularqueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    
    cout << cq.front() << endl;
    
    cq.pop();
    cout << cq.front() << endl;
    
    cq.push(4);
    cq.print();         // checking which elements exsits 
    
    while( !cq.empty())     // elements of circularqueue
    {
        cout << cq.front() << "\t";
        cq.pop();
    }
}  