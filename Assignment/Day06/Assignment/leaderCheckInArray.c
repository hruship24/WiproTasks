/*
Given an array of positive integers. Your task is to find the leaders
in the array.An element is leader if it is greater than all the elements to its
right side.
And the rightmost_element element is always a leader.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.

Constraints
1<= n<=100
-1000<=arr[i]<= 1000, where arr is the ith element of the array.

Output Format:
The output line prints all the leaders in the array.

TESTCASE 1:
Input:
6
6 7 4 3 5 2
Output:
2 5 7

TESTCASE 2:
Input:
5
2 6 3 8 4
Output:
4 8
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

    int rightmost_element = arr[n - 1];
    printf("Leaders in the array: %d", rightmost_element);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > rightmost_element) {
            printf(" %d", arr[i]);
            rightmost_element = arr[i];
        }
    }

    return 0;
}

