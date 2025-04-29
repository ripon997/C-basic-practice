#include<stdio.h>

int number(int i);

int main(){

    int sum = number(15);
    printf("Sum is %d",sum);
    return 0;
}

int number(int i){
    if(i>0){
        return i + number(i-1);
    }
    else{
        return 0;
    }
}
