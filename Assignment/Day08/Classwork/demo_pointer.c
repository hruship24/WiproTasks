#include<stdio.h>

int main()
{
    int b[2] = {10,20};
    int a=101;

    int *ptr;

    // ptr = &b[0];
    printf("\nb[0] = %d",*(b+0));
    printf("\nb[1] = %d",*(b+1));
    
    // ptr = &b[0];
    // ptr =(b+0);
    ptr = b;
    printf("\nptr = %d", *ptr);
    *ptr = *ptr + 1;
    printf("\nptr = %d", *ptr);
    printf("\nb[0] = %d",*(b+0));
    printf("\nb[1] = %d",*(b+1));

    //ptr = &b[1];
    ptr++;
    printf("\nptr = %d", *ptr);
    printf("\nb[0] = %d",*(b+0));
    printf("\nb[1] = %d",*(b+1));
    ptr--;
    printf("\nptr = %d", *ptr);
    ptr--;
    printf("\nptr = %d", *ptr);
    
     
    printf("\n\n");

    return 0;

}