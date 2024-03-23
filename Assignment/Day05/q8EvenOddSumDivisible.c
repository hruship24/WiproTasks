/* 
Q8: Write a program to Check whether product of digits at even places is divisible by sum of digits at odd place of a number.

Examples:
Input:
2157
Output:
TRUE

Input:
1234
Output:
TRUE
*/


#include <stdio.h>

int main() {
    int number;
    int productEven = 1, sumOdd = 0;
    int position = 1;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        int digit = number % 10;
        
        if (position % 2 == 0) {
            productEven *= digit;
        } else {
            sumOdd += digit;
        }
        
        number /= 10;
        position++;
    }

    if (sumOdd != 0 && productEven % sumOdd == 0) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}