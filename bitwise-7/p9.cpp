/*
1)  long :
can be used as long int , long double ,etc
if sizeof(int)=4 bytes then sizeof (long int )>=4 bytes

2)  short :
can be used as short int .

3) long long or long long int are same 

4) signed : the data type  can store both positive and negative values 

5) unsigned : only stores positive values 
so there is no need to reserve MSB bit for making data as positive or negative .
it's used to store values there : 
so unsigned int can store values : 0 to (2^32)-1 in a 32 bit system 
  & (2^32) is double the size of (2^31)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout <<"Size of int :"<<sizeof(int)<<endl;
    cout<<"size of long int :"<<sizeof (long int )<<endl;

    cout <<"size of short int :"<<sizeof(short int)<<endl;
    cout <<"size of long long "<<sizeof (long long int )<<endl;

    unsigned int x= -10;  // here compiler won't  give any errors 
    cout<<x<<endl;  // it's giving very large value 
    /*
    reason : to store  -10 in binary format , compiler has converted it to 2's complement , so MSB will be 1.
    since x is unsigned so compiler just returns the magnitude of that binary format because 
    compiler don't have to worry whether MSB is used for any signed int calculatons 
    */
}