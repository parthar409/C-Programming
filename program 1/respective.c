#include <stdio.h>

int main() {
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("A+");
    } else if (score >= 80) {
        printf("A");
    } else if (score >= 70) {
        printf("B");
    } else if (score >= 60) {
        printf("C");
    } else {
        printf("F");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int score;
    char grade;
    printf("Enter the score: ");
    scanf("%d", &score);
    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }
    printf("The letter grade is: %c\n", grade);
    
    return 0;
}

