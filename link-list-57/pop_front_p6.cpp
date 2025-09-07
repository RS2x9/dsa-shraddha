/*
            pop_front 
            --->it will delete the very first element , just disconnect the connection between first node and second node 
                and point the head to next node .
            --->the connection which we want to delete , we store that at some temporary place .
            -->the nodes are created dynamically , we will delete them dynamically with keyword : delete.
            
*/ 

#include<iostream>
using namespace std;
class Node 
{
    public:
    int data ;      // stores data 
    Node* next;     // stores address of next node 

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node* head;     // private 
    Node* tail;     // private 
    public: 
    List ()    // contructor 
    {
        head =tail =NULL;       // if at start no node is present 
    }

    // creating public function push_back()

    void push_back(int val)
    {
        Node* newnode = new Node(val);      // passing the value to Node class

        if (head==NULL)     // when list has nothing 
        {
            head = tail = newnode ;
        }
        else        // when list contains some nodes 
        {
            tail -> next = newnode ;
            tail = newnode ;
        }
    }

    // ccreating a public function pop_front 
    void pop_front()
    {
        if ( head ==NULL)  // list has nothing 
        {
            cout << " List is already empty" << endl;
            return ;
        }

        Node*  temp ;       // this is going to hold the address of node to be  deleted 
        temp = head;
        head = head-> next;     // the 2nd node is the new head pointer as 1st is going to be deleted
        temp =NULL;
        delete temp;
    }

    // public function to print the data stored in nodes 
    void printll()
    {
        Node* temp=head;
        while (temp !=NULL)
        {
            cout << temp-> data << " ";     // fetching the data and printing it 
            temp = temp-> next;     // updating the address
        }
    }
};

int main()
{
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    ll.pop_front();
    ll.printll();
}