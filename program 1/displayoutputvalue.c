#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    c = a * b;
    c++;
    int final = a * a + c;
    printf("The value of final is: %d", final);
    return 0;
}
