// Logical , relational and equality operator 

#include <stdio.h>

int main(){

    int var1 , var2 , var3 , var4;

    printf("Enter the values for numbers : ");
    scanf("%d %d %d %d",&var1, &var2,&var3,&var4); //Scanning the four values from user input

    // //printing the values on console with memory address where they are stored
    // printf("Address of var1 = %u and the value stored in it = %d\n",&var1,var1);
    // printf("Address of var2 = %u and the value stored in it = %d\n",&var2,var2);
    // printf("Address of var3 = %u and the value stored in it = %d\n",&var3,var3);
    // printf("Address of var4 = %u and the value stored in it = %d\n",&var4,var4);

    //checking equality and comparision between the numbers
    /*
    printf("Equality check of var1 and var2 : %d .\n",(var1==var2));
    printf("Greater than operation var3 and var4 : %d .\n",(var3>var4));
    printf("Less than operation var1 and var4 : %d .\n",(var1<var4));
    printf("Less than equal to operation var1 and var4 : %d .\n",(var1<=var4));
    printf("Greater than equal to operation var3 and var4 : %d .\n",(var3>=var4));
    
    */

   printf("Logical AND operation : %d .\n",(var1 == var2 ) && (var1>=var3));
   printf("Logical OR operation : %d .\n",(var2>=var1) || (var4<=var3));
    
}