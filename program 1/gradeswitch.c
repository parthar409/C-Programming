#include <stdio.h>

int main() {
    int score;
    printf("Enter score: ");
    scanf("%d", &score);

    int grade = score / 10;

    switch (grade) {
        case 9:
            printf("A+\n");
            break;
        case 8:
            printf("A\n");
            break;
        case 7:
            printf("B\n");
            break;
        case 6:
            printf("C\n");
            break;
        default:
            printf("F\n");
            break;
    }
    return 0;
}
