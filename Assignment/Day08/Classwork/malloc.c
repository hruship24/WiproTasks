#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr=NULL;
  //  ptr = (int *)malloc(sizeof(int)*1);
    *ptr = 10;

    printf("\n%d",*ptr);

    printf("\n\n");
    return 0;
}