// find the (k)th missing positive number
// i have confustion into it
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n - 1, mid;
    int k = 0;
    int ans=n;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid]-mid-1>=k){
            ans=mid;
            end= mid-1;
        }else{
            start=mid+1;
        }
    }
    cout<<ans;

    return 0;
}