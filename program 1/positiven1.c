#include<stdio.h>

int main() {
    int arr[20],n,i;
    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
          scanf("%d",&arr[i]);

    printf("Positive number are\n");
    for(i = 0; i < n; i++)
        if (arr[i] > 0)
          printf("%d\n",arr[i]);
    return 0;
}