#include<stdio.h>
#include<math.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};

int main(){
    struct myStructure s1 = {15,'R',"Ripon"};
    struct myStructure s2 = {20,'T',"Raihan"};



    printf("%d %c %s\n",s1.myNum,s1.myLetter,s1.myString);
    printf("%d %c %s\n",s2.myNum,s2.myLetter,s2.myString);

}


