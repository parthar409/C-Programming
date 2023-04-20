#include<stdio.h>
#include<math.h>

int main(){ 
    float a,b,c,d,x1,x2;
    printf("Enter value of a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);

    d=sqrt(b*b-4*a*c);

    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);

    printf("x1=%f\n",x1);
    printf("x2=%f\n",x2);

    return 0;
}