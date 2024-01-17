#include <stdio.h>
#include <math.h>

// Fuction declaration

int sum(int,int);
void fun1();


// main()

int main(){

    fun1();
    int result=sum(1,100);
    printf("\n %d \n",result);

    printf("Square Root Of 16: %.2f \n",sqrt(16));
    return 0;
}


void fun1(){
    printf("Function with void return Type.");
}


// Function definition
int sum(int x,int y){
   return x + y;
}











