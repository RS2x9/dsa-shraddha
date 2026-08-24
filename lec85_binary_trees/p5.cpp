/*
    Post order Traversal: left  subtree, right subtree, root 
*/

// post order traversal : left , right , root 
#include<iostream>
#include<vector>
using namespace std ;
class node
{
    public :
    int data ;
    node* left ;
    node* right ;
    node( int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int idx = -1 ;
node* build_tree( vector<int> pre_order)
{
    idx++;
    if ( pre_order[idx] == -1 ) return NULL;
    node* root = new node( pre_order[idx]);
    root -> left =  build_tree( pre_order);
    root -> right = build_tree( pre_order);
    
    return root ;
}
void print_post_order( node* root)
{
    if ( root == NULL) return ;
    print_post_order( root -> left);
    print_post_order( root -> right);
    cout << root -> data << "\t";
}
int main()
{
    vector<int> pre_order= { 1, 2 , -1 , -1 , 3 , 4 , 6 , -1 , -1 , 7, -1 , -1 , 5, -1 , -1 };
    node* root = build_tree( pre_order);
    print_post_order( root);
}

// time complexity = O(n)