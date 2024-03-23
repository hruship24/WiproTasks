#include <stdio.h>

int main()
{

    int a[] = {2, 4, 6, 8, 9, 7, 5, 1, 3};
    int len = sizeof(a) / sizeof(a[0]);
    int temp,i,j;

    for ( i = 0; i < len - 1; i++)
    {
        for ( j = 0; j < len - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The Sorted List : ");
    for (int x = 0; x < len; x++)
    {

        printf("%d ", a[x]);
    }
}


