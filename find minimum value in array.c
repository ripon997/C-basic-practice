#include<stdio.h>
int main() {

    int ages[]={99,34,55,66,55,44};
    int length = sizeof(ages)/sizeof(ages[0]);
    int min = ages[0];

    for(int i=0;i<length;i++){
        if (ages[i]<min){
            min=ages[i];
        }
    }
    printf("%d",min);

    return 0;
}
