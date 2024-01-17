#include <stdio.h>


int main(){

    int day;
    printf("Enter The Day Of Week : \n");
    scanf("%d",&day);

    switch (day) {
        case 1: printf("Monday\n");
            break;
        case 2: printf("Tuesday\n");
            break;
        case 3: printf("Wednesday\n");
            break;
        case 4: printf("Thursday\n");
            break;
        default: printf("Youd DONT Live In Earth!\n");
    }


    return 0;
}
