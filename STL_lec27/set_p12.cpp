/*
    Set: 
    --> it's a container 
    --> stores unique values in sorted order

    --> < set name>.lower_bound( <value> )
        -->  it returns memory address of that element i,e iterator
        --> so after dereferening :
            --> returns the value if present in set
            --> returns larger value than itself if not present in set
            --> returns *( <set name >.end() ) i,e 0 when value , larger value than itself is not present 
    
    --> < set name >.upper_bound( < value > )
        --> after deferencing :
            --> it returns the value greater than itself
*/

/*
    Time Complexity :
    --> set internally uses self balancing tree
    --> insert: O(logn)
    --> erase: O(logn )
    --> count: O(logn)
*/

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    s.insert(1);
    s.insert(2);
    s.insert(7);
    cout <<"size : "<<s.size();
    cout <<"\n s: ";
    for (auto num : s)
    {
        cout <<num<< " ";
    }

    // lower_bound() 
    cout <<" \ns.lower_bound(4): "<< *(s.lower_bound(4) ) << endl ;   // this function will return 4 because it's present in set 
    cout <<"s.lower_bound(6): "<< *( s.lower_bound(6) ) <<endl ;   // this will return 7 becuase 6 is not present in set 
    cout <<"s.lower_bound(8): "<< *( s.lower_bound(8) ) <<endl ;    // retuns 0 or garbage value 

    // upper_bound()
    cout << "s.upper_bound(4) : " << *(s.upper_bound(4) );
}