#include <stdio.h>

struct marks {
    float math;
    float science;
    float english;
};

int main() {
    struct marks student;

    printf("Enter marks in Math: ");
    scanf("%f", &student.math);

    printf("Enter marks in Science: ");
    scanf("%f", &student.science);

    printf("Enter marks in English: ");
    scanf("%f", &student.english);

    float avg=(student.math+student.science+student.english)/3.0;

    printf("Average marks: %.2f", avg);

    return 0;
}
