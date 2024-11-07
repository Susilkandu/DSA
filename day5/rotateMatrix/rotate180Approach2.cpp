/*
rotate a matrix via 90 degree
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
    // Change every rows into inverse row'th
    int lr = rows - 1;
    for (int i = 0; i < rows / 2; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            swap(matrix[i][j], matrix[lr][j]);
        }
        lr--;
    }

    // reverse every rows
    for (int i = 0; i < rows; i++)
    {
        int start = 0, end = rows - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
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