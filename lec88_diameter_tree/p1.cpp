/*
    Diameter of Binary Tree:-
    --> It is the max distance between the two leaf 
    --> two cases :
        --> It passes throught the root 
        --> It do not passes through the root
    --> For any node:
        --> If the diameter is passing through any node then diameter is left subtree max height + right subtree max height
        --> diameter exists in the rightsubtree
        --> diameter exists in the leftsubtree
    --> LeetCode: 543
*/


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
        left = right = NULL;
    }
};
int idx =-1 ;
node* build_tree( vector<int> &pre_order)
{
    idx ++;
    if ( pre_order[idx]== -1 ) return NULL;
    node* root = new node( pre_order[idx]);
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    return root ;
}
void print( node* root)
{
    if ( root == NULL) return;
    cout << root -> data <<"\t";
    if ( root ->left != NULL) print( root -> left);
    if ( root -> right != NULL) print( root -> right);
}
int height( node* roo)
{
    if ( roo == NULL) return 0;
    int lefth = height ( roo -> left);
    int righth = height( roo -> right);
    return max( lefth , righth) +1;
}
int diameter( node* root)
{
    if ( root == NULL) return 0;
    int leftdia = diameter( root -> left);
    int rightdia = diameter( root -> right);
    int currdia = height( root -> left) + height( root -> right);
    return max( leftdia , max( rightdia , currdia ));
}
int main()
{
    vector<int> pre_order ={ 1,2, -1,-1,3,4,6,-1,-1,7,-1,-1,5,-1,-1};
    node* root = build_tree( pre_order);
    print( root);
    cout << endl << "diameter: " << diameter(root) ;
    return 0;
}

// TC of height() - O(n)
// so TC of diameter() = O(n^2)