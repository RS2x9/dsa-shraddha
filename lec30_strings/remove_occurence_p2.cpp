//  leetcode -problem - 1910
/*
    Remove All Occurences of a string :
    --> eg: s="daabcbaabcbc"    , part="abc"
    --> to remove part from s 
       --> result="dab"
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s ;
    string part;
    cin>> s >> part;
    int s_len=s.size();
    int part_len = part.size();
    while ( s.find(part) < s_len)  // if part not in s then it returns invalid index 
    {
        int index = s.find(part);   // return the first index of occurence of part
        s.erase ( index , part_len);   
    }
    cout << s << endl;
}