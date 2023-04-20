#include <stdio.h>

int main() {
   int n;
    printf("Enter the number of rows/colums : ");
    scanf("%d",&n);
    printf("Enter all elements\n");
    int arr[n][n],brr[n][n];
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++){ 
            scanf("%d",&brr[i][j]);
        }
    }
   // Find transpose of matrix
   for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
         arr[j][i] = brr[i][j];
      }
   }
   // Print the transpose matrix
   printf("Transpose of matrix:\n");
   for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }
   return 0;
}
