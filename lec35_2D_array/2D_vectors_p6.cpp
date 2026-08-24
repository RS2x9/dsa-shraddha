/*
    2D vectors 
    --> these are like 2D arrays 
    --> dynamic in nature 
    --> total number of rows rows = <matrix name>.size()  ;    // this is always true 
    --> toatl number of columns = number of elements in one row = <matrix name>[i].size() .
    --> we can have differnt length of the row in 2d vector 
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // declaration
    vector<vector<int>> matrix1;

    // initialisation
    vector<vector<int>> matrix2 = { {1,2,3}  , {4,5,6} , { 7,8,9,10,11}};
    cout << matrix2[1][2] << endl;
    cout << " matrix2:" << endl;
    for( int r=0; r<matrix2.size() ; r++)
    {
        for (int c=0 ; c< matrix2[r].size() ; c++)
        {
            cout << matrix2[r][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
}