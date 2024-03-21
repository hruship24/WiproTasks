#include <stdio.h>

// Function to check if a digit is present and distinct in the given number
int isDigitDistinct(int number, int digit) {
    int count = 0; // Counter to track the number of times the digit appears

    // Loop to iterate through each digit of the number
    while (number > 0) {
        if (number % 10 == digit) {
            count++; // Increment the count if the digit is found
            if (count > 1) {
                return 0; // Digit is not distinct, return 0
            }
        }
        number /= 10; // Move to the next digit
    }
    return 1; // If digit appears only once, return 1 (indicating it's distinct)
}

int main() {
    int num1, num2;

    // Input the numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Initialize sums
    int sum1 = 0, sum2 = 0;

    // Calculate sum of distinct digits for the first number
    for (int digit = 0; digit <= 9; digit++) {
        if (isDigitDistinct(num1, digit)) {
            sum1 += digit;
        }
    }

    // Calculate sum of distinct digits for the second number
    for (int digit = 0; digit <= 9; digit++) {
        if (isDigitDistinct(num2, digit)) {
            sum2 += digit;
        }
    }

    // Check if the sums are equal
    if (sum1 == sum2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
