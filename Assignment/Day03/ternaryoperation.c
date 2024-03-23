#include <stdio.h>

int main()
{

    int x = 10, y = 20, z = 9;

    int max;

    max = (x > y) && (x > z) ? x : (y > z) ? y : z;

    printf("Greatest value is max = %d\n", max);
}

