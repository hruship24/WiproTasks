/*
Given an unsorted array a of
size N of non-negative integers, find a continuous sub-array which adds to a given number sum.

Input Format:

The first line contains an integer, denoting the size of the array.


The second line contains integers denoting the elements of the array.

The last line contains an integer, denoting the sum.

Constraints

1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.
1<= n<=100000
Output Format:
The output line contains integers denoting the indexes.


TESTCASE 1:
Input: 7
[1, 4, 0, 0, 3, 10, 5]
sum = 7
Output : Sum found between indexes 1 and 4

TESTCASE 2:
Input:
2
[1, 4]
sum = 0
Output: No subarray found
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target_sum;
    printf("Enter the target sum: ");
    scanf("%d", &target_sum);

    int start = 0;
    int end = 0;
    int sum = arr[0];

    while (end < n) {
        if (sum == target_sum) {
            printf("Sum found between indexes %d and %d\n", start, end);
            return 0;
        }
        else if (sum < target_sum) {
            end++;
            if (end < n)
                sum += arr[end];
        }
        else {
            sum -= arr[start];
            start++;
        }
    }

    printf("No subarray found\n");

    return 0;
}
