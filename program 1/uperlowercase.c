#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("Alphabet is uppercase.\n");
    } else if (islower(ch)) {
        printf("Alphabet is lowercase.\n");
    } else {
        printf("not character\n");
    }
    return 0;
}
