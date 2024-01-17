#include <stdio.h>


/*
Unlike many other programming languages, C does not have a String type to easily create string variables.
Instead, you must use the char type and create an array of characters to make a string in C:

*/

int main(){

    char str[]="This is a String";
    printf("%s \n",str);

    // Since strings are actually arrays in C, you can access a string by referring to its index number inside square brackets [].
     printf("%c \n",str[0]);

    return 0;
}


