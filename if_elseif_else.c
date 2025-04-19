#include <stdio.h>
//#include <stdbool.h>

int main() {

    int age;
    age=20;

    if(age<30){
        printf("Stay in if condition");
    }
    else if(age<50){
        printf("Stay in else if condition");
    }
    else{
        printf("In else condition");
    }
    return 0;
}
