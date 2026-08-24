/*
            Pass by value
*/

#include <bits/stdc++.h>
using namespace std;
int cal(int a , int b)
{
    a=a+10;
    b=b+10;
    return a+b;
}
int main()
{
    int x=4,y=5;
    cout <<cal(x,y)<<endl;  // here a copy of the value is passed to cal() , making no changes in the original address of x,y

    cout <<x+y;
    
}

// this method consumes more memory space 