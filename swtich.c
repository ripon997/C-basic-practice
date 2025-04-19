#include <stdio.h>

int main() {

    int n;
    printf("Enter a day number (1-7):");
    scanf("%d",&n);
    switch(n){
    case 1:
    printf("Saturday");
    break;
    case 2:
    printf("Sunday");
    break;
    case 3:
    printf("Monday");
    break;
    case 4:
    printf("Tuesday");
    break;
    case 5:
    printf("Wednesday");
    break;
    case 6:
    printf("Thursday");
    case 7:
    printf("Friday");
    default:
    printf("Invalid day number");
    }
    return 0;
}
