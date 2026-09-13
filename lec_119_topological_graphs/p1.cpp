/*
    Topological Sorting in Graphs:-
    --> This is linear ordering of vertices such that every directed edge u -> v , vertex u comes vefore v in order.
    --> This method is performed only for directed + acyclic( no cycles) graphs 
    --> This is used to solve dependency problems where one thing/work is dependent on another work.
*/

#include<iostream>
#include<list>
#include<stack>
#include<vector>
using namespace std ;
class graph
{
    int V ;
    list<int> *L;
    public: 
    graph(int v )
    {
        V = v;
        L = new list<int>[V];
    }
    void addedge( int u, int v)
    {
        L[u].push_back(v);
    }
    void print_graph()
    {
        for(int i=0; i<V ; i++)
        {
            cout << i << ": ";
            for( int neigh: L[i])
            {
                cout << neigh << " ";
            }
            cout << endl ;
        }
    }
    void topological_helper_dfs(int curr, vector<bool> &vis , stack<int> &s)
    {
        vis[curr] = true ;
        for( int  neigh: L[curr])
        {
            if ( vis[neigh] == false )
            {
                topological_helper_dfs( neigh , vis , s);
            }
        }
        s.push( curr);
    }
    void topological_sort()
    {
        stack<int> s;       // stores the element in topological order 
        vector<bool> vis(V, false);
        for(int i=0 ; i< V ; i++)
        {
            if( vis[i] == false) topological_helper_dfs(i, vis, s);
            // calling this function for the visited nodes will result in repetitive and wrong topological order.
        }
        print_stack(s);
    }
    void print_stack(stack<int> s)
    {
        while(!s.empty())
        {
            cout << s.top() << "\t";
            s.pop();
        }
    }
    
};
int main()
{
    graph g(6);
    g.addedge(4,0);
    g.addedge(5,0);
    g.addedge(5,2);
    g.addedge(2,3);
    g.addedge(3,1);
    g.addedge(4,1);
    
    g.print_graph();
    cout <<"\n-----------\n";
    
    cout << "Topological sorted graph: ";
    g.topological_sort();
}