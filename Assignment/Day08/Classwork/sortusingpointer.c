
// sort the elements of an array in desc order //Bubble sort we are using
#include <stdio.h>

void sortDesc(int *arr, int size) {
    int *i, *j;
    
    for (i = arr; i < arr + size - 1; i++) {
        for (j = i + 1; j < arr + size; j++) {
            if (*i < *j) {   //to swap the values 
                *i = *i + *j;
                *j = *i - *j;
                *i = *i - *j;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr; // Pointer to the beginning of the array
    
    printf("Before Sorting : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    sortDesc(arr, size);
    
    printf("After Sorting : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n\n");
    
    return 0;
}
