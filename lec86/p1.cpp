/*
    Finding the height of tree:-
*/
// my logic 
#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
using namespace std;
class node
{
  public:
  int data ;
  node* left ;
  node* right ;
  node(int val)
  {
      data = val;
      left = NULL;
      right = NULL;
  }
};
int idx =-1;
//int count =0;
node* build_tree( vector<int> &pre_order)
{
    idx ++;
    if ( pre_order[idx] == -1) return NULL;
    node* root = new node( pre_order[idx]);
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    return root ;
}
int height_print( node* root)
{
    if ( root == NULL)
    {
        //cout << 0;
        return 0;
    }
    int height =0 ; 
    deque<node*> dq;
    dq.push_back( root);
    dq.push_back(NULL);
    while( !dq.empty())
    {
        node* curr = dq.front();
        dq.pop_front();
        if ( curr == NULL)
        {
            height++;       // after every level ended, height increases
            if ( !dq.empty())
            {
                dq.push_back( NULL);
                continue;
            }
            else break;
        }
        if ( curr -> left != NULL) dq.push_back( curr -> left);
        if ( curr -> right != NULL) dq.push_back( curr -> right);
    }
    return height;
}
int main()
{
    vector<int> pre_order ={1,2,-1,-1,3,4,6,-1,-1,7,-1,-1,-1,-1,5,-1,-1};
    node* root = build_tree(pre_order);
    int c = height_print( root);
    cout << c;
    return 0;
}