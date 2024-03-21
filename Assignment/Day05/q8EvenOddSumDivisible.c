/*
Write a program to Check whether product of digits at even places is divisible by sum of digits at odd place of a number.

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

// Function to check whether product of digits at even places is divisible by sum of digits at odd place
int checkDivisibility(int num) {
    int oddSum = 0, evenProduct = 1, count = 1;
    
    // Iterate through the digits of the number
    while (num != 0) {
        int digit = num % 10;
        
        // Check if the position of digit is odd or even
        if (count % 2 == 0)
            evenProduct *= digit;
        else
            oddSum += digit;
        
        // Move to the next digit
        num /= 10;
        count++;
    }
    
    // Check for divisibility
    if (evenProduct % oddSum == 0)
        return 1; // TRUE
    else
        return 0; // FALSE
}

int main() {
    int num;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check divisibility and print the result
    if (checkDivisibility(num))
        printf("TRUE\n");
    else
        printf("FALSE\n");
    
    return 0;
}
