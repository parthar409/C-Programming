#include <stdio.h>

int main() {
    int work_hours, overtime_hours;
    float bonus = 0.0;
    const int WORK_HoURS_PER_DAY = 8;
    const float MONTHLY_SALARY = 20000.0;
    printf("Enter working hours: ");
    scanf("%d", &work_hours);
    // Calculate overtime hours
    if (work_hours > WORK_HoURS_PER_DAY) {
        overtime_hours = work_hours - WORK_HoURS_PER_DAY;
    } else {
        overtime_hours = 0;
    }
    // Calculate bonus based on overtime hours
    if (overtime_hours >= 6) {
        bonus = MONTHLY_SALARY * 0.1;
    } else if (overtime_hours >= 4) {
        bonus = MONTHLY_SALARY * 0.07;
    } else if (overtime_hours >= 2) {
        bonus = MONTHLY_SALARY * 0.05;
    }
    printf("The bonus amount is: %.2f\n", bonus);
    return 0;
}
