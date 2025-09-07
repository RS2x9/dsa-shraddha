/*
    diagonal sum of matrix:
    --> calculate primary diagonal sum 
    --> calculate secondary diagonal sum 
    --> if numer of rows or columns is odd then there will be one element which will 
        adds up twice , subtract it for one time .
    --> output the final sum 
*/

#include<iostream>
using namespace std;
int main()
{
    int row , cols ;
    int prim_sum=0;
    int sec_sum=0;
    cout << " Enter  rows , cols : " ;
    cin >> row >> cols ;
    int matrix[row][cols];
    cout << " Enter elements of matrix: " ;
    for (int r=0 ; r< row ; r++)
    {
        for ( int c=0 ; c< cols ; c++)
        {
            cin>> matrix[r][c];
            // primary diagonal  sum
            if (r==c) prim_sum+=matrix[r][c];
        }
    }

    // secondary diagonal sum 
    for ( int r=0 , c=cols-1 ; r<row && c>=0 ; r++ , c--)
    {
        sec_sum+=matrix[r][c];
    }

    int final_sum = prim_sum+ sec_sum;
    if (row%2 !=0)  // matrix has odd number of rows or columns 
    {
        row=row/2;
        final_sum = final_sum- matrix[row][row];
    }

    cout <<  " sum of the diagonal : " << final_sum ; 
    
}