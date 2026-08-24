/*
        bitwise << : bitwise left shift

*/

#include <bits/stdc++.h>
using namespace std;
int  main()
{
    
    int n=4;
    int shift_by=1;
    cout <<(n << shift_by)<<endl; // out: 1000 --> 8 in decimal
    /*
    here 4 --> 100 in binary
    shift by shift the binary format by shift_by places to left and the vacant places to right will be filled with 0.
    so 100<<1 ---> 1000 
    */
}

/*
while doing a<<b: answer is a*(int)(pow(2,b))
*/