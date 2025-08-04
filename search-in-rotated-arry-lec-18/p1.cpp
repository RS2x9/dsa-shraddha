/*
    Search in Rotated Array :
    --> initially array was sorted 
    --> then w.r.t any one of the index the array is being rotated 
    --> all the values are unique 
    --> search the target now 
    --> if done using linear search then time complexity =O(n)
    --> if done using binary search then time complexity =O(logn)

    -->  For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2]
   --> both the parts are in increasing order 
    --> from target we can't know to which side we have to go , but if we know 
    that the left or right part is sorted w.r.t to mid , then do further opeartions of binary search 

    --> if left part is sorted then start index is less than equal to  mid index 
    
*/

// see - leetcode -problem -33