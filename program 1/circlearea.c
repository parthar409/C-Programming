#include <stdio.h>
#define PI 3.14159265

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("The area is %f\n",PI*radius*radius);
    return 0;
}
