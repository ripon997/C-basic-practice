#include<stdio.h>
#include<math.h>
int main(){

    FILE *book;

    book=fopen("book.txt","r");
    fprintf(book,"Some text");

    fclose(book);
}


