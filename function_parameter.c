#include<stdio.h>

    void myFunction(char name[],int age){
    printf("Name : %s\n age  : %d\n",name,age);

    }

int main(){
    myFunction("Raihan",25);
    myFunction("Ali",26);
    myFunction("Ripon",27);

    return 0;
}
