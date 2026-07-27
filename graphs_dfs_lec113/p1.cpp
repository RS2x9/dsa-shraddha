/*
    DFS( DEPTH FIRST SEARCH):-
    --> it says "keep going to 1st unvisited neighbour"
*/

/*
 example : Undirected graph
         4
        |
        2 
       / \
      1 -- 3
      |
      0

*/
#include<iostream>
#include<list>
#include<vector>
using namespace std ;
class graph
{
    int V ;   // stors the total number of nodes 
    list<int> *L;       // stores the list of neighbours of the current node 
    public :
    graph(int val)
    {
        V = val;
        L = new list<int> [V];
    }
    int get_V()
    {
        return V;
    }
    void addedge( int u , int v)
    {
        L[u].push_back(v);
        L[v].push_back(u);
    }
    void graph_vertex_print()
    {
        for ( int i =0 ; i<V ; i++)
        {
            cout << i<< ": ";
            for( int neigh : L[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }
    void dfs_recursion( int curr , vector<bool> &visited)
    {
        cout << curr <<"\t";
        if (visited[curr] == false) visited[curr] = true ;
        for ( int neigh : L[curr])
        {
            if( visited[neigh] == false)
            {
                dfs_recursion( neigh , visited);
            }
        }
    }
    // TC = O( V+ E)

    void dfs()
    {
        int curr =0;
        vector<bool> visited( V , false);
        dfs_recursion( curr , visited);
    }
};
int main()
{
    graph g(5);
    g.addedge(0,1);
    g.addedge(1,3);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(2,4);
    
    cout << "graph NODES \n";
    g.graph_vertex_print();
    cout << "\n--------------\n";

    g.dfs();
}