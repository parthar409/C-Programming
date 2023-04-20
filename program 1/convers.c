#include<stdio.h>

int factorial(int x);

int main(){ 
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int r;
    printf("enter r : ");
    scanf("%d",&r);

    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d", ncr);

    return 0;
}

int factorial(int x){ 
    int fact = 1;
    for(int i=2;i<=x;i++){ 
        fact = fact*i;
    }
    return fact;
}