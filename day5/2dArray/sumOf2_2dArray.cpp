// you have given 2 2d array . boathe have n column and n row so store there sum in a new 2d array
#include <iostream>
using namespace std;
int main()
{
    int arrSum[3][3];
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arrSum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    // result of sum into new arrSum
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arrSum[i][j] << "\t";
        }
        cout << endl;
    }
}