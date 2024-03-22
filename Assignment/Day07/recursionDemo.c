/*
demo on recurrsive function
-> function calling itself
*/

#include <stdio.h>

int demoRecur(int);

int main()
{
    int n=1;
    int ret=0;
    ret = demoRecur(n);

    printf("\nRet value= %d\n", ret);
    printf("\n\n");
    return 0;
}

int demoRecur(int i)
{
    int retR;
    printf("\ni=%d",i);
    if (i==10){
        // return 201;
        return i;
    }
    i++;
    retR = demoRecur(i);
    printf("\nretR = %d", retR);
    //return 200;
    return i;
}