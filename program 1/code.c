#include<stdio.h>
int main () { 
    int num;
    printf("enter num");
    scanf("%d", &num);

    if(num >= 0 && num <= 30) { 
        printf("fall");
    } else if (num >30 && num <= 100) { 
        printf("pass");
    } else { 
        printf("wrong num");
    } 
         
}