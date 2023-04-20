#include <stdio.h>

int main() {
  float temperature, result;
  int choice;

  printf("Enter temperature: ");
  scanf("%f", &temperature);
  printf("Enter 1 to convert to Celsius, 2 to convert to Fahrenheit: ");
  scanf("%d", &choice);

  if (choice == 1) {
    result = (temperature - 32) / 1.8;
    printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, result);
  } else if (choice == 2) {
    result = (temperature * 1.8) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, result);
  } else {
    printf("Invalid choice\n");
  }

  return 0;
}
