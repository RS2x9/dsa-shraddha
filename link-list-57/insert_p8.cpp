/*
    Insert in middle of Linked List
    --> synatx:   insert( <value> , <position> )
    --> eg:  1      2       3
            head            tail

            --> we want to insert value =4 at position 1 .
            --> connection will be made from node 1st to 2nd to 3rd .
            --> the existing connection between the nodes storing the values 1,2 should be broken. 
            --> to do all these we have to know which node comes before position-1 .
            --> temp will store the adress pointer of poisition -1 node .
            --> establish the connection between the node to be inserted and temp->next.
            --> establish the connection between position-1 node and the node which has to be inserted .
                Doing this step , the established connection between the nodes storing the values 1,2 will
                 automatically get broke down.
*/

#include<iostream>
using namespace std;

class Node
{
    public:
    int data ;      
    Node* next;         // stores the address of next node 

    Node (int val)
    {
        data =val;
        next = NULL;
    }
};

class List 
{
    Node* head;
    Node* tail;
    public: 
    List()
    {
        head =tail=NULL;
    }

    void push_front(int val)
    {
        Node* newnode = new Node(val);
        if ( head == NULL)
        {
            head =tail = newnode ;
        }
        else 
        {
            newnode -> next = head;
            head = newnode ;
        }
    }

    void insert( int val , int pos)     // pos : the postion where node has to be inserted 
    {
        if (pos < 0) cout << " Invalid position" << endl;
        if (pos==0) push_front(val);

        // for rest positions 
        Node* temp = head ; 
        for ( int i=0 ; i< pos-1 ; i++)
        {
            if ( temp == NULL) 
            {
                // it means the position is given out of linked list
                cout << "Invalid linked list" << endl;
            }
            temp = temp-> next;    // will store the address of node at position -1
        }

        Node* newnode = new  Node (val) ;      // node made for storing the val
        newnode -> next = temp->next;       // newnode pointer stores the address of node at position+1
        temp->next =newnode ;       // connection established between node position-1 and newnode 
    }

    void printll()
    {
        if ( head== NULL)
        {
            cout << "List is empty" << endl;
            return ;
        }
        Node* temp = head;
        while ( temp != NULL)
        {
            cout << temp-> data << "-> ";
            temp=temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.insert(10,1);
    ll.printll();
}