// interview : google , paypal
/*
    Painters Partition Problem:
    --> Given are N boards of length of each given in the form of array 
    --> m painters 
    --> Each painter takes 1 unit of time to paint 1 unit of the board 
    --> task is to find the minimum time to paint all the boards under the constraints
        that any painter will only paint continious sections of boards . 
    

    --> eg arr[n]= { 10 , 10 ,10 ,10} , m=2 
        then :
        
            -- > if 1st painter will paint the first board 
                then 2nd painter has to paint all the boards .
                the rest painters can't paint the 3rd , .... left over boards .
            --> if first painter paints first two boards , then 
            2nd painter will paint the rest two boards 
            
            so in first case : max time =30 units 
                in second case : max is 20 units .
                the minimum time on comparing is 20 units of time 
    
    --> eg2 : arr[n]= { 40 , 30 , 10 , 20}  , m=2
             p1=40 units           p2=60 units , max= 60 units 
             p1 = 70 units          p2=30 units , max= 70 units 
             p1 =80 units           p2= 20 units  , max=80 units 

             the minimum time = minimum of all max = 60 units 

             --> now going out of bounds :
                --> min. time to complete the painting = 40 units i,e max(all the board lengths) , till this time other painters will complete the paintings `,
                 some times there are limit to number of painters 
                --> max. time to complete the painting = 100 units i,e sum of all the board lengths , when only one painter has to do the work 
                -->our final "ans" lies in this range .
                --> we will apply binary search on the possible values of ans i,e from min to max.
        
    --> find mid i,e maximum allowed time to paint 
    --> check whether it's possible or not 
    --> if mid is possible then we go for more optimum solution , so we move left to mid .
    --> if mid is not possible then " ans " is on right part beacuse painters won't be able to pint in min. time reqquired in question
*/

// this problem is similar to book allocation problem

#include<iostream> 
#include<vector> 
#include<climits>
using namespace std;

bool isvalid( vector<int> arr , int n , int m , int mid )  // mid is maximum allowed time 
{
    int painters =1 ; // initially 1st  painter  will paint 
    int time =0;  // he hasn't started painting 
    for (int i=0 ; i<n ; i++)
    {
        if ( time + arr[i] <= mid) 
        {
            time=time+arr[i];  // time taken to paint for individual painter
        }

        else 
        {
            painters++;  // we need more painters 
            time =arr[i] ; // time required by painter to paint the board 
        }
    }

    if ( painters > m) return false ;  // painters required are more than actual number of painters 
    else return true ;

    // time complexity = O(n)
}

int mintime( vector<int> arr , int &st , int &end , int n , int m)   // st: start
{
    int ans=-1;
    // ans range is from st to end 
    if (m>n) return -1;  // when painters are more than boards

    while (st <= end)       // time complexity =( n * log ( range of ans )) , n is from isvalid()
    {
        int mid = st + (end -st )/2;
        int a =isvalid( arr , n ,m , mid );
        if ( a==0)      // when invalid , move to right , ans lies there 
        {
            st =mid+1;
        }

        else        // when valid move to left , ans lies there 
        {
            ans = mid;
            end=mid-1;
        }

    }


    return ans;
}

int main()
{
    int n; // number of borads 
    cout <<"Number of boards: ";
    cin>> n ;
    vector<int> arr(n);
    cout <<"Length of each board: ";

    int sum=0;  // sum of all board lengths 
    int max_val=INT_MIN;  // maximum length of the board present in array
    for (int i=0 ; i<n ; i++)
    {
        cin>> arr[i];
        sum=sum+arr[i];
        max_val = max(max_val, arr[i]);
    }

    int m;
    cout<<"Number of painters : " ;
    cin>> m;

    cout << mintime ( arr , max_val , sum , n ,m ) << endl;
}