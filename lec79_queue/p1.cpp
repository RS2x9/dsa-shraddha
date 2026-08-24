/*
    QUEUE:-
    --> It's FIRST IN FIRST OUT data structure 
    --> It has front and rear end 
    --> There are 3 operations performed:-
        --> push() : when element has to be added they are pushed to the rear part 
            --> This is also known as enqueue : adding data in queue
        --> pop() : elements are popped from the front 
            --> This is also known as dequeue : removing data from queue 
        --> front() : returns the element stored at the front 

        --> ALL the 3  operation's TC = O(1) i,e constant time complexity
    --> This will be implemented using Linked List 
    --> This is also known as single ended queue 
*/

#include<iostream>
using namespace std ;
class node 
{
    public :
        int data;
        node* next;
        node(int val)
        {
            data = val;
            next = NULL;
        }
};
class Queue
{
    private :
        node* head;
        node* tail;
    public :
        Queue()
        {
            head = tail = NULL;
        }
        void push( int val)     // pushes at the rear part 
        {
            node* newnode =  new node(val);
            if ( empty())       // head == NULL
            {
                head = tail = newnode;
            }
            else
            {
                tail -> next = newnode ;
                tail = newnode;
            }
        }
        int front()        // returns front element
        {
            if ( empty()) cout << "Queue is empty!!" << endl;
            return head -> data ;
        }
        void pop()      // removes the front node 
        {
            node* temp = head -> next;
            head -> next = NULL;
            head = temp;
        }
        bool empty()
        {
            if ( head == NULL) return true ;
            else return false ;
        }
};
int main()
{
    Queue q ;
    q.push( 10);
    q.push(20);
    q.push(30);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
}