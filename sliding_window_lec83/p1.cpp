/*
    Sliding Window Maximum:-
    --> Optmal approach : using deque( double ended queue ) data structure
        --> in this push , pop operations can be performed from the front and back
        --> store the max of current window inside deque
    --> push back  the elements of the current window to deque as follows :
        --> push first element of window in deque 
        --> before pushing the 2nd element , check whether it is greater than element inside deque 
        --> if deque elemnt is smaller then pop it and store the bigger element in deque 
        --> store the front element of the deque in the result array as this front element will be the greatest in window 
        --> while analysing the next window, make sure the front of the deque don't contain element of old window 
*/

// leetcode : 239