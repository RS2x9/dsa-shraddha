/*
        Time complexity:
        --> Not the actual time taken but thr amount of timr taken as
        function of input size (n) i,e the number of operations performed as a function of input 
        --> graph : x-axis : input  , y-axis : operations 
        --> eg : time complexity of linear search is : o(n) if f(n)=n  .
        --> Time complexity is the behaviour that how algorithms are getting performed .
        --> we always try to calculate the worst time complexity  i,e for very large values of input 
        because code takes the input according to the user 
        --> 
*/

/*
        Big O notation:
        ---> it's notation for both worst case time and space complexity .
        --> worst case is the upper boundary .
        -- eg : if complexity is O(n) maximum of n number of opeartions can be perfromed .
        --> if f(n)=4n^2 + 3n+5 . to calculate complexity , remove all the constants and consider the 
        highest degree , time complexity = O(n^2)
*/

// average time complexity : thita 
// best time complexity : omega . this is also called lower bound .
// contant space or time complexity : O(1) i,e contant horizontal line on graph.
// best complexity is : O(1) beause independent of the large number of operations performed .

/*
        Space Complexity :
        --> Amount of Space taken by an algorithm as a function of input size (n).
        --> code has two parts : 
        1)  input like arrays , vectors , strings .these are not considered for space complexity .
        2)  Auxillary space : extra space taken by other variables . space complexity is considered in this case.

        --> eg: if an array is give as input of n number of elements  . we have to create another array squarearray[] which 
        has to store the squares of the elements of the original aaray.
        This squarearray[] is taking extra space and this will be considered for space complexity ..
        since it has n number of elements so it's space complexity : O(n) i,e a straight line on a graph.

        --> In modern systems  : to reduce time complexity because introducing space is much 
        easier then managing time complexity
*/

/*
    Time complexity comparision: 
    interms of O : 1> logn > n > n logn > n^2 > n^3 > 2^n > n!
*/