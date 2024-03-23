#include <stdio.h>

// int main(){

//     //went to glocery shop

//     int money;
//     int buychocolate;

//     if(money >1000){
//         buychocolate=1;
//     }

//     if(buychocolate==1){
//         printf("Brought chocalate and gloceries and");
//     }else{
//         printf("Brought gloceries and");
//     }

//     printf("Went to home.");
// }

int main(){
    //going to solotrip
    int spaceInBag;
    int otherbag=0;
    printf("Do you have enough space in bag (write 1 for yes and 0 for No) : ");
    scanf("%d",&spaceInBag);

    if (spaceInBag==1)
    {
        printf("Pack stuff in it and ");
    }
    
    if(spaceInBag==0){
        otherbag=1;

    }
    if(otherbag==1){
        printf(" Pack stuff in other bag and");
    }else{
        printf(" Be ready and ");
    }

    printf(" Go to the Holiday");
}
