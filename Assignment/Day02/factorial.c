#include <stdio.h>

int main(){

    int f=1,i,N;
    printf("Enter the value of N : ");
    scanf("%d",&N);

    do{
        f=f*i;
        i++;

    }while(i<N);
    printf(f);
}
/* 
ALGORITHM FOR CHECKING ODD NUMBERS UPTO 20

STEP1 : START 
STEP2 : INTIALIZE i=1,n=20;
STEP3 : IF i>20 THEN GOTO STEP 10
//STEP4 : GO TO STEP10
STEP5 : IF i%2!=0;
STEP6 : PRINT i;
STEP7 : INCREAMENT i BY 1
STEP8 : GOTO STEP3
//STEP9 : ELSE GOTO STEP10
STEP10 : STOP

*/



/*


ALGORITHM FOR PRIME NUMBER OR NOT

STEP 1 : START
STEP 2 : READ N 
STEP 3 : INITIALIZE i = 2, SET FLAG = TRUE;
STEP 4 : IF i < N 
STEP 5 : IF IF N % i = 0 GOTO NEXT STEP6
STEP 6 : SET FLAG = FALSE ; BREAK AND GOTO STEP10
STEP 7 : ELSE INCREAMENT i BY 1 AND GOTO STEP 4
STEP 8 : CHECK IF FLAG = TRUE 
STEP 9 : PRINT N
STEP 10 : ELSE STOP



*/



