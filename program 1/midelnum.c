#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter three numbers");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2&&num1<num3||num1<num2&&num1>num3)
    printf("%d is middle number",num1);
else if(num2>num1&&num2<num3||num2<num1&&num2>num3)
    printf("%d is middle number",num2);
else
    printf("%d is middle number",num3);
return 0;
}
