#include <stdio.h>


int main(){

/*
while (condition) {
  // code block to be executed
}
*/


    printf("Enter Start:\n");
    int start;
    printf("Enter End:\n");
    int end;
    scanf("%d %d",&start,&end);

    while(start <= end){
          printf("%d \n",start);
         start++;
    }

}
