#include <stdio.h>


int main(){
     FILE *fptr;

    // create file:

    fptr= fopen("test.txt","w");

    // Write to file

    fprintf(fptr,"Hello My Dear File.\n I hope you are doing well. \n :) \n");

   // Close the file:
    fclose(fptr);

    return 0;
}
