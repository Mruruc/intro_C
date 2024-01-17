#include <stdio.h>


int main(){

     int arr[]={1,3,6,9,12};
     for(int i=0; i<5; i++){
         printf("%d \n",arr[i]);
     }

     printf("=====================\n");
     int arr2[3];
     arr2[0]=133;
     arr2[1]=-4;
     arr2[2]=0;

     int index=0;
     while(index < 3){
         printf("%d \n ",arr2[index]);
         index++;
     }


}
