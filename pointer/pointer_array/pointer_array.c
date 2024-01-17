#include <stdio.h>

//The memory address of the first element is the same as the name of the array:

int main(){

     int arr[]={4,9,6,3};
     printf("&arr:  %p \n",&arr);
     printf("&arr[0]: %p \n",&arr[0]);
     printf("=========Loopng Array Normally:=============\n");

     for(int i=0; i<4; i++){
          printf("%d \t",arr[i]);
     }
     printf("\n");
     printf("Getting The Value Of First Elemet With Pointer Dereferance : %d \n",*arr);
     printf("Getting The Value Of Second Elemet With Pointer Dereferance : %d \n",*(arr +1) );

     printf("=========Loopng Array With Pointer Dereferance:============= \n");

     for(int i=0; i<4; i++){
          printf("%d \t",*(arr + i));
     }
    printf("\n");
    return 0;
}
