#include<stdio.h>

int main(){

    int matrix [2][3]={
        {8,5,2},
        {7,9,0}
        };

        int i,j;
        for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                printf("%d\n",matrix[i][j]);
            }
        }

    return 0;

}
