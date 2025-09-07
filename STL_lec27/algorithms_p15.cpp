#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool custom_comparator( pair<int, int> p1 , pair<int , int> p2)
{
    if ( p1.second < p2.second) return true;
    else return false;
}

bool custom_comparator2( pair<int, int> p1 , pair<int,int> p2)
{
    if(p2.second> p1.second) return true;
    if ( p2.second< p1.second) return false ;

    if ( p2.first > p1.first) return true ;
    else return false ;
}
int main()
{
    // sorting in ascending order 
    int arr[5] ={4,3,1,5,2};
    sort( arr , arr+5);
    for (int val : arr )
    {
        cout << val << " ";
    }

    vector <int> arr2 = {4,3,1,5,2};
    cout<<"\n";
    sort( arr2.begin() , arr2.end() );
    for (int val : arr2 )
    {
        cout << val << " ";
    }

    // sorting in descending order
    sort (arr2.begin() , arr2.end() , greater<int>() );
    cout <<"\n descend: ";
    for (int val : arr2 )
    {
        cout << val << " ";
    }

    // vector of pairs
    vector< pair<int , int>> vec ={ {4,10} ,{ 3,20} , {2,100} };
    sort( vec.begin() , vec.end() );   // sorts the first values 
    cout <<"\n vector of pairs : \n";
    for (auto num : vec)
    {
        cout<< num.first << " "<< num.second <<endl;
    }

    /*
        sorting the second values in pairs 
        --> we need custom comparators : 
            --> returns boolean values
    */

    sort( vec.begin() , vec.end() , custom_comparator);
    cout<< "\n sorting the second values in vec: \n";
    for (auto num : vec)
    {
        cout<< num.first << " "<< num.second <<endl;
    }

    /*
        sorting the second values in pairs 
        --> we need custom comparators : 
            --> returns boolean values
        --> when two values become same then sort on the basis of keys
    */

    vector< pair<int , int>> vec2 ={ {4,10} ,{ 3,20} , {2,100} ,{1,100}};
    sort ( vec2.begin() , vec2.end() , custom_comparator2);
    cout <<"\n sorting second values in vec2:\n";
    for (auto num :vec2)
    {
        cout <<num.first << " "<<num.second <<endl;
    }

    // reverse() : reverses the vector
    vector<int> vec3={2,4,5,3,1};
    reverse( vec3.begin() , vec3.end() );
    cout <<"\n vec3 reversed: ";
    for (int num : vec3)
    {
        cout << num <<" ";
    }

    // reverse a range of elements in vector
    vector<int> vec4 = { 1,2,3,4,5,6,7};
    reverse( vec4.begin() +1 , vec4.begin() +4 );
    cout <<" \n vec4 reversed from index1 - index3: ";
    for (int val : vec4)
    {
        cout << val <<" ";
    }

    /*
         next permutation:
            --> s="abc";
                then next permutations are :
                    --> abc
                        acb
                        bac
                        bca
                        cab
                        cba
    */
    string s="abc";
    next_permutation( s.begin() , s.end() );
    cout <<"\n next permuttaion of abc: " <<s <<endl;

    //prev_permutation
    string s2="cab";
    prev_permutation( s2.begin() , s2.end() ) ;
    cout<<" prev_permutation: " << s2 << endl;

    int a=10 ; int b=20;
    // min
    cout << " min: "<<min(a,b)<<endl;

    // max
    cout << " max: " << max(a,b)<< endl;

    // swap
    swap(a,b);
    cout << " new a: " << a <<endl;

    // max in array
    vector <int> vec5 ={ 1,2,3,4,5};
    cout << " max in array: " << *( max_element( vec5.begin() , vec5.end() )) <<endl;

    // min in array
    cout << " min in array: " << *( min_element( vec5.begin() , vec5.end() )) <<endl;

    // binary_search : returns a boolean value 
    int target =5;
    cout << " binary_search of 4: " << binary_search( vec5.begin() , vec5.end() , target) <<endl;
    cout << " binary_search of 8: " << binary_search( vec5.begin() , vec5.end() , 8) <<endl;

    // the below three functions are  not compativle for all IDE's
    // __built_popcount() : returns total number of 1s in binary form of number
    int n=15;
    cout << " Total 1s : " << __builtin_popcount(n) << endl;  

    // for the numbers like long int : __bulit_popcountl()
    cout<< " for long int total 1s : " << __builtin_popcountl(n) <<endl;

    // for long long int : __builtin_popcountll() 
    cout << " for long long int total 1s: " << __builtin_popcountll(15) << endl;
    
}