
#include <stdio.h>


int main(){
    FILE *ptr;

    ptr=fopen("test.txt","r");

    // Read File:
    char fileContent[100];

     fgets(fileContent,100,ptr);

    // print to console

     printf("%s \n",fileContent);

    // Close File:
    fclose(ptr);
    return 0;

}
