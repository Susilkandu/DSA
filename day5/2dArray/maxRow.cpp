// Write a  program to find out  the maximum sum of the which array
#include <iostream>
using namespace std;
int findMaxRow(int arr[][3], int row, int col);
int main()
{
    int matrix[4][3] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
        cout<<"no. "<<findMaxRow(matrix,4,3)<<"row has maximum sum rather than another rows";

    return 0;
}
int findMaxRow(int arr[][3], int row, int col)
{
    int maximum = 0, index = 0;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];
        }
        if (maximum < total)
        {
            maximum = total;
            index = i;
        }
    }
    return index;
}