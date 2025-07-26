// bitwise >> : it's bitwise right shift
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4 ;
    int shift_by=1 ;
    cout << ( n >> shift_by ) << endl ;

    /*
    n=4  ---> 0100 in binary.
    shift_by shift the binary to right by shift_by places 
    so 0100 >> 1 ---> 0010 --> 2 in decimal
    */

}

/*
while doing a>>b : answer = a/(int)(pow(2,b))
*/