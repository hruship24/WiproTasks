#include <stdio.h>
#define CAP 5

int main(){

    int arr[CAP]={0,}; //Initializing the array with values zeros

    //Adding values to array with the help of index (implicitely)
    // arr[0]=101;
    // arr[1]=102;

    for (int i = 0; i < CAP; i++)
    {
        arr[i]=i;
    }
    

    int size;
    printf("\nAdrress fo arr[0] = %u",&arr[0]);
    printf("\nAdrress fo arr[1] = %u",&arr[1]);
    printf("\nAdrress fo arr[2] = %u",&arr[2]);
    printf("\nAdrress fo arr[3] = %u",&arr[3]);
    printf("\nAdrress fo arr[4] = %u",&arr[4]);

    printf("\n");

    printf("\nValue fo arr[0] = %d",arr[0]);
    printf("\nValue fo arr[1] = %d",arr[1]);
    printf("\nValue fo arr[2] = %d",arr[2]);
    printf("\nValue fo arr[3] = %d",arr[3]);
    printf("\nValue fo arr[4] = %d",arr[4]);

    size=sizeof(arr)/sizeof(arr[0]); //Number of elements

    printf("\nSize of the array is %d",size);

    printf("\n");
    return 0;

}
