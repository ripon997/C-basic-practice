#include<stdio.h>
#include<math.h>
int main(){

    FILE *fptr;

    fptr = fopen("file.txt","w");

    fclose(fptr);
}


