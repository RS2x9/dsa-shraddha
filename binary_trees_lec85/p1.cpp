/*
    Trees:-
    --> It's Heirarchial data structure 
    --> General trees are known as generic trees
    --> The data of the tree is stored in tree nodes as data was stored in Linked List
    --> The main node of the tree is known as root
    --> From root, multiple nodes emerges and tree starts forming
    --> The connection between two nodes is known as branch 
    --> the nodes emerging from one node is known are known as childern/ child node and from 
        whom these nodes are emerging is known as parent node
    --> Leaf : the end nodes of any tree from where no further child nodes emerges
    --> Sibling node: the children  of the same parent node 
*/

/*
    Binary Tree:-
    --> The tree where nodes have at max. 2 child nodes 
    --> these child are known as left , right child 
*/

/*
    Level:-
                         1
                       /  \
                      /    \
                     2      3
                          /   \
                         /     \
                        4       5
                         \
                          \
                           6

                           Fig 1

                     this has four levels i,e level 1 , level 2 , level 3 , level 4
                                            or level 0  , level 1 , level2 , level3
*/

/*
    Height :-
    --> This is the total number of levels in any tree  

    Subtree:-
    --> See Fig1 
        --> 1 is root and has two subtree : left , right 
        --> 2 has no subtree
        --> 3 has two subtrees : left , right 
        -->  4 has only right subtree , no left subtree
    --> So all the nodes below the current node is subtree, it can be left or right subtree
*/ 