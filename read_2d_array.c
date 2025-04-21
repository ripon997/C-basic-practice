#include<stdio.h>

int main(){

    int matrix [3][3]={
        {8,5,2},
        {7,9,0},
        {2,3,4}
        };

        int i,j;
        for(i=0;i<3;i++){
            printf("Row no :%d\n",i);
            for(j=0;j<3;j++){
                printf("Column no :%d\n",j);
                printf("%d\n",matrix[i][j]);
            }
        }

    return 0;

}
