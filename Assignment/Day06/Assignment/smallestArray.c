//WAP to find the smallest number form given Array

#include <stdio.h>

int main(){

    int arr[]={4,5,7,3,6,7,2,6,9};

    int size=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++) //Iterating through the array
    {
        if(arr[i] < arr[0]){  //comparing the values if greater 
            arr[0]=arr[i];  // if smaller , store it in  first position of array
        }
    }
    printf("%d",arr[0]);

    return 0;


}