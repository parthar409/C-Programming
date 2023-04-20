#include<stdio.h>

void sawp(int a, int b);
void _sawp(int *a, int *b);

int main(){ 
    int x=3,y=5;
    _sawp(&x,&y);
    printf("x=%d & y=%d\n", x,y);

    sawp(x,y);
    printf("x=%d & y=%d\n", x,y);
}

void _sawp(int *a, int *b){ 
    int t =*a;
    *a = *b;
    *b = t;
}

void sawp(int a, int b){ 
    int t = a;
    a = b;
    b =t;
}
