/* 
Q2. Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4
*/

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int i;
    if (num <= 1)
        return 0;  // 0 and 1 are not prime
    
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;  // If the number has a divisor other than 1 and itself, it's not prime
    }
    return 1;
}

// Function to find and print pairs of prime numbers that sum up to the given number
void findPrimePairs(int num) {
    int count = 0;
    printf("Output:\n");
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            count++;
        }
    }
    printf("NoofWays = %d\n", count);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n <= 2) {
        printf("The given number cannot be expressed as the sum of two prime numbers.\n");
    } else {
        findPrimePairs(n);
    }
    
    return 0;
}
