//Sum of Even and odd values in the array

#include <stdio.h>

void displayOddSum(int sumOdd); //Displays the sum of odd numbers
void displayEvenSum(int sumEven);//Displays the sum of Even numbers
void sumEvenOdd(int arr[], int num); 

//Function to perform summation of Even and Odd  numbers separately
void sumEvenOdd(int arr[], int num) {
    int i;
    int sumEven = 0, sumOdd = 0;
    for (i = 0; i < num; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    displayEvenSum(sumEven);
    displayOddSum(sumOdd);
}

//Displays  the sum of odd numbers
void displayOddSum(int sumOdd) {
    printf("Sum of odd values: %d\n", sumOdd);
}

//Displays   the sum of even numbers
void displayEvenSum(int sumEven) {
    printf("Sum of even values: %d\n", sumEven);
}

int main() {
    int i, num;
    int sumEven = 0, sumOdd = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &num);

    int arr[num];

    printf("\nEnter the elements up to %d: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    sumEvenOdd(arr, num);

    return 0;
}



