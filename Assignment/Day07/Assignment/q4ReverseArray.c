
//Q4. reverse the array elements.

#include <stdio.h>

void reverseArray(int arr[], int reversed[], int num);
void display(int arr[], int num);

void reverseArray(int arr[], int reversed[], int num)
{
    int i, j = num - 1;
    for (i = 0; i < num; i++)
    {
        reversed[i] = arr[j];
        j--;
    }
}

void display(int arr[], int num)
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
    int reversed[num];

    printf("Enter the number of elements : ");
    scanf("%d", &num);

    printf("\nEnter the elements up to %d: ", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original elements are: ");
    display(arr, num);

    reverseArray(arr, reversed, num);

    printf("\nReversed elements are: ");
    display(reversed, num);

    return 0;
}
