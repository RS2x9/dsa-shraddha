/*
    Count of Nodes:-
    --> similar logic to previous code 
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
class node
{
    public:
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
node* build_tree( vector<int> &pre_order)
{
    idx++ ; 
    if ( pre_order[idx] == -1 ) return NULL;
    node* root= new node( pre_order[idx]);
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    return root ;
}
int node_count(node* root)
{
    if ( root == NULL) return 0;
    int left_c = node_count( root -> left);
    int right_c = node_count( root -> right);
    return left_c + right_c +1 ;
}
int main()
{
    vector<int> pre_order ={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root = build_tree( pre_order);
    cout << node_count( root);
    return 0;
}