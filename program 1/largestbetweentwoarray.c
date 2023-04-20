#include <stdio.h>

int findMax(int arr1[], int arr2[], int size) {
   int max = arr1[0];
   for (int i = 1; i < size; i++) {
      if (arr1[i] > max) {
         max = arr1[i];
      }
      if (arr2[i] > max) {
         max = arr2[i];
      }
   }
   return max;
}

int main() {
   int size;
   printf("Enter size of arrays: ");
   scanf("%d", &size);

   int arr1[size], arr2[size];
   printf("Enter elements of first array: ");
   for (int i = 0; i < size; i++) {
      scanf("%d", &arr1[i]);
   }
   printf("Enter elements of second array: ");
   for (int i = 0; i < size; i++) {
      scanf("%d", &arr2[i]);
   }

   int max = findMax(arr1, arr2, size);
   printf("Maximum value between two arrays: %d", max);

   return 0;
}
