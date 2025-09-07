// maximum column sum
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int row , cols , max_sum=INT_MIN;
    cout << "Enter rows , columns : ";
    cin>> row >> cols ;
    int matrix[row][cols];
    cout << "Enter elements of matrix row wise : ";
    for ( int r=0 ; r<row ; r++)
    {
        for ( int c=0 ; c<cols ; c++)
        {
            cin>> matrix[r][c];
        }
    }

    for (int c=0 ; c< cols ; c++)
    {
        int sums =0;
        for (int r=0 ; r< row ; r++)
        {
            sums += matrix[r][c];       // calcutes sum of one column 
        }
        max_sum= max(max_sum , sums );      // calcultes max sum of each column
    }

    cout << " max_sum : " << max_sum ;
}