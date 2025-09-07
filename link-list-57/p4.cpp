// example : when LL contains something 
// head is not NULL in this case
// we wish to do push_front( < value > )  : we will create a new node in front of existing LL 
// we have to develope a connection between new node and existing node 
// so we point head from new Node towards existing node
// first of all , head should point to new Node  i.e head=newNode

#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int data ;
    Node* next ; // pointer to store address
    Node(int val )
    { 
        data=val;
        next=NULL;
    }
};


class List
{
   Node* head;      // private 
   Node* tail;      // private
   public:
   List()
   {
        head=tail=NULL;  // if at start  no node is present 
   } 

   // creating a public function 
   void  push_front(int val)
   {
    // first we have to create a node 
    Node* newNode = new Node(val);  // creates dynamic object
    /*
    method  -2
    Node newNode(val) ; 
    this is static and will get deleted  after we go out of this   function 
    
    */ 

    if (head==NULL)  // LL contains nothing
    {
        head=tail=newNode;
        return ;
    }

    else 
    {
        newNode -> next = head; // means : deferencing the newNode pointer and assign it's next value to head
        head = newNode;  // updating our head value 
    }
   }

   /*
    to print linked list we will create a temporary pointer whose initail value 
    will be same as head . this temp then will traverse the LL. we will stop when temp value will be NULL.

    reason for temp: we can only traverse in forward direction in LL , so we preserve the value of head for future use (if any) 
    */

    // creating a function to print LL elements 
    void printll()
    {
        Node* temp=head;
        while (temp!=NULL)
        {
            cout << temp -> data <<" -> ";  // printiing the value 
            temp=temp->next;    // giving the address of next node to temp pointer

        }
        cout <<"Null"<<endl;
    }
};

// creating LL in main()
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);       // this wil get infront of node storing value =1 
    ll.push_front(3);       // this wil get infront of node storing value = 2

    ll.printll();

}