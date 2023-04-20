#include<stdio.h>
int main(){ 
    int i;
    int x=1;
    while(x<=100){ 
        x++;
        i=2;
        while(x%i!=0){ 
            i++;
        }
        if(x==i)
        printf("%d ",x);
    }
    return 0;
}