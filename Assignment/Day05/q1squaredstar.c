/*
Write a logic for incrementing number and printing a pattern upto the square of the number
take n as input
n shows the number of rows and column
increment number upto square of that number

pattern :
1*2*3*4*5
6*7*8*9*10
11*12*13*14*15
16*17*18*19*20
21*22*23*24*25

*/

#include <stdio.h>
int main()
{

    int input;
    printf("Enter the number upto to which tou want to print pattern : ");
    scanf("%d", &input);

    int number = 1;

    if (input > 2 && input < 10)
    {

        for (int i = 0; i < input; i++)
        {
            for (int j = 0; j < input; j++)
            {
                printf("%d", number);
                number++;
                if (j < input - 1)
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input");
    }
}
