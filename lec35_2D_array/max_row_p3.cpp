// maximum row sum 
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int row , cols , max_sum= INT_MIN;
    cout << "rows , columns : ";
    cin>> row >> cols ;
    int matrix[row][cols];
    cout << "Enter elements of matrx: ";
    for (int r=0 ; r< row ; r++)
    {
        int sums=0;
        for (int c=0 ; c<cols ; c++)
        {
            cin>> matrix[r][c];
            sums+= matrix[r][c];     // calculates the sum of one row of matrix
        }
        max_sum = max( max_sum , sums);
    }
    cout << " maximum sum : " << max_sum ;
}