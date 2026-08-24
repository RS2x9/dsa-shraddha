/*
    Top view of binary tree:
    --> we will use the concept of "horizontal distance"
    --> imagine vertical lines being drawn 
    --> we will see the root as the origin of calculation
    --> if we move towards left then distance reduces by 1  , for right it increases by 1
    --> if the horizontal distance is same then that node is lying vertically downward and its can't be seen from top
    --> Among these the node appearing first in the "level order traversal" will be seen, other one won't
*/

#include<iostream>
#include<vector>
#include<deque>
#include<map>
using namespace std ;
class node
{
    public :
    int data ;
    node* left;
    node* right;
    node( int val)
    {
        data = val;
        left =right = NULL;
    }
};
int idx =-1 ;
node* build_tree( vector<int> pre_order)
{
    idx ++;
    if( pre_order[idx] == -1) return NULL;
    node* root = new node( pre_order[idx]);
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    return root ;
}
void print( node* root)
{
    if ( root == NULL) return ;
    deque< node*> dq;
    dq.push_back( root );
    dq.push_back( NULL);
    cout << "Just printing all the nodes of the tree\n";
    while( !dq.empty())
    {
        node* curr = dq.front();
        dq.pop_front();
        if( curr == NULL)
        {
            if ( !dq.empty())
            {
                cout << endl;
                dq.push_back( NULL);
                continue;
            }
            else break;
        }
        cout << curr -> data <<"\t";
        if ( curr -> left != NULL) dq.push_back( curr -> left);
        if ( curr -> right != NULL) dq.push_back( curr -> right);
    }
}
void tree( node* root )
{
    deque<pair<node* , int>> dq;    // store pair of node with their horizontal distance in deque
    map<int , int> m;   // stores horizonatl distance with node value in the same order of traversal
    dq.push_back( {root , 0});      // root will be seen as starting point
    while( !dq.empty())
    {
        // if the horizontal distance is already present in map then we will not consider that pair of <node* , int> beacuse that node will not be seen fromm the top 
        node* curr = dq.front().first;
        int dia = dq.front().second;
        
        dq.pop_front();
        if (m.find(dia) == m.end())
        {
            // if the horizontal is not present in map then we will add that pair to the map
            m[dia] = curr -> data ;
        }
        if ( curr -> left != NULL) dq.push_back( {curr -> left , dia -1});
        if ( curr -> right != NULL) dq.push_back( {curr -> right, dia +1});
    }
    cout << endl;
    for ( auto it : m)
    {
        cout << it.second << "\t";
    }
}
int main()
{
    vector<int> pre_order ={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root = build_tree( pre_order);
    print( root);
    cout << "\n-------------------------------";
    tree( root );
}

// TC of find() is logn
// Total Tc = nlogn