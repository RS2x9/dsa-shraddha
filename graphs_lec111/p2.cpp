/*
    Adjacency List:-
    --> This is one of the representation of graph 
    --> stores the data of edges , vextices 
    --> Store neighbour  for all the vertices, this is the indication that edges exists between the vertices
    --> Neighbour: Directly connected elements are known as neighbours 
    --> ex
                                               (0)
                                                |
                                                |
                                               (1)
                                               / \
                                             (2)--(3)
                                    
        neighbour of 0 : 1
        neighbour of 1 : 0,1,3
        neighbour of 2 : 1,3
        neighbour of 3 : 1,2
        neighbour of any vertex  : list of other vertex i,e list<int>    ; valid for any datatype
                                              

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
#include<list>      // this is doubly linked list
using namespace std;
class graph
{
    int V;      // number of nodes that exists in graph;
    list<int> *L;    // same as int* arr
    // list of integers to store the adjacent values of current vertex 
    // since the number of adjacent members are different in number so it is dynamically defined.
    
    public :
    graph( int V)
    {
        this -> V = V;
        L = new list<int>[V];     // same as arr = new int[v]
    }
    
    void addedge( int u , int v)
    {
        L[u].push_back(v);      //  v is the adjacent member of u, so at u index v is stored
        
        // similarly
        L[v].push_back(u);
    }
    
    void print()
    {
        for( int i=0 ; i< V ; i++)
        {
            cout << i << ": ";      // current vertex
            for( int neigh : L[i])   // traversing the list of vertices connected to the current vertex 
            {
                cout << neigh << " ";       // vertices connected to the current vertex 
            }
            cout << endl;
        }
    }
};
int main()
{
    graph g(5);     // 5 vertices in one graph
    g.addedge(0,1);     // 0 ,1 connects  to each other
    g.addedge(1, 2);
    g.addedge(2,3);
    g.addedge(1,3);
    g.addedge(2,4);
    
    g.print();
}