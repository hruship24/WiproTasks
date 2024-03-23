/*
Write a program to print the half triangle number pattern  or half pyramid
the output should look like
if input is 5
then rows =5 and column =5
1
2*3
4*5*6
7*8*9*10
11*12*13*14*15
*/

#include <stdio.h>

int main(){
    int input ;
    printf("Enter the number of rows : ");
    scanf("%d",&input);
    int number=1;

    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",number);
            number++;
            if (j!=i)
            {
                printf("*");
            }
            
        }
        printf("\n");
        
    }
    
}
