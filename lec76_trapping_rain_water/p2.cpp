// method -2 : also submitted on leetcode

class Solution {
public:
    int trap(vector<int>& ht) 
    {
        int n = ht.size();
        vector<int> left(n,0);      // stores the max value calculated from left
        int max_v =0;       // tracks max value 
        for (int i=0 ; i< n ; i++)
        {
            max_v = max( max_v , ht[i]);
            left[i] = max_v;
        }
        max_v =0 ; 
        vector<int> right( n,0);        // stores the max value calculated from left
        for ( int i= n-1 ; i>=0 ; i--)
        {
            max_v= max( max_v , ht[i]);
            right[i]= max_v;
        }
        int water =0;       // stores the total amount of water
        for ( int i =1 ; i< n-1 ; i++)
        {
            int trap = min( left[i] , right[i]) - ht[i];
            if (trap >0)    // if current height is highest then water can't be stored
            {
                water = water + trap;
            }
        }
        return water;
    }
};

// time complexity = O(n)
// space complexity = O(n) ; left and right arrays were made of size n
// this method is known as prefix array methhod because we have already calculated some values to find out the final answer