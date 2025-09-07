// linear search
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int row , cols , key;
    set<pair<int,int>> key_pos;
    cout << "Enter number of rows , columns , key: ";
    cin>> row >> cols >> key;
    int matrix[row][cols];
    cout << "Enter elements row wise : \n";
    for (int r=0 ; r< row ; r++)
    {
        for (int c=0 ; c<cols ; c++)
        {
            cin>> matrix[r][c];
            if ( matrix[r][c] == key)
            {
                pair<int,int> found = {r , c };
                key_pos.insert(found);
            }
        }
    }

    for ( auto p : key_pos)
    {
        cout << "row: " << p.first << ", " << "col: "<< p.second << endl;
    }
    
}