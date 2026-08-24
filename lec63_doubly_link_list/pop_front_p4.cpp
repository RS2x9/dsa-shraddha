#include<iostream>
using namespace std ;
class node
{
    public:
        int data ;
        node* next ;
        node* prev;
        node(int val)
        {
            data = val;
            next = prev = NULL;
        }
};
class doubly
{
    private:
        node* head ;
        node* tail;
    public:
        doubly()
        {
            head =  tail = NULL;
        }
        void push_back(int val)
        {
            node* newnode = new node(val);
            if(head == NULL) head = tail = newnode ;
            else 
            {
                tail -> next = newnode ;
                newnode -> prev = tail ;
                tail = newnode;
            }
        }
        void pop_front()
        {
            node* temp = head;
            head = head -> next;
            temp -> next = NULL;
            head -> prev = NULL;
            delete temp;

        }
        void print()
        {
            if( head == NULL) cout<< "Nothing here !!" << endl;
            else 
            {
                node* temp = head;
                while (temp != NULL)
                {
                    cout << temp -> data << " -> ";
                    temp = temp -> next;
                }
                cout << "NULL" << endl;
            }
        }
};
int main()
{
    doubly value ;
    value.push_back(10);
    value.push_back(20);
    value.push_back(30);
    value.push_back(40);
    value.pop_front();
    value.print();
    return 0;
}