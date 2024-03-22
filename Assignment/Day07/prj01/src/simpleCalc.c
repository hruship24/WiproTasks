#include <simpleCalc.h>
#include <stdio.h>

void banner()
{
    printf("\n========================================\n");
    printf("\n\tSimple calculator\n");
    printf("\n========================================\n");
    
}

int dispMenu()
{
    int ch;
    printf("\nPress,");
    printf("\n1. Add");
    printf("\n2. Sub");
    printf("\n3. Mul");
    printf("\n4. Div");
    printf("\nChoice: ");
    scanf("%d",&ch);
    return ch;
    
}

void print_dots(int n, char ch)
{
    int it;
    printf("\n");
    for(it=0;it<n;it++)
        putchar(ch);
    printf("\n");
}

int addition(int val1, int val2)
{
    int res = 0;
    res = val1+val2;
    return res;
}

int sub(int val1, int val2)
{
    int res = 0;
    res = val1-val2;
    return res;
}

int mul(int val1, int val2)
{
    int res = 0;
    res = val1*val2;
    return res;
}

int division(int val1, int val2)
{
    int res=0;
    res = val1/val2;
    return res;
}