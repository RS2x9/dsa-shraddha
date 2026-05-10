/*
    COPY LIST WITH RANDOM POINTERS 
    --> Every node has three things: 
        1.  value 
        2.  next pointer: pointing to the address of next node 
        3.  random pointer: pointing to NULL or random node in linked list
*/
// leet: 138

// setting up own logic 
#include<iostream>
#include<string>
using namespace std;
class node
{
    public:
        node* next;
        int data;
        node(int val)
        {
            data = val;
            next = NULL;
        }
        node(const node &other)
        {
            data = other.data;
            next = NULL;
        }
};
class list
{
    private :
        node* head;
        node* tail;
    public:
        list()
        {
            head = tail = NULL;
        }
        list (const list &other)
        {
            head = tail = NULL;
            node* temp = other.head;
            while( temp != NULL)
            {
                push_back(temp -> data);
                temp = temp-> next;
            }
        }
        void push_back(int val)
        {
            node* newnode = new node(val);
            if(head == NULL) head = tail = newnode;
            else 
            {
                tail -> next = newnode;
                tail = newnode;
            }
        }
        void print()
        {
            if(head == NULL) cout<<"Empty list" << endl;
            node* temp = head;
            while( temp!= NULL)
            {
                cout<< temp -> data << " -> ";
                temp = temp -> next ;
            }
        }
};
int main()
{
    list ll1;
    ll1.push_back(10);
    ll1.push_back(20);
    ll1.push_back(30);
    ll1.print();

    list ll2(ll1);
    ll2.push_back(40);
    cout<<endl;
    ll2.print();
    cout<<endl;
    ll1.print();
    return 0;

}