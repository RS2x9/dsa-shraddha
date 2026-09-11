#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std ;
class graph
{
    int V ;
    list<int> *L;
    public:
    graph( int v )
    {
        V = v ;
        L = new list<int> [V];
    }
    void addedge( int u ,int v)
    {
        L[u].push_back(v);
        // because this graph is directional 
    }
    void print()
    {
        for ( int i=0 ; i < V ; i++)
        {
            cout << i << ": ";
            for ( int neigh : L[i]) cout << neigh << "\t";
        }
        cout << endl;
    }
    bool dfs_directed_helper( int curr , vector<bool> &vis , vector<bool> &curr_vis)
    {
        vis[curr] = true ;
        curr_vis[curr] = true ;
        for ( int neigh: L[curr])
        {
            if( vis[neigh] == false)
            {
                if( dfs_directed_helper( neigh , vis , curr_vis)) return true ;
            }
            else if( curr_vis[neigh] == true ) 
            {
                // this means the same node has been appeared again, it means cycle is found 
                return true;
            }
        }
        curr_vis[curr] = false;         //if the cycle is not found  then mark the current node as not visited  
        return false ;
    }
    bool dfs_directed_cycle()
    {
        vector<bool> vis( V , false);
        vector<bool> curr_rec( V , false);      // to detect the cycle at the current node 
        
        // there can be multiple cycles that can exists at different nodes, so we will travell
        // all the nodes in the graph
        for ( int i=0 ; i< V ; i++)
        {
            if(vis[i] == false)
            {
                if( dfs_directed_helper( i , vis , curr_rec)) return true ;
            }
        }
        
        return false ;
    }
};
int main()
{
    graph g(4);
    g.addedge(1,0);
    g.addedge(0,2);
    g.addedge(2,3);
    g.addedge(3,0);
    
    cout<< "Graph looks: ";
    g.print();
    
    cout << "\n------------\n";
    cout << "Cycle exists: "<< g.dfs_directed_cycle();
}