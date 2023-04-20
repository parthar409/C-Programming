//Here is a simple C program that uses a pointer to iterate
//through an array and access all its elements:

#include <stdio.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr; 

  for (int i = 0; i < 5; i++) {
    printf("Element at index %d is %d\n", i, *ptr);
    ptr++;
  }
  return 0;
}

//In this program, the 'arr' array is declared with 5 elements
//and 'ptr' is a pointer that points to the first element of the
//array. The for loop uses the pointer to access each element
//of the array and print it. The 'ptr' pointer is incremented at
//each iteration to move to the next element in the array.
