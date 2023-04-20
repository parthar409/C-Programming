#include<stdio.h>

void printString(char arr[]);

int main( ) { 
    char firstName[50];
    scanf("%s", firstName);
    printf("Your name is %s", firstName);
    return 0;
}

void printString(char arr[]) { 
    for(int i=0;arr[i] != '\0'; i++){ 
        printf("%c", arr[i]);
    }   
}