/*
    BFS: Breadth First Search
    --> it says "travel to immediate node first" 
    --> in trees there is always a strating position root to strat , in graph there is no starting position we can start from anywhere 
    --> In graphs while travelling, always mark it as "visited" because there are a lot of connections and 
        there is a danger of travelling the same node again.
        tress was heirarchial data structure, it wasn't possible there to meet the same node again
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
#include<vector>
#include<list>
#include<deque>
using namespace std ;
class graph
{
    int V;      // nnumber of nodes in one graph
    list<int> *L;       // stores list of neighbours for the current node 
    public :
        graph( int val)
        {
            V = val;
            L = new list<int> [V];
        }
        void addedge( int u , int v)
        {
            L[u].push_back(v);
            L[v].push_back(u);
        }
        void print()
        {
            for ( int i=0 ; i < V ; i++)
            {
                cout << i << ":" ;
                for (int neigh : L[i])
                {
                    cout << neigh << " ";
                }
                cout << endl;
            }
        }
        void bfs()
        {
            deque<int> dq;      // used to store the node values +further calculation 
            vector<bool> vis(V, false);     // used to mark the nodes which are visited 
            dq.push_back(0);
            vis[0] = true;      // visit the unvisited node 
            while( !dq.empty())
            {
                int curr = dq.front();
                dq.pop_front();
                cout << curr << "\t";
                for ( int neigh : L[curr])
                {
                    if(vis[neigh] == false)
                    {
                        vis[neigh] = true;      // visit the unvisited node 
                        dq.push_back( neigh);
                    }
                }
            }
        }
};
int main()
{
    graph g(5);
    g.addedge( 0,1);
    g.addedge( 1,3);
    g.addedge( 1 , 2);
    g.addedge( 2,3);
    g.addedge( 2,4);
    
    cout << "current node: NEighbours :- \n";
    g.print();
    cout << "\n--------------------\n";
    
    cout << "bfs: \n";
    g.bfs();
}

/*
    TC of bfs() : O( V+E)
    --> E = edge , V = vertices
*/