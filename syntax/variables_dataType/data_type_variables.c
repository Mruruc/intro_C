#include <stdio.h>
#include <stdbool.h>

int main(){

// format specifiers
/*
* Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing.
* It is basically a placeholder for the variable value.
* A format specifier starts with a percentage sign %, followed by a character.

=> for int=> %d or %i
=> for char => %c
=> for float => %f  (if we want to set decimal precision.
           we can use a dot(.) followed by a number that specifies how many digit should be shown after the decimal point.)
=> for double => %lu
=> for String => %s
*/

    int studentID=101;
    float avgGrade=3.99;
    char grade='B';
    bool isMarried=false;
    printf("Student ID: %d , \n Student Age: %.2f , \n Student Grade: %c \n , IS Married: %d \n",studentID,avgGrade,grade,isMarried);

    printf("===========Type Conversion============ \n");

    int num1=5;
    int num2=2;
    float result=(float) num1 / num2;
    printf("%.2f \n",result);

/*
* to achieve constant we use const ;)...
Note: When you declare a constant variable, it must be assigned with a value.
*/
   float const PI=3.16;
   printf("%.3f \n ",PI);
   return 0;
}
