#include<stdio.h>
#include<math.h>

struct car {
    char brand[30];
    char model[20];
    int year;

};

int main(){
    struct car c1={"German Brand","BMW",2020};
    struct car c2={"Indian brand","TATA",2022};
    struct car c3={"American Brand","Tesla",2025};



    //printf("%d %c %s\n",s1.myNum,s1.myLetter,s1.myString);
    //printf("%d %c %s\n",s2.myNum,s2.myLetter,s2.myString);
    printf("%s %s %d\n",c1.brand,c1.model,c1.year);
    printf("%s %s %d\n",c2.brand,c2.model,c2.year);
    printf("%s %s %d\n",c3.brand,c3.model,c3.year);

}


