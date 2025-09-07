/*
    Unorederd map:
    --> keeps the data in random order 
    --> unique keys 
*/

/*
    Time complexity:
    --> insert: O(1)
    --> erase: O(1)
    --> count: O(1)
    --> in rare cases of collision: O(n)
    --> In C++, std::unordered_map uses hashing to store key-value pairs. 
        Each key is passed through a hash function to determine its position (bucket) in an internal array.
        
        Collision Defined:
        A collision occurs when two different keys produce the same hash value, meaning they’re assigned to the same bucket.
*/

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> um;
    um.emplace( 1,2);
    um.emplace( 4,5);
    um.emplace( 7,10);
    cout << "um: ";
    for (auto num : um)
    {
        cout << num.first<<" "<< num.second<<endl;
    }
}