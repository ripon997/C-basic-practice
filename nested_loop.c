#include <stdio.h>

int main() {

    int i ,j;
    for(i=1;i<=3;i++){
        printf("In first loop %d\n",i);
        for(j=1;j<=3;j++){
            printf("In second loop %d\n",j);
        }
    }
    return 0;
}
