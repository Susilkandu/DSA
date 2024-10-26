/* Write a program to print all sub-array of and n size array
like arr[1,2,3,4,5,6]
so sub-array output must be :-
{1},{1,2},{1,2,3},{1,2,3,4},{1,2,3,4,5},{1,2,3,4,5,6}
{2},{2,3},{2,3,4},{2,3,4,5},{2,3,4,5,6}
{3},{3,4},{3,4,5},{3,4,5,6}
{4},{4,5},{4,5,6}
{5},{5,6}
{6}
*/
#include <stdio.h>

void printSubarrays(int arr[], int n) {
    // Outer loop for the starting index
    for (int start = 0; start < n; start++) {
        // Inner loop for the ending index
        for (int end = start; end < n; end++) {
            printf("{");
            // Print elements from start to end index
            for (int k = start; k <= end; k++) {
                printf("%d", arr[k]);
                if (k < end) {
                    printf(","); // Print comma between elements
                }
            }
            printf("}\n"); // Close the subarray
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printSubarrays(arr, n); // Call the function to print subarrays

    return 0;
}
