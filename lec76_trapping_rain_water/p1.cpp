/*
    Trapping rain water:-
    --> there can no water store on 1st and last bar
    --> water stored above the ith bar = min( Lmax , Rmax) - ht[i]
*/

// leetcode : 42

// brute force 
class Solution {
public:
    int trap(vector<int>& ht) 
    {
        int water =0 ; 
        for ( int i=1 ; i< ht.size() -1 ; i++)
        {
            int lm =0;      // left max element except the height at ith index 
            for ( int j=0 ; j < i ; j++)
            {
                lm = max ( lm , ht[j]);
            }
            int rm =0;      // right max element except the height at ith index 
            for ( int j = i+1 ; j< ht.size() ; j++)
            {
                rm = max(rm , ht[j]);
            }
            int trap = min( lm , rm ) - ht[i];      
            if ( trap >0)           // if current element is greater then water can't be trapped
            water = water + trap;
        }
        return water;

    }
};