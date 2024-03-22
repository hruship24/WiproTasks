/*

demo on user defined functions
simple calc prog
*/
#include <stdio.h>

int addition(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

void banner();
void print_dots(int, char);

int dispMenu();

int main()
{
    int v1, v2;
    int result = 0;
    int c;

    banner();
    c = dispMenu();
    printf("\nEnter the two values: ");
    scanf("%d%d", &v1, &v2);
    // switch (dispMenu())
    switch (c)
    {
    case 1:
        result = addition(v1, v2);

        printf("\nAdditon of %d + %d = %d\n", v1, v2, result);
        print_dots(41, '*');

        break;
    case 2:

        result = sub(v1, v2);

        printf("\nSub of %d - %d = %d\n", v1, v2, result);
        print_dots(41, '*');

        break;
    case 3:

        result = mul(v1, v2);

        printf("\nMultiplication of %d * %d = %d\n", v1, v2, result);
        print_dots(41, '*');

        break;
    case 4:

        result = div(v1, v2);

        printf("\nDivision of %d / %d = %d\n", v1, v2, result);
        print_dots(41, '*');

        break;
    default:
        printf("\nEnter the correct choice\n");
        break;
    }

    printf("\n\n");
    return 0;
}

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
    printf("\n2. Division");
    printf("\n3. Mul");
    printf("\n4. Div");
    printf("\nChoice: ");
    scanf("%d", &ch);
    return ch;
}

void print_dots(int n, char ch)
{
    int it;
    printf("\n");
    for (it = 0; it < n; it++)
        putchar(ch);
    printf("\n");
}

int addition(int val1, int val2)
{
    int res = 0;
    res = val1 + val2;
    return res;
}

int sub(int val1, int val2)
{
    int res = 0;
    res = val1 - val2;
    return res;
}

int mul(int val1, int val2)
{
    int res = 0;
    res = val1 * val2;
    return res;
}

int div(int val1, int val2){
    int res=0;
    res=val1-val2;
    return res;
}
