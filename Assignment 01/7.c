// 7. WAP to print “%d” on the screen.

#include <stdio.h>

int main(){ 
    printf("%%d\n");           
   // printf("\"%%d\""); Output-->"%d"
                          /* why you have to pass two % to print (one) % in output 
                          because even format specifier starts with % 
                          so to confirm that you are passing % itself to print 
                          you are writing %% for % to get (one) % in the terminal.*/
    return 0;
}