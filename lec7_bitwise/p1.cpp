/*
                bitwise  & : after operation returns decimal value 
                0 & 0 --> 0
                0 & 1 --> 0
                1 & 0 --> 0
                1 & 1 --> 1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout <<(4&8)<<endl;     // 0100 & 1000 -->0
    cout <<(5&4)<<endl;     // 0101 & 0100  --> 0100 --> in decimal : 4
    
}