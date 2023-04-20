#include <stdio.h>
int main() {
   int n;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   int k=0;
   for (int i=1;i<=n;i++){      
		for(int j=1;j<=n-1;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){ 
            printf("%d", i);
        }
        printf("\n");
	}
    return 0;
}                                                                                                  