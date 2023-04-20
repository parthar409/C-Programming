#include<stdio.h>

void printNamaste();
void printBonjour();

int main() { 
    printf("enter f for indian & f for frence");
    char ch;
    scanf("%c", &ch);

    if(ch  == 'i') { 
        printf("Namaste \n");
    } else { 
        printf("Bonjour \n");
    }
    
    return 0;
}

void printNamaste() { 
    printf("Namaste \n");
}

void printBonjour() { 
    printf("Bonjour \n");
}
