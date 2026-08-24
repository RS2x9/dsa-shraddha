#include<iostream>
using namespace std ;
class node 
{
    public:
        int data ;
        node* next ;
        node* prev;
        node(int val)      // shallow copy constructor for node 
        {
            data = val;
            next = NULL;
            prev = NULL;
        }
};
class doubly
{
    private :
        node* head;
        node* tail;
    public :
        doubly()        // shallow copy constructor for list
        {
            head = tail = NULL;
        }
        void push_front(int val)
        {
            node* newnode = new node(val);
            if (head == NULL) head =  tail = newnode;
            else
            {
                head -> prev = newnode;
                newnode -> next = head ;
                head = newnode ;
            }
        }
        void print()
        {
            if ( head == NULL) cout << "Nothing here !!!" << endl;
            else 
            {
                node* temp = head;
                while (temp != NULL)
                {
                    cout << temp -> data << " -> " ;
                    temp = temp -> next;
                }
                cout << "NULL" << endl;
            }
        }
};
int main()
{
    doubly value ;
    value.push_front(10);
    value.push_front(20);
    value.print();
    return 0;
}