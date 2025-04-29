#include<stdio.h>

float tocelsius(float f){
    return (f-32)*(5.0/9.0);
}

int main(){

    float result=tocelsius(98.80);
    printf("%.2f",result);


    return 0;
}

