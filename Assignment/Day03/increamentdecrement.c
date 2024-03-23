#include <stdio.h>

int main () {
    int a=10;
    int b=20;

    int c=  ++a;
    b= a++;

    printf("%d %d %d\n", a++ , ++b , c++);

    printf("%d %d %d\n",a, b, c);

    int x=11;
    int y=40;

    int z= x++ + --y;
    x=--z;
    y=x--;

    printf("%d %d %d\n", ++x, y--,z++);



    printf("\n\n");
}