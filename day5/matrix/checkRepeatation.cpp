/*
// find out the number of the repeatation of a target number
given matrix is :-
    {1,1,1,2},
    {3,4,5,5},
    {6,6,6,6},
    {9,10,11,12}
so from this matrix find out the a given number is repeate or not or exist or not
using binary search with the time complexity O(log Row + log columns)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void doBinarySearch(vector<vector<int>> &matrix);
int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1, 2},
        {3, 4, 5, 5},
        {6, 6, 6, 6},
        {9, 10, 11, 12}};
    doBinarySearch(matrix);
    return 0;
}
void doBinarySearch(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int columns = matrix[0].size();
    int cClmn = columns - 1;
    int cRw = 0;
    int target = 6;
    int nTime = 0;
    while (cClmn >= 0 && cRw <= rows - 1)
    {
        if (matrix[cRw][cClmn] == target)
        {
            while (matrix[cRw][cClmn] == target)
            {
                if (cClmn == 0)
                {
                    cClmn = columns - 1;
                    cRw--;
                }
                nTime++;
                cClmn--;
            }
            cout << target << " is repeated on " << nTime<<" times";
            break;
        }
        else if (matrix[cRw][cClmn] > target)
        {
            cClmn--;
        }
        else
        {
            cRw++;
        }
    }
}