/*
    pop_back
    --> removes the elements from end 
    --> 2nd last  node there where the pointer of next ka next is NULL
    --> 2nd last node pointer has to point to NULL
    --> two conditions are correct:
        -->   (temp -> next ==tail)
        -->   ( temp -> next -> next == NULL)
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

    public :
    List()
    {
        head = tail = NULL;     // if at start no node is present
    }

    void push_back(int val)
    {
        Node* newnode = new Node(val);

        if (head==NULL)
        {
            head = tail =newnode ;
        }

        else 
        {
            tail-> next = newnode;
            tail =newnode;
        }
    }

    void pop_back()
    {
        if (head==NULL)
        {
            cout << "List is empty" << endl;
            return ;
        }

        Node* temp =head;
        while ( temp -> next != tail)
        {
            temp = temp-> next;
        }

        // now temp is pointing to 2nd last node 
        temp-> next =NULL;    // pointing the 2nd last node to NULL
        delete tail ;       // deleting the node pointing to NULL . tail variable is getting deleted
        tail =temp;     // pointer tail pointing to NULL now 
    }

    void printll()
    {
        Node* temp = head;
        while (temp!= NULL)
        {
            cout << temp -> data << " -> ";    // fetches the values stored in node and prints it 
            temp = temp-> next; 
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    ll.pop_back();      // node storing the value 4 will get deleted 
    ll.printll();

    ll.pop_back();      // node storing the value 3 will get deleted 
    ll.printll();
}