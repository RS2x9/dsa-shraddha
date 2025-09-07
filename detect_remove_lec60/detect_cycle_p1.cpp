// leetcode - Linked list in cycle -141
/*
    Detect cycle in Linked List:
    --> the last node is getting connected to one of the inside node 
    --> this becomes never ending .
    --> Approach:
        slow fast pointer:
            --> two pointers : slow , fast
            --> slow = head
            --> fast = head
            --> slow will be updated by +1 
                so : slow = slow-> next
            --> fast will be updated by +2
                so : fast = fast -> next -> next.
            --> fast will be updated till it crosses the entire linked list
            --> a time comes when slow = fast , this is only possible in loops 
            --> during open chains :
                --> during even number of elements : loop runs till : fast!=NULL
                --> during odd number of elements : loop rums till : fast -> next != NULL.

*/