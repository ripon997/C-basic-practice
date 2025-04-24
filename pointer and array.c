#include<stdio.h>

int main(){

    int numbers[7] = {10,23,23,44,55,66,77};
    int *ptr = numbers;
    *(numbers)=15;
    *(numbers+1)=20;
    for (int i=0;i<7;i++){
        printf("%d\n",*(ptr+i));
    }
   /* for(int index=0;index<7;index++){
        printf("%p\n",&numbers[index]);
    }*/
    //printf("%d\n",*numbers);
    //printf("%p\n",&numbers);

    return 0;
}
