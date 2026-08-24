/*
    Unordered set: 
    --> unique values
    --> any order
    --> no concept of lower_bound() , upper_bound()
*/

#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set <int> us;
    us.insert( 1 );
    us.insert( 4);
    us.insert( 3);
    us.insert( 2 );

    cout << " us: ";
    for (auto num : us)
    {
        cout << num << " ";
    }
}