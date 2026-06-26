/*
    Calculate the sum of all the nodes:-
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
class node
{
    public :
    int data ;
    node* left;
    node* right ;
    node( int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int idx =-1;
node* build_tree( vector<int> &pre_order)
{
    idx++;
    if ( pre_order[idx] == -1) return NULL;
    node* root = new node( pre_order[idx]);
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    return root ;
}
int sum_print( node* root)
{
    int sums=0;
    if ( root == NULL) return 0;
    int lefts = sum_print( root -> left);
    int rights = sum_print( root -> right );
    return lefts + rights + root-> data ;
}
int main()
{
    vector<int> pre_order={1,2,-1,-1,3,4,6,-1,-1,7,-1,-1,5,-1,-1};
    node* root = build_tree( pre_order);
    cout << sum_print(root);
    return 0;
}