#include<stdio.h>
int main() { 
    int ch;
    printf("enter character");
    scanf("%c", &ch);
    
    if(ch >= 'A' && ch <= 'Z') 
    { 
        printf("upper case\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    { 
        printf("lower case\n");
    }
    else { 
        printf("not word\n");
    }

    return 0;
}