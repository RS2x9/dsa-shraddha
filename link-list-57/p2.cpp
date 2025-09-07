// youtube link :   https://youtu.be/LyuuqCVkP5I?si=8lVkP9-HMRG9XcDM
// exapmle 
#include<bits/stdc++.h>
using namespace std;


// making individual node class
class Node 
{
    // make all the data public , so we using " public " keyword
    public:
    int data ;      // data storing variable 
    Node* next ;    // pointer to store address of next node 

    // creating a constructor 
    Node(int val)   // we will get a value : val
    {
        data =val;      // we will store that value in the data 
        next=NULL ; // always initialize with NULL
    }

};
// above we have made individual node classes : the individual nodes in linked list will become the objects 

// to compile all the nodes we need one more class : can be called as linked list class , list class 
// in linked list class , two things to store : Head , tail

class List  // l is capital in List keyword
{
    Node* head;     // private because we won't be passing anywhere 
    Node* tail;     // private because we won't be passing anywhere 

    public:
        List()  // constructer is created
        {
            head=tail=NULL;   // starting linked list has no node , so NULL is stored 
        }
};

// with the help of two classes , we have created linked list


int main()
{

}