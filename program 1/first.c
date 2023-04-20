#include <stdio.h>
int main() { 
    char ch;
    printf("enter character :");
    scanf("%c", &ch);

    if(ch>='A'&& ch<='Z'){ 
        printf("uppre case\n");
    } else if(ch>='a'&& ch<='z'){ 
        printf("loyer case\n");
    } else { 
        printf("not character\n");
    }   
    return 0;  
}
