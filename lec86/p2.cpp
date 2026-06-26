/*
    Finding the height of tree:-
    --> also defined as the max height from root to the leaf 
    --> initially we won't include the height of root for any subtree
    --> caculate the height of left and right subtree of the current root 
    --> post order traversal logic is used 
    --> Time complexity = O(n)
*/
// ma'am's logic  
// I am not getting how the traversal is being taking place 

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
    node( int val )
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int idx = -1 ;
node* build_tree( vector<int> &pre_order)
{
    idx++;
    if ( pre_order[idx] == -1) return NULL;
    node* root = new node( pre_order[idx]);
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    return root ;
}
int height_cal(node* root)
{
    if ( root == NULL) return 0;
    int lefth = height_cal( root -> left);
    int righth = height_cal( root -> right);
    return max( lefth , righth) +1 ;
}
int main()
{
    vector<int> pre_order ={1,2,-1,-1,3,4,6,-1,-1,7,-1,-1,-1,-1,5,-1,-1};
    node* root = build_tree(pre_order);
    cout << height_cal(root);
    return 0;
}