#include <stdio.h>

extern int size;  //exetern keyword is used. i.e. storage class  of this variable is not defined in the code but we can define it
// in another file and then link that file with  this one before execution i.e. .o file  should be linked first to get the desired output
// create a file name config.c , write size of the array to define and compile it.
// now  use command gcc -o file arraydefine.o config.o to  generate an executable named "file"

//to execute the file config  gcc -c config.c in terminal which give us .o file
int main(){

   printf("%d",size);
    
}

