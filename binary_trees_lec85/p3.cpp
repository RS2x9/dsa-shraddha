/*
    Preorder Traversal:-
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
        // right = NULL;    // pointing towards right subtree
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
void print_pre_order(node* root)
{
    if ( root == NULL) return ;
    cout << root -> data  << "\t" ;
    print_pre_order( root -> left);     // print the left subtrees 
    print_pre_order( root -> right);    // then print the right subtree
}

int main()
{
    vector<int> pre_order = { 1 , 2 , -1 , -1 , 3  , 4 ,-1 , -1 , 5 , -1 , -1};
    
    node* root = build_tree( pre_order);        // return the root of the entire tree
   
    print_pre_order(root); 
}

// time complexity = O(n)