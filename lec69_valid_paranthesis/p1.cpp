/*
    VALID PARANTHESIS:-
    --> implemented using stack data structure 
    --> push all the opening brackets on stack 
    --> for every opening bracket at the top of stack, we will match it with the counter closing bracket
    --> for every pair of valid bracket is found, pop that top bracket from stack 
    --> when number of closing backets are more than opening brackets then
        --> when the stack will be empty then there will be no opening beacket to match with the closing bracket so return false
    --> when the number of opening brackets are ore than closing brackets then the stack will not get empty,
        this represents invalid case
*/

// leetcode : 20