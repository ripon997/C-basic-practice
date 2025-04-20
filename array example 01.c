#include <stdio.h>

int main() {
    int ages[]={12,5,66,77,6,54,33,7};
    int length = sizeof(ages)/sizeof(ages[0]);
    float sum=0;
    for(int i=0;i<length;i++){
        sum+=ages[i];
    }
    double average = sum/length;
    printf("%.2lf",average);
    return 0;
}
