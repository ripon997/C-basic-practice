#include <stdio.h>

int main() {

    int number[] ={10,20,30,40,67};
    int length = sizeof(number)/sizeof(number[2]);
    for(int i=0;i<length;i++){
        printf("%d\n",number[i]);
    }

    return 0;
}
