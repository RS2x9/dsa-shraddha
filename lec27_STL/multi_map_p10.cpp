/*
    multi map:
    --> duplicate  keys can be created 
    --> [] is not possible for inserting values 
    --> insert , emplace is used 
    --> erase() : removes all the key value pair of the mentioned key  in erase ()
*/

#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<char , int> mm;
    mm.emplace ( 'a',10);
    mm.emplace ( 'a',10);
    mm.emplace ( 'a',20);
    mm.emplace ( 'b',10);

    cout <<"mm: ";
    for ( auto num : mm)
    {
        cout << num.first << " "<< num.second << endl;
    }

    mm.erase('a');
    cout <<"\nmm: ";
    for ( auto num : mm)
    {
        cout << num.first << " "<< num.second << endl;
    }

    // deleting one key among all the repeated keys : use iterator
    // find() returns the iterator i,e memory address of that key so that only that get deleted and other repeated keys remain as it is 

    mm.emplace ( 'a',10);
    mm.emplace ( 'a',10);
    mm.emplace ( 'a',20);
    mm.emplace ( 'b',20);

    mm.erase( mm.find('a'));

    cout <<"\n mm: ";
    for ( auto num : mm)
    {
        cout << num.first << " "<< num.second << endl;
    }
}