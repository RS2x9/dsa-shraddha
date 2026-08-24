/*
    Pair:
    --> part of utility library:
        --> A utility library is a collection of reusable functions, classes, or tools designed 
        to simplify common programming tasks. These libraries typically provide helpers for operations like:

            --> Data manipulation (sorting, filtering, transforming)
            --> String and number formatting
            --> Date and time handling
            --> Mathematical computations
            --> Type conversions
            --> File and stream operations

    --> initialize :
            pair < <datatype1> , <datatype2> > <variable> ={ <values> };
*/

#include<iostream>
#include<vector> 
using namespace std;;
int main()
{
    // initialize 
    pair < int , int > p ={ 1,3};
    cout <<" p.first: " << p.first <<endl;     // prints first element of pair 
    cout <<" p.second: " << p.second << endl;       // prints second element of pair  

    pair < string , int > p2 ={ "Rishu" , 19};
    cout <<" name: " << p2.first << endl;
    cout <<" age: " << p2.second <<endl;

    // creating pair of pair 
    pair < string , pair <string , int > > p3 ={ "wow " , { "RS" , 7} };
    cout  << p3.first <<" " ;
    cout << p3.second.first;
    cout << p3.second.second << endl;

    // creating vector of pairs 
    vector <pair<int ,int>> vec ={ {1,2} , {3,4}, {5,6} };
    cout <<" vector of pairs: \n";
    for ( pair<int, int> num : vec)
    {
        cout << num.first << " "<< num.second << endl;
    }

    // adding some pairs to vectors 
    vec.push_back( {7,8} );     // assumes pair is already created , it only inserts
    vec.emplace_back( 9 ,10 );  // create in-place object 
    cout << " vector of pairs : \n";
    for (auto num : vec)
    {
        cout << num.first << " " << num.second << endl;
    }

}