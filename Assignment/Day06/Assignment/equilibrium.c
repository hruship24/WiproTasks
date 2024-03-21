/*

Given an array A of N numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.

Constraints
1<= n<=100

1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium
index (if any) or -1 (if no equilibrium indexes exist).

TESTCASE 1:
Input:
7
[-7, 1, 5, 2, -4, 3, 0]
Output:
3

*/

#include <stdio.h>
int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 1};
    int i, j, k;
    int leftsum = 0, rightsum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < size; i++)
    {
        // Calculate left sum
        leftsum = 0; // Reset leftsum for each i
        for (j = 0; j < i; j++)
        {
            leftsum += arr[j];
        }

        // Calculate right sum
        rightsum = 0; // Reset rightsum for each i
        for (k = i + 1; k < size; k++)
        {
            rightsum += arr[k];
        }

        //printf("\nleft sum = %d and right sum = %d", leftsum, rightsum);
        
        // Check for equilibrium
        if (leftsum == rightsum)
        {
            printf("\narr[%d] = %d is an equilibrium point\n", i, arr[i]);
            break; // If equilibrium point found, break the loop
        }
    }

    if (i == size)
    {
        printf("\nNo equilibrium point found\n");
    }

    return 0;
}
