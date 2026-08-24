// my logic 

#include<iostream>
#include<vector>
#include<deque>
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
    if ( pre_order[idx] ==-1 ) return NULL;
    node* root = new node( pre_order[idx]);
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    return root ;
}
void print( node* root , int &k)
{
    deque<node*> dq;
    dq.push_back( root );
    dq.push_back( NULL);
    while( !dq.empty())
    {
        node* curr = dq.front();
        dq.pop_front();
        
        if ( curr == NULL)
        {
            if (!dq.empty())
            {
                cout << endl;
                dq.push_back( NULL);
                k=k-1;    // counting k backwards 
                // k reduces after every level is traversed
                
                continue ;
            }
            else break;
        }
        if ( k== 1&& curr != NULL)      // reaches kth level of tree 
        {
            cout << curr -> data << "\t" ;
        }
        if ( curr -> left != NULL) dq.push_back( curr-> left);
        if ( curr -> right!= NULL) dq.push_back( curr -> right);
    }
}
int main()
{
    vector<int> pre_order ={1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1};
    int k =3 ;
    node* root = build_tree( pre_order);
    print( root , k);
}