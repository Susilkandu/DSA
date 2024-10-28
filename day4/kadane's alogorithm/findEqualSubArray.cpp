/* kadane's algorithm is a dynamic programming technique used to find
the maximum sum of a contiguous subarray in a one-diamentional array of integers. It efficient handle boath
positive and negative numbers.
*/

// write a program to divide a array into two sub-array that sum will be must equal

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool divide(vector<int> arr, int size);
int main()
{
    int size;
    cout << "How many elements you want to store";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter all element one by one";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // by below code we are dividing subarray into two part where every subarray sum is equal with each other
    cout << divide(arr, size);
    return 0;
}
bool divide(vector<int> arr, int size)
{
    // first we adding sum of array
    int totalSum = 0, i;
    bool ans = 0;
    for (i = 0; i < size; i++)
    {
        totalSum += arr[i];
    }
    if(totalSum%2!=0){
        return 0;
    }
    // now i am calculating sum of first subarry
    int prefix = 0, suffix = 0;
    for (i = 0; i < size; i++)
    {
        prefix += arr[i];
        suffix = totalSum - prefix;
        if (prefix == suffix)
        {
            ans=1;
        }
    }
    return ans;
}