#include<stdio.h>

    void numbers_array(int numbers[5]){

    for(int i =0;i<5;i++){
        printf("%d\n",numbers[i]);
    }

    }

    int main()
    {
    int numbers[5]={3,4,6,3,2};
    numbers_array(numbers);
    //  myFunction("Ali",26);
    //myFunction("Ripon",27);

    return 0;
}
