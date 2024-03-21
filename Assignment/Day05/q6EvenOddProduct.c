/*
Program to Check if product of digits of a number at even and odd places is equal.
Input:

2841
Output:
 Yes

Input:

4324
Output:
No

*/
#include <stdio.h>

int main() {
    int number, digit, even_product = 1, odd_product = 1, position = 1;

    // Getting input from user a positive number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate products of digits at even and odd positions
    while (number > 0) {
        digit = number % 10; 
        
        if (position % 2 == 0)
            even_product *= digit;
        else
            odd_product *= digit;

        number /= 10;
        position++;
    }

    // Check if the products are equal
    if (even_product == odd_product)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
