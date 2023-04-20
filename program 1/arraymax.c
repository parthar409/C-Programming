// Find the maximun value out of all the elements

#include<stdio.h>
int main(){ 
    int arr[7] = {1,4,7,4,7,22,17};
    int max = -1;
    for(int i=0; i<=6; i++){ 
        if(max<arr[i]){ 
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}