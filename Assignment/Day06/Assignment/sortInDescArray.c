//WAP to sort element of Arrays in Desc Order 

#include <stdio.h>

int main()
{

    int a[] = {2, 4, 6, 8, 9, 7, 5, 1, 3};
    int len = sizeof(a) / sizeof(a[0]); //Calculating the size of array
    int temp;

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (a[j] > a[j+1])  //Check for the adjecent element  and swap if 1st is greater than second
            {
                temp = a[j+1];
                a[j+1] = a[j];  //Swapping takes place here
                a[j] = temp;
            }
        }
    }
    printf("The Sorted List : ");
    for (int x = 0; x < len; x++)  //Iterate to print the sorted array
    {
        printf("%d", a[x]);
    }
}