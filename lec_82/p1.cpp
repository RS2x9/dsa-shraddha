/*
    First Unique Character in a String / First non repeating character in a string :-
    --> Example : level
        --> v is non repeating, so return it's index 
    --> Example : aabb
        --> return -1 as there is no non-repeating character
    --> since we have to only return the 1st non repeating character, this is FIFO type of processing 
    --> we use Queue to store the data in FIFO manner 
    --> Store only viable answers in queue : unique elements 
    --> front element of queue is of highest priority, store that 1st non repeating character there itself 

    --> Example : level
        --> use unordered_map ; stores the frequency of all the characters 
        --> use queue ;     stores all the non repeating characters 
        --> so at first l , e , v will be stored and parallely frequency will be compared 
        --> at the end the characters having higher frequency than 1 will be popped out from queue 
        --> return the front element if exists in queue else return -1 

*/

// Leetcode: 387