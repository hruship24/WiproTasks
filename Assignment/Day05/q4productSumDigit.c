/*
write a program to read Sum and Product of digits in a given number

Input Format:
Read a positive integer N

Output Format:
Print the sum and product of digits of the number

Examples:
Input: N = 12
Output:
sum =3
product = 2.

Input: N = 1012
Output:
 Sum = 4
product = 2
*/

#include <stdio.h>

int main() {
    int N, sum = 0, product = 1, digit;

    // Getting positive input number  
    printf("Enter a  number : ");
    scanf("%d", &N);

    // Calculating the  sum and product of digits
    int temp = N;
    while (temp != 0) {   
        digit = temp % 10;  //it will get us last digit of the number
        sum += digit;
        if (digit != 0) {
            product *= digit;
        }
        temp /= 10;   //it will  remove the last digit from the number
    }

    // Print the Addition and product
    printf("Addition of the digits is %d\n", sum);
    printf("Product of the digit = %d\n", product);

    return 0;
}
