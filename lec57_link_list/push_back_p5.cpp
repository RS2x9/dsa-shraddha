//  PUSH BACK 
// if LL is empty then we will create a newNode which is pointed by both head , tail 
// if there are already some nodes then after creating a newNode , we have to establish a link between existing node and newNode
// i,e tail->next=newNode means : tail ka jo pointer hai is pointing to newNode 
// tail =newNode   // updating the value of tail 

#include<bits/stdc++.h>
using namespace std;

// making node class for each node 
class Node 
{
    public:
    int data ; // to store data of node 
    Node* next; // pointer to store address
    Node(int val)
    {
        data =val;
        next=NULL;  // always initiate with NULL
    }
};

// making List class
class List
{
    Node* head;   // private 
    Node* tail;   // private 

    public:
    List()  // constructor
    {
        head=tail=NULL;  // if at start no node is present 
    }

    // creating a public function push_back

    void push_back(int val)
    {
        Node* newNode= new Node(val);  // passing the value to Node class

        if (head==NULL)   // when LL has nothing 
        {
            head=tail=newNode;
        }

        else  // when there are some nodes present 
        {
            tail-> next=newNode;
            tail=newNode ;
        }
    }

    // creating a function to print the elements 
    void printll()
    {
        Node*  temp=head;
        while (temp!=0)
        {
            cout <<temp->data <<" -> ";     // printing the data 
            temp =temp-> next;  // updating the address
        }
        cout <<"NULL";
    }
};

int main()
{
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.printll();
}