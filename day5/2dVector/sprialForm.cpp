/*
1   2   3   4
5   6   7   8
9   10  11  12  
13  14  15  16
17  18  19  20  
print this in spiral form like
4   8   7   9   2   4   2   7   9   7   1   7   5   6   5   4
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printInSpiralForm(vector<vector<int>> &matrix);
int main()
{
    int rows = 5, cols = 4;
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
    printInSpiralForm(matrix);
    return 0;
}
void printInSpiralForm(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    int top = 0, right = cols - 1, bottom = rows - 1, left = 0;
    while (top <= bottom && left <= right)
    {
        // print top
        for (int i = top; i <= right; i++)
        {
            cout << matrix[top][i] << "\t";
        }

        top++;
        // print right
        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << "\t";
        }

        right--;
        // print bottom
        for (int i = right; i >= left; i--)
        {
            cout << matrix[bottom][i] << "\t";
        }
        bottom--;
        // print left
        for (int i = bottom; i >= top; i--)
        {
            cout << matrix[i][left] << "\t";
        }
        left++;
    }
}