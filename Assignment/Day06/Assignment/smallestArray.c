//WAP to find the smallest number form given Array

#include <stdio.h>

int main() {
    int arr[] = {4, 5, 7, 3, 6, 7, 2, 6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int i;

    for(i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Smallest number in the array is: %d\n", min);

    return 0;
}