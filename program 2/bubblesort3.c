#include<stdio.h>

int main() { 
    int arr[10] = {8,4,9,3,5,12,30,23,56,34};
    int n = 10; 
    for (int i=0; i<n; i++){ 
        printf("%d ",arr[i]);
    }
    for(int i=0; i<n-1; i++){ 
        for(int j=0; j<n-1; j++){ 
            if(arr[j]>arr[j+1]){ 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    for (int i=0; i<n; i++){ 
        printf("%d ",arr[i]);
    }
}