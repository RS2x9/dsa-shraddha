// 2's complement
/*

int n=10  --> will be stored as --> 1010

but int n=-10  is stored after 2's complement:
    --> binary of n will be prefixed with 0 . if the prefix is 0 then it's 
    positive number else if prefix is 1 then it's negative number
    --> taking 1's complement of this number
    --> add 1 to it 
    --> the bianry number finally obtained is stored for n=-10
*/

/*
if  a bianry number : 10110 is given .
--> we already know that it's negative number by seeing its MSB
--> to obtain the original number , find it's 2s complement
*/