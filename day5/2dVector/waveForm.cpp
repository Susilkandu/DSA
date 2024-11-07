/*
4   8   7   9
7   5   6   2
1   4   5   4
7   9   7   2
print this like wave form
4   7   1   7   9   4   5   8   7   6   5   7   2   4   2   9
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int rows=4,cols=4;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    int sl = 1;
    // initializing the value of the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = sl;
            sl++;
        }
        cout << "\n";
    }
    // printing the initialized value of the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    // printing the matrix value in the wave form
    cout<<"\n";
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << matrix[j][i] << "\t";
            }
        }
        else
        {
            for (int l = rows-1; l >= 0; l--)
            {
                cout << matrix[l][i] << "\t";
            }
        }
    }
    return 0;
}