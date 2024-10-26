// search element in rotated array
// it is not solved yet 
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7, 8, 9, 10, 13, 22, 1, 2, 3, 4, 5};
    int n = 11;
    int target = 7;
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            cout << target << " is found on index no " << mid << endl;
            break;
        }
        else if (arr[mid] >= arr[start])
        {
            if (target <arr[mid] && arr[start]<=target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (target >= arr[mid] && target >= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                if(target>arr[mid] &&  target <=arr[end]){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
    }

    return 0;
}