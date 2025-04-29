#include<stdio.h>

void number1(){
    printf("in number 1\n");
    number2();
}
void number2(){
    printf("in number 2");
}
int main(){

    number1();

    return 0;
}

