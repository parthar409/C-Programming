#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two integer values: ");
  scanf("%d%d", &a, &b);

  printf("Logical AND: %d\n", a && b);
  printf("Logical OR: %d\n", a || b);
  printf("Logical NOT: %d\n", !a);

  return 0;
}
