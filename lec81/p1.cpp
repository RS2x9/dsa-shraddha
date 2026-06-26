/*
    Implement Stack using Queue:-
    --> two queue's will be used 
    --> Q1 queue will be used as primary data structure where elements of stack will be mapped 
    --> Q2 queue will be helper data structure 
    --> In stack, top element is important 
    --> In queue, front element is important
    --> arrange such that the top element of the stack becomes the front element of queue 
    --> Stack is LIFO and Queue is FIFO data structure i,e opposite of each other
        --> Either of the push() , pop() will have to Time Complexity of O(n)
        --> The rest of the functions will have the Time Complexity of O(1)
    --> Stack is just the visualisation part, the real implementation is Queue
    --> Let  suppose one element is pushed to stack and queue
    --> Since Queue is singly Linked List data structure, so elements can't be stored at the front directly
    --> To store the new element at the front, we will first copy all the elements of Q1 to Q2
    --> Then Q1 becomes empty
    --> Then we will push the new element to Q1 and copy all the elements from Q2 to Q1
*/

// leetcode : 255