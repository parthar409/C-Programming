#include <stdio.h>
int main () { 
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    age >= 18 ? printf("audlt \n") : printf("not audlt \n");
    return 0;
}