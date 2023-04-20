#include<stdio.h>

int main() { 
    float F,C;
    C=23.34;
    F=(((9*C)/5)+32);
    printf("Celsius to %f Fahrenheit = %f\n",C,F);
    F=74.01;
    C=((F-32)*5)/9;
    printf("Fahrenheit to %f Celsius = %f\n",F,C);
    return 0;
}
