// leetcode -problem 75 - sort colors 


// doubt 
/*
    Sort Array with 0s, 1s, 2s:
    --> solved using Dutch National Flag Algorithm
    --> time complexity =O(n)
    --> Done using one loop
    --> use three pointers :low , mid , high 
    --> 0's are stored from : 0 to low-1
    --> 1's are stored from : low to mid-1 
    --> unsorted array ( given in question) is stored from : mid to high
    --> 2's are stored from : high+1 to n-1 
    --> as sorting increases : mid increases , high decreases 
    --> when mid = high , then our unsorted array is minimised to zero and the rest materials 
        which we have taken in extra has sorted 
    --> we will take the elements of the unsorted array to the respective 0's , 1's ,2's created 
    --> initially low =0 :
            reason: for now there is nothing like sorted 0's ,1's, 2's becuase all of them are in unsorted given array.
            so 0 , low-1 , low , mid are all same 
*/