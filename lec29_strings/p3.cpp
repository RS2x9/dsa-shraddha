/*
    strings :
    --> input syntax: getline ( cin , string name , delim? )
        --> by default : '\n'
        --> we can specify our own 
    --> dynamic i,e it be changed and resized in runtime 
    --> concatination and  comparing like opeartions in character array is done using loops
    -->  comparision is done: lexographical order
*/

#include<iostream>
#include<string>    //optional  
#include<algorithm>
using namespace std;
int main()
{
    // declaration 
    string str="RIshi";
    cout << " str: " << str << endl;

    // input 
    string str2;
    cout << "Enter something : ";
    getline(cin , str2);
    cout << " str2: " << str2 <<endl;

    // resizing str
    str="h";
    cout << " resized str: " << str <<endl;

    // concatination 
    string str3="ello world ";
    string str4=str+str3;
    cout << " str4 : " << str4 << endl;

    // comparing 
    cout << ( str3==str4) <<endl;
    cout << 'b'-'a' <<endl;

    cout<< " str4 lenght: " << str4.length() <<endl;

    // reverse()
    reverse ( str4.begin() , str4.end());
    cout << " reverse str4: " << str4 << endl;
}