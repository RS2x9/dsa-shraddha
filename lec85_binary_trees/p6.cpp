/*
    Level Order Traversal :-
    --> Iterative Approach is used and level wise the node data is printed
    --> Implemented using Queue data structure 
        --> push_back() the root data 
        --> after traversing this data, pop_front() from queue and push_back() the corresponding left and right child 
        --> Repeat this process 
        --> Don't push_back() any NULL values  
*/

/*
    Types of Traversal:- 
    1) DFS ( Depth First Search) 
        --> branch is explored first 
    2) BFS ( Breadth First Search)
        --> This is level by level traversal 
        --> Ex: Level order traversal
*/

#include<iostream>
#include<vector>
#include<deque>
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
        right = NULL ; 
    }
};
int idx = -1 ;
node* build_tree( vector<int> pre_order)
{
    idx ++;
    if ( pre_order[idx] == -1 ) return NULL;
    node* root = new node( pre_order[idx]);
    root -> left = build_tree( pre_order);
    root -> right = build_tree( pre_order);
    
    return root ;
}
void print_level(node* root)
{
    deque<node*> q;
    q.push_back( root);
    while ( q.size() > 0)
    {
        node* curr = q.front();
        cout << curr -> data << "\t";
        q.pop_front();
        if ( curr -> left != NULL) q.push_back(curr -> left);
        if ( curr -> right != NULL ) q.push_back( curr -> right);
    }
}
int main()
{
    vector<int> pre_order ={ 1, 2 , -1 , -1 , 3 , 4 , -1 , -1 , 5, -1 , -1} ; 
    node* root = build_tree(pre_order);
    print_level( root);
    return 0;
}