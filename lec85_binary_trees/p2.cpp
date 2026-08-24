/*
    Binary tree:-
    --> preorder sequence 
        --> This will have info of root , left subtree , right subtree
        --> NULL is represented by -1
        --> ex for: 
                           1
                         /    \
                        /      \
                       /        \
                      /          \
                     2            3
                   /   \        /   \
                  /     \      /     \  
                NULL   NULL  NULL   NULL

                --> go first with left subtree untill you reach the NULL 
                --> and then start with the right subtree
                --> then for left subtree the preorder sequence is: [ 1, 2, -1 , -1 ]  
                --> and combining it with right subtree : [ 1 ,2 , -1 , -1 , 3 , -1 , -1 ]
        --> preorder sequence : [ 1 , 2 , -1  , -1 , 3 , 4 ,-1 , -1 , 5 , -1 , -1  ]
                the tree is : 
                             1
                         /      \
                        /        \
                       /          \
                      /            \
                     2              3
                   /   \         /     \
                  /     \       /        \  
                NULL   NULL    4          5
                             /   \      /   \
                            /     \    /     \ 
                         NULL   NULL  NULL   NULL
                             
                       
*/

#include<iostream>
#include<vector>
using namespace std ;
class node 
{
    public:
    int data ;
    node* left ;
    node* right;
    node(int val)
    {
        data = val;
        left = NULL;        // pointing towards left subtree
        right = NULL;    // pointing towards right subtree
    }
};
int idx = -1 ;
node* build_tree( vector<int> &pre_order)       // builds the entire tree
{
    idx ++;
    node* root = new node( pre_order[idx]);     // node is created for each value of the preorder sequence 
    
    if ( pre_order[idx] == -1 ) return NULL;    // denotes we have reached the end of that node subtree
    root -> left = build_tree( pre_order);      // left subtrees are built 
    root -> right = build_tree( pre_order);     // ritght subyrees are built
    return root ;       // retuns self to the calling node 
}
int main()
{
    vector<int> pre_order = { 1 , 2 , -1 , -1 , 3  , 4 ,-1 , -1 , 5 , -1 , -1};
    
    node* root = build_tree( pre_order);        // return the root of the entire tree
    cout<< root -> data << endl;
    cout<< root -> left -> data << endl;
    cout<< root -> right -> data << endl;
    // these print statements proves the tree is correctly built 
}

// time complexity= O(n) as we can see n times idx is getting updated