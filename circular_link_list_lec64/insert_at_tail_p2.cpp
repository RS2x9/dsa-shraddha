#include<iostream>
using namespace std ;
class node
{
    public:
        int data ;
        node* next;
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
            head = tail = NULL;
        }
        void insert_at_tail(int val)
        {
            node* newnode = new node(val);
            if ( head == NULL) 
            {
                head = tail = newnode;
            }
            else
            {
                tail -> next = newnode;
                tail = newnode;
            }
            tail -> next = head ;
        }
        void print()
        {
            if ( head == NULL) return ;
            else 
            {
                node* temp = head -> next ;
                cout << head -> data << " -> " ;
                while ( temp != head )      // tail - next = head 
                {
                    cout << temp -> data << " -> ";
                    temp = temp -> next ;
                }
                cout << temp -> data << " -> " << "It's circular bro !! " <<endl;       // temp == head
            }
        }
};
int main()
{
    circular value ;
    value.insert_at_tail(10);
    value.insert_at_tail(20);
    value.insert_at_tail(30);
    value.print();
}