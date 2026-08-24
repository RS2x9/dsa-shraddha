/*
    DETECT A CYCLE IN UN DIRECTED GRAPH USING DFS:-
    --> ex:  1 ----- 0 ------ 3 ---- 4
              \     /
                 2

        --> let's start the traversal from 0.
            it's neighbour is 1 and 1 ka neighour is 2 , and 2 ka neighbour is 0
        --> for 2 : 1 is visited and is behaving like direct parent.
            also 0 is visted but not direct parent, so 1 will be called as "back edge"
        --> so for visting 2 there are two ways, it means there exists a cycle in graph.
        --> so  whenever a back edge is detected, there exists a cycle.
*/
// note : there is no concept of parent in graph

#include<iostream>
#include<vector>
#include<list>
using namespace std;
class graph
{
    int V;
    list<int> *L;
    public:
        graph( int val)
        {
            V = val ;
            L = new list<int> [V];
        }
        void addedge( int u , int v)
        {
            L[u].push_back(v);
            L[v].push_back(u);
        }
        void print()
        {
            for ( int i=0 ; i< V ; i++)
            {
                cout << i << ": ";
                for ( int neigh : L[i])
                {
                    cout << neigh << " ";
                }
                cout << endl;
            }
        }
        bool cycle_dfs_helper( int curr , int parent, vector<bool> &vis)
        {
            if(vis[curr] == false) vis[curr] = true;
            for ( int neigh : L[curr])
            {
                if( vis[neigh] == false)    // vertex is not visited yet
                {
                    // there can be chances of cycle present from here
                    if( cycle_dfs_helper(neigh , curr , vis))
                    {
                        return true;
                    }
                    
                }
                else if ( neigh != parent)
                {
                    // it means there exists a visited neighbor which is not equl  to the parent of current node
                    return true;
                }
            }
            return false ;
        }
        bool cycle_dfs()
        {
            int curr =0;
            vector<bool> visited( V, false);
            int parent  =-1 ;    // for the starting point, since there is no parent so -1 will be assigned to the starting value 
            
            return cycle_dfs_helper( curr , parent , visited);
        }
};
int main()
{
    graph g(5);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2 ,0);
    g.addedge(0,3);
    g.addedge(3,4);
    
    cout << "graph connections: \n";
    g.print();
    cout << "\n-------------------\n";
    cout <<g.cycle_dfs();
}