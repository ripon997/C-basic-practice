#include <stdio.h>

int main() {

    int numbers=123;
    int reverse_numbers=0;
    while(numbers){
        reverse_numbers=reverse_numbers * 10 + numbers % 10;
        numbers/=10;
    }
    printf("%d",reverse_numbers);
    return 0;
}
