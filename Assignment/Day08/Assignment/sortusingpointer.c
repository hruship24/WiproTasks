#include <stdio.h>

void sortDescending(int *arr, int size) {
    int *i, *j;
    
    for (i = arr; i < arr + size - 1; i++) {
        for (j = i + 1; j < arr + size; j++) {
            if (*i < *j) {
                *i = *i + *j;
                *j = *i - *j;
                *i = *i - *j;
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr; // Pointer to the beginning of the array
    
    printf("Array before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    sortDescending(arr, size);
    
    printf("Array after sorting in descending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    return 0;
}
