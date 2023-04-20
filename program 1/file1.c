#include<stdio.h>
int main(){ 
    FILE *fptr;
    fptr = fopen("Sum.txt", "r");

    int a;
    fprintf(fptr, "%d", &a);
    int b;
    fprintf(fptr, "%d", &b);
    
    fclose(fptr);

    fptr = fopen("Sum.txt", "w");
    fprintf(fptr, "%d", a + b);

    fclose(fptr);

    return 0;
}