#include<stdio.h>
#include<string.h>

//user defined
struct student { 
    int roll;
    float cgpa;
    char name[100];
};

int main() { 
    struct student s1;
    s1.roll = 2120101;
    s1.cgpa = 3.27;
    //s1.name = "Bayezid";
    strcpy(s1.name, "Saad");

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %.2f\n", s1.cgpa);

    struct student s2;
    s2.roll = 2120104;
    s2.cgpa = 3.32;
    //s1.name = "Bayezid";
    strcpy(s2.name, "Phartha");

    printf("student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);
    printf("student cgpa = %.2f\n", s2.cgpa);

    struct student s3;
    s3.roll = 2120108;
    s3.cgpa = 2.65;
    //s1.name = "Bayezid";
    strcpy(s3.name, "Alomgir");

    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %.2f\n", s3.cgpa);

    struct student s4;
    s4.roll = 2120109;
    s4.cgpa = 3.36;
    //s1.name = "Bayezid";
    strcpy(s4.name, "Bayezid");

    printf("student name = %s\n", s4.name);
    printf("student roll = %d\n", s4.roll);
    printf("student cgpa = %.2f\n", s4.cgpa);

    struct student s5;
    s5.roll = 2020107;
    s5.cgpa = 3.20;
    //s1.name = "Bayezid";
    strcpy(s5.name, "Hirdoy");

    printf("student name = %s\n", s5.name);
    printf("student roll = %d\n", s5.roll);
    printf("student cgpa = %.2f\n", s5.cgpa);

    return 0;
}