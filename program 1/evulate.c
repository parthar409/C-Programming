#include <stdio.h>
#define PI 3.14159265

float calculate_area(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = calculate_area(radius);
    printf("The area of the circle is: %lf\n", area);
    return 0;
}
