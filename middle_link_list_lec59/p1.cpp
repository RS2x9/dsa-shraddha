// leetcode -876
/*
    Middle of the link list :
    --> during odd number of elements , return the pointer of the middle element.
    --> during even number of elements , there are two mid elements , return the pointer of the second element.
    -->
*/

#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;       // stores  values of nodes 
    Node* next;     // address of next node 

    Node(int val)
    {
        data =val;
        next=NULL;
    }
};

class List
{
    Node* head;
    Node* tail;
    public:
    List()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node* newnode =  new Node(val);
        if ( head == NULL)
        {
            head = tail =newnode ;
        }

        tail-> next = newnode ;
        tail = newnode ;
        count++;
    }
    
    int count =0;   // counts total number  of nodes 
    void printll()
    {
        if( head == NULL) cout << " List is empty "  << endl;
        Node* temp = head;
        while (temp != NULL )
        {
            cout << temp -> data << " " ;
            temp = temp -> next ;
    
        }
        cout << "NULL" << endl;
    }
    
    void middle ()
    {
        Node* temp =head;
        for (int i=0 ; i< count/2  ; i++)
        {
            temp =temp -> next ;
        }

        // now temp stores the address pointer of required node 
        cout << "middle value: " << temp-> data ;
    }
};

int main()
{
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.printll();
    ll.middle();
}