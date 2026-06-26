/*
    Implement Queue using Stacks :-
    --> two stacks will be used 
    --> s1 is primary stack 
    --> s2 is helper stack ;
    --> The top of s1 will be mapped to front of Queue 
    --> When new element comes then : 
    --> Copy all the elements of s1 to s2
    --> push the new data to s1 at the top 
    --> copy back the element of s2 on s1
    --> This process makes the stack to mimic the behaviour of Queue 

*/

// leetcode : 232