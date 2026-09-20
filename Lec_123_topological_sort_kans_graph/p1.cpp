/*
    Topolgical Sorting using Kahn's algorithm :-
    --> for topological sorting , the graph must be directed and acyclic (DAG)
    --> in kahns: for each node, we calculate indegree value and then using it we do topological sort 
    --> indegree means : number of number of incoming edges to that node 
    --> the nodes that has 0 indegree value  will be pushed to the queue becuse this is a dependency 
        which we have already travelled and then after this we will travel to the other nodes 
    --> the elements which has been pushed in the queue, decrease the indegree value of theirs neighbours.
    --> the order  that we get at the end can be differet from the other methods but this will also 
        be a valid order .
*/

#include<iostream>
#include<list>
#include<unordered_map>
#include<deque>
#include<vector>
using namespace std ;
class graph 
{
    int V ;
    list<int> *L;
    unordered_map<int , int> m;         // stores the values of nodes with their inedge values
    public :
    graph( int val )
    {
        V = val ;
        L = new list<int> [V];
        for( int i=0 ; i< V ; i++)
        {
            m[i] =0;    // initially all the inedge values should be 0
        }
       
    }
    void addedge( int u , int v)        // maked directed graph
    {
        L[u].push_back(v);
    }
    void print_graph()
    {
        cout << "Graph looks: "<< endl;
        for( int i=0  ; i< V ; i++)
        {
            cout << i << ": ";
            for ( int neigh : L[i])
            {
                cout << neigh<< "\t";
                m[neigh]++;     // indedge value of every node is calculated 
            }
            cout << endl;
        }
    }
    void print_inedge_value()
    {
        cout << "Nodes with inedge values: "<< endl;
        for( auto it : m)
        {
            cout << it.first << ": " << it.second << endl;
        }
    }
    vector<int> topo_order_kahns()
    {
       deque<int> dq;       // stores nodes whose inedge values are 0
       vector<int> ans ;    // stores nodes in topological order using kahns algo 
       
       for ( auto it : m)
       {
           if ( it.second == 0) dq.push_back( it.first);
       }
       
       while( !dq.empty())
       {
           int curr = dq.front();
           ans.push_back( curr);
           dq.pop_front();
           
           // reduce the inedge values of the neighboirs by 1
           for ( int neigh: L[curr])
           {
               m[neigh]--;
               
               // if the inedge value becomes 0 then push the elements to deque 
               if ( m[neigh] == 0) dq.push_back( neigh);
           }
       }
       return ans ;
    }
    ~graph()        // destructor
    {
        delete[] L;
    }
};
int main()
{
    graph g(6);
    g.addedge( 5,0);
    g.addedge( 4,0);
    g.addedge( 5,2);
    g.addedge( 4,1);
    g.addedge( 2,3);
    g.addedge( 3,1);
    
    g.print_graph();
    cout << "\n---------------\n";
    g.print_inedge_value();
    cout << "\n---------------\n";
    vector<int> answer = g.topo_order_kahns();
    
    cout << "Topological order using khans Algorithm: ";
    for ( auto topo : answer) cout << topo <<"\t";
}