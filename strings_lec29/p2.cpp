/*
    Character Array Input : 
    --> one word input without spaces : cin>> str
    --> one sentence input :
        cin.getline( str , len , delim? )
            --> str : name of character array
            --> len : length of array
            --> delim? : it's delimiter : stops the input 
                --> '\n' is delimiter by default .
                --> we can specify any character there 
*/

#include<iostream>
using namespace std;

int main()
{
    int n =40;  //  at 40th NULL character will be stored 
    char str[n];   // size is required when nothing is initialisez during declaration
    cout << " Enter sentence : ";
    cin.getline(str, n );  // '\n' is there by default 
    cout << str <<endl;

    // we wish the user should stop after fullstop
    cout << " Enter anything before fullstop: ";
    cin.getline(str , n , '.');
    cout << str <<endl;

    // outpputing character array as we do in integer array 
    char str2[]= "Rishi";
    for (char ch : str2)
    {
        cout << ch << " ";
    }
    // couting the length of str2 
    int len=0;
    for (int i=0 ; i< str2[i] !='\0' ; i++)
    {
        len++;
    }
    cout << "\n str2 length: " << len <<endl;

}