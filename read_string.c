#include<stdio.h>

int main(){

    char name[]="Ripon";
    int length = sizeof(name)/sizeof(name[0]);
    name[1]='e';
    for(int i=0;i<length;i++){
        printf("%c\n",name[i]);
    }
    return 0;

}
