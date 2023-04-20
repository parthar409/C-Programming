#include <stdio.h>
int main ()
{ 
    int age ;
    printf("enter age : ");
    scanf("%d", &age);
    
    if (age > 18) { 
        printf("adult \n");
        printf("he can drive \n");
        printf("he can drink beer \n");
    }

    else if (age > 13 && age < 18) { 
        printf("teneger");
    }
       
    else { 
        printf("not adult /n");
    }

    return 0;
}