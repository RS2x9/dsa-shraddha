/*
        Static and dynamic allocation :

        --> memory two types : static , dynamic 
        --> Static : It's get allocated during the compile time like in arrays 
        --> Dynamic : it's get allocated during runtime (or execution time ) like in vectors we use push_back()
        during the runtime to increase the size of the vector .

    --> Static allocation occurs in stack memory like in the case of arrays 
    --> Dynamic allocation occurs in heap memory like in the case of vectors 

*/

/*
        how vectors are exactly created in memory ??
        solution >> 
        --> vector <int> v ;   // now it's size if 0
        --> now : v.push_back(1);  // a vector will be created in memory 
        --> internally vectors are arrays only 
        --> again : v.push_back(2)  ; this 2 wishies to go to to that same vector created above but it's 
        already full , so a new array is creted by doubling the previous made array and then this 2 is stored in the new array
        --> this new array formed will be named as v and the previous one will be deleted from memory , this all is done automatically .
        ---> again : v.push_back(3) ;  the size will get doubled again because there is no space to store 3 and the new array will be named as v .

        --> vector property : size (number of elements ) , capacity .
        --> now v has size of 3 and capacity of 4.
        --> again : v.push_back(4) ; this time there is one space is left among 4 , so 4 can be stored there .
        --> 
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(1);
    cout<<"size: "<<v.size()<<endl;
    cout <<"capacity: "<<v.capacity()<<"\n\n";

    v.push_back(2);
    cout<<"size: "<<v.size()<<endl;
    cout <<"capacity: "<<v.capacity()<<endl<<"\n";

    v.push_back(3);
    cout<<"size: "<<v.size()<<endl;
    cout <<"capacity: "<<v.capacity()<<endl<<"\n";

    v.push_back(4);
    cout<<"size: "<<v.size()<<endl;
    cout <<"capacity: "<<v.capacity()<<endl<<"\n";

}