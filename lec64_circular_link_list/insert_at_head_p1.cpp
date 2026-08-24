/*
    Circular Linked List:
    --> tail -> next = head
*/
// insert at head 
#include<iostream>
using namespace std;
class node
{
    public:
        int data ;
        node* next ;
        node(int val)
        {
            data = val;
            next = NULL;
        }
};
class circular
{
    private :
        node* head ;
        node* tail;
    public:
        circular()
        {
            head  = tail = NULL;
        }
        void insert_at_head(int val)
        {
            node* newnode = new node(val);
            if ( head == NULL) 
            {
                head = tail = newnode;
            }
            else 
            {
                newnode -> next = head;
                head = newnode;
            }
            tail -> next = head ;       // for both the cases 
        }
        void print()
        {
            if ( head == NULL) return ;
            else
            {
                node* temp = head -> next ;
                cout << head -> data << "-> ";
                while (temp != head)        // tail -> next = head 
                {
                    cout << temp -> data << " -> ";
                    temp = temp -> next ;
                }
                cout << temp -> data << " -> " << "It's circular bro!!";      // temp == head
            }
        }
};
int main()
{
    circular value ;
    value.insert_at_head(10);
    value.insert_at_head(20);
    value.insert_at_head(30);
    value.print();
}