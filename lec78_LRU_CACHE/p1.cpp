/*
    Design an LRU(Least recently used) Cache :-
    --> used for the fast retrieval of data 
    --> we delete the old data and stores new data 
    --> it's temporary
    --> define it with ceratin capacity 
    --> store the data in the form of key:value pairs 
    --> "usage" of data:
        --> if the data is retrieved or stored we say data is in use 
        --> let the capacity of cache be 2 
            --> structure :
                -------------
                |    MR     |
                |           |
                |    LR     |
                -------------
            --> let 1:1 has to be stored,it  will get stored to MR ( most recent data )
            --> let 2:2 has to be stored then 1:1 has to be moved to LR ( Least used) and then 2:2 will be moved to MR
            --> if 1:1 has to be retrieved 1:1 will in " usage of data" and then 2:2 will be moved at LR and and 1:1 to MR
            --> 1:1 becomes the new data and if 3:3 has to be stord then since cacahe is full, 
                the data at LR has to be deleted and the new data will be moved to LR first then the old stored data  in MR
                will be moved to LR and new data to MR.
    --> during the retrieval of the data, if the data is not there then return -1 ;
    --> TC must be O(1) i,e constant time complexity so we will use map for this 

    --> Implementation :-
        --> use DLL( Doubly Linked List) and map
        --> the DLL will take care of the order 
        --> The LR will be at the tail 
        --> MR will be at the head

*/
// LeetCode : 146