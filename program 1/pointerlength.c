#include<stdio.h>

void printString(char arr[]);
int countlength(char arr[]);

int main( ) { 
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is : %d", countlength(name));
    return 0;
}

int countlength(char arr[]){ 
    int count = 0;
    for (int i=0; arr[i]!='\0'; i++){ 
        count++;
    }
    return count-1;
}

void printString(char arr[]) { 
    for(int i=0;arr[i] != '\0'; i++){ 
        printf("%c", arr[i]);
    }
    printf("\n");   
}