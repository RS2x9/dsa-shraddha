/*
    Method -2 :-
    --> TC = O(n)
    --> directly calculate the currdiamter becuase everytime node traversal has to be done 
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
    if ( pre_order[idx] == -1) return NULL;
    node* root = new node( pre_order[idx]);
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    return root ;
}
void print( node* root)
{
    if ( root == NULL);
    cout << root -> data <<"\t";
    if ( root -> left != NULL) print( root -> left);
    if ( root -> right != NULL) print( root -> right);
}
int ans =0;
int height ( node* root)
{
    if ( root == NULL) return 0;
    int lefth = height( root -> left);
    int righth = height( root -> right);
    int currdia = lefth+ righth;
    ans = max ( currdia , ans);
    return max( lefth , righth) +1 ;
}
int diameter( node* root)
{
    height( root);
    return ans ;
}
int main()
{
    vector<int> pre_order={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root = build_tree( pre_order);
    print(root);
    cout << endl<< diameter( root);
}