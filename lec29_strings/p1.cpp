
/*
    Character array;
     --> these are c strings 
     --> are used to make strings in cpp by adding '\0' (NULL character)at the end 
     --> ascii  value of this NULL ccharacter is 0
     --> '\0'  also takes the same space as characters take , so it is considered as character
     --> \n is also a NULL character and takes same space as  character takes 

     --> eg: char str2[]= { 'r','i','s','h','u','\0'};
        stored in memory : | r | i | s | h | u | '\0' |
    
    --> char str3[] = "Rishu";
        stored in memory : | r | i | s | h | u | '\0' |
    
    --> during length calculation NULL chaaracter  is ignored
    --> this is not dynamic i,e it  can't be resized 
*/

/*
    strings :
    --> something enclosed in double quotes
    --> strings are constant pointers  
*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[]={ 'a' , 'b' , 'c'}; // string array
    int arr[]= { 1,2,3};
    cout  << arr << endl;  // returns memory address of first integer
    cout <<"str: " <<str <<endl;  // internally all the characters club together. gives garbage at end because absene of NULL character

    // to make valid string , add '\0' at the end 
    char str2[]= { 'r','i','s','h','u','\0'};
    cout << "str2: " << str2 <<endl;
    cout <<" str2 length: " << strlen(str2) <<endl; // NULL character is ignored

    //some more valid declaration
    char str3[] = "Rishu";  // string literal : value can't be changed . NULL character was automatically added at end  
    cout << "str3: " << str3 <<endl;
    cout << " str3 length: " << strlen(str3) <<endl;
    cout << " str3[2]: "<< str3[2] <<endl;
    cout << " str3[length]: "<< str3[strlen(str3)] <<endl;  // nothing is outputed : pointing to NULL character
}