#include <stdio.h>
int main() {
    int year;
    printf("enter number :");
    scanf("%d",&year);

    if (((year%4==0)&&(year%100!=0))||(year%400==0))
    {
        printf("leap year");
    } else
    {
        printf("common year");
    }
    
   return 0; 
}