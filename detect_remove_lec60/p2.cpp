// leetcode -142
/*
    Linked List Cycle II:
    --> find is any loop exists using slow fast pointer approach
    --> if any loop exsits :
        --> again initialize slow = head 
        --> increase slow , fast by one step only 
        --> at a point slow = fast 
        --> this is the starting point of the cycle . 
*/