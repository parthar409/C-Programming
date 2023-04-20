#include<stdio.h>
int main() { 
    int n;
    printf("enter number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
        int a=0;
        for(int j=1;j<=i;j++){ 
            if(i%j==0)
            a++;
        }
        if(a==2) printf("%d ", i);
    }
    return 0;
}