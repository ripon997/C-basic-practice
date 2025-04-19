#include <stdio.h>

int main() {

    int maxScore = 500;
    int user_score = 423;
    float percentage = (float)user_score/maxScore*100;

    printf("Percentage is : %.2lf",percentage);

    return 0;
}
