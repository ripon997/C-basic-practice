#include<stdio.h>
#include<math.h>

struct myStructure{
    int myNum;
    char myLetter;
};

int main(){
    struct myStructure s1;

    s1.myLetter='D';
    s1.myNum=100;

    printf("My number is: %d\n",s1.myNum);
    printf("My letter is : %c\n",s1.myLetter);
}


