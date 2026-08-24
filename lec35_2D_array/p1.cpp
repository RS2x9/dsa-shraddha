/*
    2-D arrays :
    --> has rows and columns 
    --> eg: int matrix[r][c] , r= rows , c= columns 
    --> individual row is considered as individual array.
*/

#include<iostream>
using namespace std;
int main()
{
    int row =2 , cols =3;
    // initialising 2-D
    int matrix[row][cols]={ {1,2,3} , {4,5,6} } ;

    cout << "2-D matrix: " << endl;
    for (int r=0 ; r< row ; r++)
    {
        for (int c=0 ; c<cols ; c++)
        {
            cout << matrix[r][c] << " " ;       //  accessing each cell
        }
        cout << endl;
    }
}

/*
    2-D array in memory:
    --> are stored linearly only .
    --> two possible way of storage : row major , column major 
    --> Row major : 
        --> elements are stored in one row only 
    --> column major :
        --> elements are stored in one row only but with column wise elements 
*/