#include <stdio.h>

int main() {

    int i,number =3;
    for(i=1;i<10;i++){
        printf("%d\n",i);
        if(i==4){
            break;
        }
        //printf("%d\n",i);
    }
    return 0;
}
