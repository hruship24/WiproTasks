#include <stdio.h>
int linearSearch(int arr[], int size , int element){
    for (int i = 0; i < size; i++)
    {

        if(arr[i]==element){
            return i;

        }
    }
    return -1;
    
}

int main() {

    int arr []={1,32,5,6,7,34,7,82,8};
    int size =sizeof(arr)/ sizeof(arr[0]);
    int element =32;
    int searchIndex=linearSearch(arr,size,element);
    printf("The element %d was found at index %d \n",element,searchIndex);
    return 0;


}