#include<stdio.h>

enum constant {
    day1=10,day2,day3,day4
      // day1=10;
};

int main(){

    enum constant var1;
    var1=day4;

    printf("%d",var1);

    return 0;
}
