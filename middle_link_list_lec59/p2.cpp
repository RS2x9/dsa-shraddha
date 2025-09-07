// method -2 : 
/*
    slow fast pointer:
    --> two pointers : slow , fast
    --> slow = head
    --> fast = head
    --> slow will be updated by +1 
        so : slow = slow-> next
    --> fast will be updated by +2
        so : fast = fast -> next -> next.
    --> fast will be updated till it crosses the entire linked list , at this time 
        the slow will be pointing to the middle node .
    --> during even number of nodes , at the end fast points to NULL.
        so we have to go : fast != NULL
    --> during odd  number of nodes , fast will point to the place after NULL, 
        so here we have to point fast to NULL.
        so we have to go : fast-next != NULL
*/

#include<iostream>
using namespace std;
class Node 
{
    public:
    int data ;
    Node* next ;
    Node(int val)
    {
        data = val;
        next =NULL;
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
        Node* newnode = new Node(val);
        if (head ==NULL)
        {
        head = tail = newnode;
        }

        tail-> next = newnode ;
        tail = newnode;
    }

    void printll()
    {
        Node* temp = head;
        if (head==NULL)
        {
            cout << " List is empty" << endl;
        }
        while (temp != NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }

    void middle ()
    {
        Node* slow =head ;
        Node* fast = head;
        while ( fast!=  NULL && fast-> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next ;
        }

        // now fast is pointing to NULL and slow is pointing to midddle node 
        cout << "middle : " << slow -> data  << endl;
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