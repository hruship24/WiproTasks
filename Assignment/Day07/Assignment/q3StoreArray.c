#include <stdio.h>

storeArray(int arr[], int num);
display(int arr[], int num);

// to store an array
storeArray(int arr[], int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// to display the values of the array
display(int arr[], int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int i, num;
    int arr[num];

    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &num);

    printf("\nEnter the elements up to %d: ", num);
    storeArray(arr, num);

    printf("Stored elements are: ");
    display(arr, num);

    return 0;
}
