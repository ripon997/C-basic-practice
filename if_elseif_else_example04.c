#include <stdio.h>

int main() {
    int T,i,n;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%d",&n);
    if(n%2==0){
        printf("even");
    }
    else
    {
    printf("odd");
    }
    }
    return 0;
}
