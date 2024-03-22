//Q6 Sum of Even and odd pos values in the array

#include <stdio.h>

void displayEvenPosSum(int sumEvenPos);
void displayOddPosSum(int sumOddPos);
void sumEvenOddPos(int arr[], int num);

void sumEvenOddPos(int arr[], int num) {
    int i;
    int sumEvenPos = 0, sumOddPos = 0;
    for (i = 0; i < num; i++) {
        if (i % 2 == 0) { // Even position
            sumEvenPos += arr[i];
        } else { // Odd position
            sumOddPos += arr[i];
        }
    }
    displayEvenPosSum(sumEvenPos);
    displayOddPosSum(sumOddPos);
}

void displayEvenPosSum(int sumEvenPos) {
    printf("Sum of values at even positions: %d\n", sumEvenPos);
}

void displayOddPosSum(int sumOddPos) {
    printf("Sum of values at odd positions: %d\n", sumOddPos);
}


int main() {
    int i, num;

    printf("Enter the number of elements : ");
    scanf("%d", &num);

    int arr[num];

    printf("\nEnter the elements up to %d: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    sumEvenOddPos(arr, num);

    return 0;
}

