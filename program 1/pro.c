#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char father[50];
    float salary;
} emp[100];

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", emp[i].name);
        printf("Enter father's name of employee %d: ", i+1);
        scanf("%s", emp[i].father);
        printf("Enter salary of employee %d: ", i+1);
        scanf("%f", &emp[i].salary);
    }

    for (int i = 0; i < n; i++) {
        if (emp[i].father[0] == 'T' && emp[i].salary > 50000) {
            printf("Name: %s, Salary: %.2f\n", emp[i].name, emp[i].salary);
        }
    }
    return 0;
}
