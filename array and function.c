#include<stdio.h>

void calculateSum(int a,int b){
    int sum = a+b;
    printf("sum is %d\n",sum);

}

int main(){
    int numbers[5];
    int numbers[0]=calculateSum(3,5);
    int numbers[1]=calculateSum(44,5);
    int numbers[2]=calculateSum(3,555);
    int numbers[3]=calculateSum(333,512);
    int numbers[4]=calculateSum(31,5);

    for(int index =0;index<5;index++){
        printf(" %d",numbers[i]);
    }

    return 0;
}
