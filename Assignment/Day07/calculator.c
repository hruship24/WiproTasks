#include <stdio.h>

// Function declaration
int addition(int, int);
int mul(int, int);
int sub(int , int);
int div(int ,int);


int main() {
    int v1, v2, result_addition, result_mul,result_div,result_sub;

    // Getting user input
    printf("\nEnter the two values: ");
    scanf("%d%d", &v1, &v2);

    // Calling addition function
    result_addition = addition(v1, v2);

    // Calling mul function
    result_mul = mul(v1, v2);

    //calling subtraction function 
    

    // Printing results
    printf("\nAddition of %d and %d is %d\n", v1, v2, result_addition);
    printf("Multiplication of %d and %d is %d\n\n", v1, v2, result_mul);

    return 0;
}

// Function definition for addition
int addition(int a, int b) {
    return a + b;
}

// Function definition for multiplication
int mul(int a, int b) {
    return a * b;
}

//Function defination for subtraction
int sub(int a,int b){
    return a-b;
}

//Function defination for  division
int sub(int a,int b){
    return a/b;
}