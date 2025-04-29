#include<stdio.h>


int main(){

    sumCalculate(10,5);
    sumCalculate(10,20);

    return 0;
}
void sumCalculate(int a,int b){
    int sum;
    sum = a + b;

    printf("Summation is %d\n",sum);
}
