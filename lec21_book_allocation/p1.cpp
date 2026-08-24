// google interview 

// video link : https://youtu.be/JRAByolWqhw?si=YCt41ZS1LuTQitQ4

/*
    Book allocation :
    --> N books, each with a certain number of pages (A[i])
    --> M students  , so that the maximum number of pages allocated to a student is minimum
    --> Your task is to allocate books to students such that:
        Each student gets at least one book.
         Books are assigned in contiguous order (no skipping or rearranging)
        The goal is to minimize the maximum number of pages assigned to any student
    
    --> example :
            arr={ 2,1,3,4}  , N=4
            then:
                s1=2    s2=8        , max=8
                s1=3    s2=7        , max=7
                s1=6    s2=4        ,max=6

            among all the three max , the minimum is 6 and our answer "ans" .
    
    --> when m>n then no solution
    --> 0 < ans < sum of all elements of array , we will apply binary search for these values of sums ,
         and ans is one among them.
    --> in sums(this is sorted array) :
                --> st=0
                --> end=sum of all the array
                --> mid can be valid or invlaid 
                --> if mid is invalid then answer lies to right part , beacuse distribution won't be possible 
                --> then st=mid+1
                --> if new mid is valid distribution then it may be not the minimum sum i,e ans 
                    so search in left part i,e between new mid value and new st value 
    --> check for validity of mid value :
        we have divide n books to m students such that it couldn't cross mid value .
        see the above example , if mid value crooses then there will be a student who will not 
        get any book , at that time mid will become invalid
*/

#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> arr , int n , int m , int mid)  // mid is max allowed pages 
{
    int students=1;  // initially we have to give to 1 student 
    int pages =0;   // initial pages allocated to that student 
    
    for (int i=0 ; i< n ; i++)  // book allocation started in contigious manner
    {
        if (arr[i] > mid )      // important edge case  
        {
            return false ;  // else conditions will fail 
            // you can take one example and analyze it 
        }

        if ( pages + arr[i] <= mid ) // max allocation to 1 student is max mid value 
        {
            pages =pages+arr[i];  // pages allocated to that student 
        }

        else // more students are required 
        {
            students ++;
            pages=arr[i] ; // pages alloating to this student  is from arr[i]
        }
    }

    if (students <= m )  return true ;  // valid allocation 
    else return false ;   // invalid allocation , when required students is more than the actual number of students 

    // time complexity=O(n)
}

int isallocated( vector<int> arr , int n , int m , int sum)
{
    if (m>n) return -1;
    int st=0;  // start sum when 1st student have no pages (out of condition )
    int end =sum ;   // only one studtnt has all the pages (out of condition)
    // our ans lies in between st , end  . 

    int ans=-1 ;   
    while (st<=end)    // time complexity =O(n*log(range of sum)) , n was from isvalid()
    {
        int mid =st + (end-st)/2 ; // maximum allowed pages to one student 

        if ( isvalid(arr , n , m ,mid)  == 0 ) 
        {
            st=mid+1 ; // ans lies on right part in sum range 
        }

        else 
        {
            ans=mid ;
            end=mid-1 ;     // ans lies on left part in sum range 
        }
    }

    return ans;
    
}

int main()
{
    int n ;     // number of books 
    cout <<"Number of books : ";
    cin>> n;
    vector<int> arr(n);
    cout <<"NUmber of pages in each book: ";
    int sum=0;   // sum of all the pages in array
    for (int i=0 ; i< n ; i++)      // time complexity =O(n)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    int m ;  // actual number of students 
    cout <<" Number of students: ";
    cin>>m;

    cout << isallocated( arr , n , m , sum) << endl;
}