#include <stdio.h>
int main() {  
    int num1, num2;  
    int sum, sub, mult, mod;  
    float div;    
    printf("Enter two numbers : ");  
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;  
    sub = num1 - num2;  
    mult = num1 * num2;  
    div = (float)num1 / num2;  
    mod = num1 % num2;  
 
    printf("The sum is : %d\n", sum);  
    printf("The sub is : %d\n", sub);  
    printf("The product is : %d\n", mult);  
    printf("The division is : %f\n", div);  
    printf("MODULUS = %d\n", mod);  
  
    return 0;   
} 
