#include <stdio.h>


// Function to perform selection sort in descending order
void selectionSort(int arr[], int n)
{
    int i, j, max;
    for (i = 0; i < n - 1; i++)
    {
        max = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[max])
            {
                max = j;
            }
        }
        // Swap the maximum element with the current element
        if (max != i)
        {
            arr[max] = arr[max] + arr[i];
            arr[i] = arr[max] - arr[i];
            arr[max] = arr[max] - arr[i];
        }
    }
}

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting the array in descending order
    selectionSort(arr, n);

    printf("Elements sorted in descending order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
