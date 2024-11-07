#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<vector<int>> matrix(3, vector<int>(2, 2));
    return 0;
    cout<<"enter 6 elements";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"You entered :- ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] <<" ";
        }
    }
    
    return 0;
}