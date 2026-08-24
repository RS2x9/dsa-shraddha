#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node* next ;
        node(int val)
        {
            data = val;
            next = NULL;
        }
};
class circular
{
    private:
        node* head;
        node* tail;
    public:
        circular()
        {
            head = tail = NULL;
        }
        void insert_at_tail(int val)
        {
            node* newnode = new node(val);
            if ( head == NULL) head = tail = newnode;
            else{
                tail -> next = newnode ;
                tail = newnode ;
            }
            tail-> next = head ;
        }
        void delete_at_tail()
        {
            node* temp = tail;
            node* prev = head;      // stores the node before the tail 
            while( prev -> next != tail) prev = prev -> next ;
            tail = prev;
            tail -> next = head ;
            temp -> next = NULL;
            delete temp;
        }
        void print()
        {
            if (head == NULL) return ;
            else 
            {
                node* temp = head -> next;
                cout << head -> data << " -> ";
                while ( temp != head)       // tail -> next = head 
                {
                    cout << temp -> data << " -> ";
                    temp = temp -> next;
                }
                cout<< temp -> data << " -> " << "It's circle bro !!" << endl;      // temp == head
            }
        }

};
int main()
{
    circular value;
    value.insert_at_tail(10);
    value.insert_at_tail(20);
    value.insert_at_tail(30);
    value.insert_at_tail(40);
    value.print();
    value.delete_at_tail();
    value.print();
    return 0;

}