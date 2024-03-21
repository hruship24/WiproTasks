
/*
Q3: Write a c program to print alphabet triangle.
Input: 5
Output:

         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA
*/



#include <stdio.h>

int main() {
    int n, i, j;

    // Taking the number of rows that we want to print on console
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // To print spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        
        // Print characters in ascending order 
        char ch = 'A';
        for (j = 0; j <= i; j++) {
            printf("%c", ch++);
        }
        ch--;

        // Print characters in descending order
        for (j = i - 1; j >= 0; j--) {
            printf("%c", --ch);
        }
        
        printf("\n");
    }

    return 0;
}
