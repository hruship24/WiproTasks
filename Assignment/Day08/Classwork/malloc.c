#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr=NULL,i;
    int *temp=NULL;
    ptr = (int *)malloc(sizeof(int)*5);
    temp = ptr;

    printf("\nAddress of ptr = %u",&ptr);
    printf("\nPtr is point to BA = %u\n", ptr);
    /*
    for(i=0;i<5;i++)
        scanf("%d",&ptr[i]);
    */
    for(i=0;i<5;i++,ptr++)
        scanf("%d",ptr);
    ptr = temp;
    /*    
    ptr[0] = 100;
    ptr[1] = 111;
    ptr[2] = 122;
    ptr[3] = 133;
    ptr[4] = 144;
    */
   /*

    *(ptr+1) = 11;
    *(ptr+2) = 12;
    *(ptr+3) = 13;
    *(ptr+4) = 14;
    */
    printf("\nBA or zeroth address of ptr/array=%u\n",&temp[0]);
    for(i=0;i<5;i++)
        printf("\n%d",ptr[i]);

    printf("\n\n");
    return 0;
}