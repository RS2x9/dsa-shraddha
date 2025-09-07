/*
    Map:
    --> stores key value pair 
    --> all keys are unique 
    --> key , value can be of any datatype 
    --> automatically stored in ascending order of keys 

*/

/*
    Time complexity:
    --> map is internally implemented as self balancing tree
    --> insert: O(logn)
    --> erase: O(logn )
    --> count: O(logn)
*/

#include<iostream>
#include<map>
using namespace std;
int main()
{
    // declare 
    map<char , int> m;

    // insert , change 
    m['a']=10;
    m['b']=20;
    m['a']=30 ; // this overwrites the past value of key

    // insert()
    m.insert( {'c',40} );
    m.emplace( 'd',50);

    for (auto num : m)
    {
        cout << num.first<<" "<< num.second << endl;
    }

    // count() : returns whether any key is present in map or not 
    cout<<"\nis e present in map: " << m.count('e') <<endl;
    cout<<"is a present in map: " << m.count('a') << endl;

    // erase()  : delets the key value pair 
    m.erase('a') ;
    for (auto num : m)
    {
        cout << num.first<<" "<< num.second << endl;
    }


    /*
        find(): searches for key value pair 
        --> if key is found then iterator is returned 
        --> if key is not found then m.end() is returned 
    */

    if ( m.find('b') != m.end() )
    {
        cout <<"found";
    }
    else cout <<" not found ";

    map <int ,int> m2;
    m2.emplace(  1,2);
    m2.emplace(  1,2);
    m2.emplace(  1,2);

    cout <<" \n m2: ";
    // for repeating same key , only one time gets printed 
    for (auto num : m2)
    {
        cout << num.first<<" "<<num.second<<endl;
    }

}