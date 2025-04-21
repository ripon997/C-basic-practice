#include<stdio.h>

int main(){

    int matrix[2][3]={
    {2,3,5},
    {5,3,2}};
    int sum= matrix[1][1]+ matrix[0][1];
    printf("%d",sum);
    //printf("%d",matrix[0][2]);
    return 0;

}
