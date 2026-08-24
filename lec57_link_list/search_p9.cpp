/*
    Search in Linked List 
*/

#include<iostream>
using namespace std;

class Node
{
    public:
    int data ;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List 
{
    Node* head ;
    Node* tail;
    public:
    List ()
    {
        head = tail =NULL;
    }

    void push_front(int val)        //time complexity=O(1)
    {
        Node* newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else 
        {
            newnode->next = head;
            head = newnode ;
        }
    }

    void search(int key)     // we will return the position of the value 
    {
        if ( head==NULL)
        {
            cout << "OPs! List is empty" << endl;
        }
        int pos=0;
        Node* temp =head;
        cout << "key position: ";
        while ( temp != NULL)
        {
            if (key == temp->data ) 
            {
                cout << pos <<" ";
            }
            temp = temp-> next;     // traverse the temp in linked list
            pos++;
        }
    }

    void printll()
    {
        if (head == NULL)
        {
            cout << " List is empty" << endl;
            return ;
        }

        Node*temp =  head;
        while ( temp!= NULL )
        {
            cout << temp -> data << "->" ;
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    cout << "List :";
    ll.printll();
    ll.search(5);

}