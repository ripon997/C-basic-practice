#include<stdio.h>

int main(){

    int age=30;
    int* ptr=&age;;
    printf("%d\n",age);
    printf("%p\n",&age);
    printf("%p\n",ptr);

    return 0;
}
