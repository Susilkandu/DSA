/* Write a program where you are taking input of the size of the array and then taking all element one by one by user
 input and the sort them using selection sorting alogrithm
 ****condition is firstly biggest number put into the last and so on .
 like array is
                10 4 3 2 8
                8  4 3 2 10
                2  4 3 8 10
                2  3 4 8 10

*/

// driver code
#include <iostream>
using namespace std;
int main()
{
    // variable declaration
    int arr[1000];
    int n; // it store size of give by the user
    int inputSize; //it is also storing the size of given by the user
    cout << "How many number you want to sort in this time" << endl;
    cin >> n;
    inputSize = n;


    // via below code we are taking element and inserting into the array
    cout << "Enter the all numbers \t";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // via below code we are going to sort our array in the ascending order
    for(int i=0;i<inputSize-2;i++){
        int index=--n;
     for (int j = 0; j < n+1; j++)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }
        swap(arr[n],arr[index]);
    }

    // // via below code we are printing  sorted numbers
    cout << "Your sorted array is  \t";
    for (int i = 0; i < inputSize; i++)
    {
        cout << arr[i]<<'\t';
    }
    return 0;
}


