// push_front ( < data > )
/*

--> at start linked list is empty 
--> head , tail both stores NULL 
--> to store data in LL , we need to create node which is oviuosly both head and tail of LL
--> 

*/

// example : when LL is empty & we are creating a new one 

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
   Node* head;
   Node* tail;
   public:
   List() 
   {
    head=tail=NULL;
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
   }
};


// creating LL in main()
int main()
{
    List ll;
}