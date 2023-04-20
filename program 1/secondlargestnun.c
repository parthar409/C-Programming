//find the second largest element in the given array
#include <stdio.h>

int main(){
    int arr[100];
    int n, largest, second_largest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }        
    largest = arr[0];
    second_largest = arr[0];
        
    for (int i = 1; i < n; i++){
        if (arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }
    printf("second largest element is: %d", second_largest);
    return 0;
}
