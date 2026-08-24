/*
    Level Order traversal:-
    --> printing in the output console level wise as same as the tree is visualised in mind 
    --> Done using NULL pointer
*/

#include<iostream>
#include<deque>
#include<vector>
using namespace std ;
class node
{
    public:
    int data ;
    node* left ;
    node* right;
    node( int val)
    {
        data = val ;
        left = NULL;
        right = NULL;
    }
};
int idx = -1 ;
node* build_tree( vector<int> & pre_order)
{
    idx++;
    if ( pre_order[idx] == -1) return NULL;
    node* root = new node( pre_order[idx]);
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    return root ;
}
void print_line_order( node* root)
{
    deque<node*> dq;
    dq.push_back( root);
    dq.push_back( NULL);
    while ( !dq.empty())
    {
        node* curr = dq.front();
        dq.pop_front();
        if( curr == NULL)
        {
            if ( !dq.empty())
            {
                cout << endl;       // new line 
                dq.push_back( NULL);
                continue ;      // when curr is NULL then it can't print any data, so control is again given to initial while()
            }
            else 
            {
                break;      // all the nodes are traversed 
            }
        }
        
        cout << curr -> data << "\t";
        if ( curr -> left != NULL) dq.push_back( curr -> left);
        if ( curr -> right != NULL) dq.push_back( curr -> right);
    }
}
int main()
{
    vector<int> pre_order = { 1 ,2 , -1 , -1 , 3 , 4 , -1, -1 , 5, -1 ,-1 } ;
    node* root = build_tree( pre_order);
    print_line_order( root);
    return 0;
}