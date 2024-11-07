/*
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16
transpose this matrix and print like:-
1   5   9   13
2   6   10  14
3   7   11  15
4   8   12  16

*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void transposeMatrix(vector<vector<int>> &matrix);
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
    transposeMatrix(matrix);
    return 0;
}
void transposeMatrix(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    // transposing the matrix via swapping
    for (int i = 0; i < rows; i++)
    {
        for (int j = i+1; j < cols; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // printing the transposed  matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}