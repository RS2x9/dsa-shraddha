/*
    In order Traversal:   
    --> evrtime : left subtree , root , right subtree
    --> generally we had done is : root , left subtree , right subtree
*/

#include<iostream>
#include<vector>
using namespace std ;
class node
{
    public: 
    int data ;
    node* left;
    node* right;
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
    node* root = new node( pre_order[idx]);
    if ( pre_order[idx] == -1 ) return NULL;
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    
    return root ;
}
void print_in_order( node* root)
{
    if ( root == NULL) return ;
    print_in_order(root -> left);       // prints left subtree
    cout << root -> data << "\t";       // main root 
    print_in_order( root -> right);     // prints right subtree
}
int main()
{
    vector <int> pre_order = { 1,2,-1,-1 , 3, 4 , 6, -1 , -1 , 7 , -1 , -1 , 5 , -1 , -1};
    node* root = build_tree( pre_order);
    print_in_order(root);
}

// time complexity = O(n)