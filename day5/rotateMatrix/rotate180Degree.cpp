/*
rotate a matrix via 180 degree
given matrix is :-
                1   2   3   4
                5   6   7   8
                9   10  11  12
                13  14  15  16
outup will come :-
                16  15  14  13
                12  11  10  9
                8   7   6   5
                4   3   2   1
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate180(vector<vector<int>> &matrix, int rows, int cols);
int main()
{
    int rows = 4, cols = 4;
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
    rotate180(matrix, rows, cols);
    return 0;
}
void rotate180(vector<vector<int>> &matrix, int rows, int cols)
{
    int n = 1;
    while (n < 3)
    {
        // first transpose matrix
        for (int i = 0; i < rows; i++)
        {
            for (int j = i + 1; j < cols; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // reverse array row
        for (int i = 0; i < 4; i++)
        {
            int start = 0, end = cols - 1;
            while (start < end)
            {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
        n++;
    }
    // output
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}