#include <stdio.h>

/*
A pointer is a variable that stores the memory address of another variable as its value.

A pointer variable points to a data type (like int) of the same type, and is created with the * operator.
*/

int main(){

   int num=1;

   int* ptr=&num;

   printf("Num Value: %d \n",num);
   printf("Num Memory Address: %p \n",&num);
   printf("Num Memory Address with Referance: %p \n ",ptr);
   printf("Num Value with Deferance: %d \n ",*ptr);


   return 0;
}
