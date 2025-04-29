#include<stdio.h>
#include<math.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};

int main(){
    struct myStructure s1,s2;

    s1.myLetter='D';
    s1.myNum=100;
    strcpy(s1.myString,"string");
    s2.myLetter='E';
    s2.myNum=200;

    printf("My number is: %d\n",s1.myNum);
    printf("My sentence is: %s\n",s1.myString);
    printf("My letter is : %c\n",s1.myLetter);
    printf("My number is: %d\n",s2.myNum);
    printf("My letter is : %c\n",s2.myLetter);
}


