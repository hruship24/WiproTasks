/*
Write a program to Count number of ways to divide a number
 in 4 parts.

 Input Format:
 First Line Of Input Contains T test cases
 Second line of Input Contains a positive integer n,

 Output Format:
 Print the count number of ways for division can take place.

 Examples :

 Input:
 1
   5 => 1 + 1 + 1 + 2

 Output: 1

 Input:
 1
 6
   2 + 2 + 1 + 1
   1 + 1 + 1 + 3
 Output: 2

 Input:
 
   8
 Output: 5
1+1+1+5
2+2+2+2
2+2+1+3
1+1+2+4
3+3+1+1
*/

#include <stdio.h>

int main()
{
    int number ;
    printf("Enter the number : ");
    scanf("%d",&number);
    
    int count = 0;
    int i = 1, j = 1, k = 1, l = 1;
    for (i = 1; i < number; i++)
    {
        for (j = i; j < number; j++)
        {
            for (k = j; k < number; k++)
            {
                for (l = k; l < number; l++)
                {
                    if ((i + j + k + l) == number)
                    {
                        // printf("\n%d+%d+%d+%d=%d", i, j, k, l, number);
                        count++;  //It will count the number of ways
                    }
                }
            }
        }
    }
    printf("\nNumber of Ways to achieve the output are %d\n\n", count);


    return 0;
}