#include <stdio.h>

int main(){

// if (condition) {}
// else if(condition2){}
// else {}

// To get user input, you can use the scanf() function:

//Use the scanf() function to get a single word as input, and use fgets() for multiple words.

//fgets() function to read a line of text,the name of the string variable, sizeof(string_name), and stdin:

    int age;
    printf("Enter Your Age: \n");
    scanf("%d",&age);

    if(age < 18){
        printf("Can Not Vote! \n");
    }
    else{
        printf("Can Vote\n");
    }
 //Ternary Operator:
    (age < 18 ) ? printf("Your Age is Less Than 18.\n") : printf("Your Age Is Greater Than 18.\n");

}
