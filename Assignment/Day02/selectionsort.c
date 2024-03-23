#include <stdio.h>

int main()
{

    int arr[] = {4,6, 5, 1, 7, 2, 8,3};

    int temp;

    int len = sizeof(arr) / sizeof(arr[0]);
    int i;
    for ( i = 0; i < len-1; i++)
    {
        int min=i;
        int j;
        for ( j = i + 1; j < len; j++)
        {
            if (arr[min] > arr[j])
            {
                temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
               
            }
        }    
    }

    for (int x = 0; x < len; x++)
    {
        printf("%d", arr[x]);
    }   
}
