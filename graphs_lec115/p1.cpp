/*
    DETECT A CYCLE IN UNDRECTED GRAPH USING BFS 
*/

#include<iostream>
#include<list>
#include<deque>
#include<vector>
using namespace std ;
class graph
{
    int V ;
    list<int> *L;
    public :
    graph( int V )
    {
        this -> V = V;
        L = new list<int>[V];
    }
    void addedge( int u , int v)
    {
        L[u].push_back(v);
        L[v].push_back(u);
    }
    void print()
    {
        for ( int i=0 ; i<V ; i++)
        {
            cout << i << ": ";
            for ( int neigh : L[i])
            {
                cout << neigh << "\t";
            }
            cout << endl;
        }
    }
    bool cycle_bfs()
    {
        vector<bool> vis(V , false);
        deque<pair<int, int>> dq;           // stors current node and its parent node
        dq.push_back( { 0,-1});
        vis[0] = true ;         // current node is visisted 
        while(!dq.empty())
        {
            int curr_front = dq.front().first;
            int curr_par = dq.front().second;
            vis[curr_front] = true ;
            dq.pop_front();
            for ( int neigh : L[curr_front])
            {
                if (vis[neigh] == false)     // visit the node if not visited 
                {
                    vis[neigh] = true ;
                    dq.push_back({ neigh , curr_front});        // push_back the unvisited node 
                }
                else if ( neigh != curr_par) 
                {
                    // if neigh is not same as itself, it means there is a third value existing creating a case of back edge
                    return true ;      
                }
            }
        }
        return false ;
    }
};
int main()
{
    graph g(5);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,0);
    g.addedge(0,3);
    g.addedge(3,4);
    
    g.print();
    cout << "\n--------------\n";
    cout<< g.cycle_bfs();
}