/*
    Multi set:
    --> can store same values 
    --> in ascending order
*/

#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert( 1 ); 
    ms.insert( 2 ); 
    ms.insert( 3 ); 
    ms.insert( 4 ); 

    ms.insert( 1 ); 
    ms.insert( 1 );
    
    cout <<" ms: ";
    for (auto num : ms)
    {
        cout <<num <<" ";
    }
}