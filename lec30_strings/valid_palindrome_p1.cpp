// leetocode -problem -125
/*
    --> A phrase is a palindrome if, after converting all uppercase letters 
    --> into lowercase letters and removing all non-alphanumeric characters, 
    --> it reads the same forward and backward. Alphanumeric characters include
    -->  letters and numbers.
    --> Given a string s, return true if it is a palindrome, or false otherwise.
*/

#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>        // to use isnum() : checks whether any character is alphabet or number
using namespace std;

bool ispal( string s)
{
    int st=0;   // starting index
    int end = s.size()-1;   // ending index 

    while (st<=end)
    {
        while ( st < end && isalnum(s[st]) ==false ) st++;  // ignores any non alphanumric character coming in start
        while ( st < end && isalnum(s[end]) ==false ) end--;    // ignores any non alphanumric character coming at end 
        if ( tolower( s[st]) != tolower( s[end]) ) return false ;   // string is not palindrome 
        st++;
        end--;
    }
    return true ;   // string is palindrome 
}
int main()
{
    string s;
    getline(cin,s );
    int b =ispal(s);
    if (b==1) cout <<"true";
    else cout <<"false";
}