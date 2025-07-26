// linked list(LL) : it is also a linear data structure 
/* 
-->individual boxes are called as nodes and every node is connected to each other.
--> stores the variable in linear fasion .
--> the memory address is not contigious , but we visulaize it as a linear structure 
--> it's dynamic , so can add new nodes and can delete old ones 
--> each node stores two types of data : data , pointer (to store address of next data )
--> the last node don't have to store any address of next pointer so it stores : data , NULL 
--> there is no index value 
--> linked list ko linear fasion me, one by one hi travel kiya ja sakta hai 
--> Head* which always points to the first node 
--> Head is nothinng but fist Node* , we don't know  address of other nodes  
--> Tail* stores address of last node 
--> because of traversing : time coplexity!= O(1), it's O(n) in worst case


*/

/*
            Implementation:
--> two ways :  STL's   ,   classes 
--> We made a node class , so the pointer which we will make wo ussi node class ka pointer hoga 
which will store the address of next node .
so in node class : data and node* are stored .


*/

/*
        What Is a Constructor?
A constructor is a special member function in a class that:

Has the same name as the class itself

Is automatically called when an object is created

Is used to initialize data members of that class

example : 

class Box 
{
public:
    int height;

    // Constructor
    Box() 
    {
        height = 10;
        cout << "Box created with height = " << height << endl;
    }
};

int main() {
    Box b;  // Constructor is automatically called, b is object
}

*/

/*          functions in linked list :

            --> push_front : passing any value to it will create a new node in front 
            of  the first node of linked list

            --> push_back : passing any value to it will create a new node 
            at last  of linked list , and this node pointer will store NULL value 

            --> pop_front : deletes the value from the front

            --> pop_back : deletes the value from the back 

*/