#include<iostream>
using namespace std;

int main(){
    int arr[10];
    arr[0] = 1;
    arr[1] = 3;

    int i, n = 9;

    for(i = 2; i < n; i++){
        arr[i] = arr[i - 1] * arr[i - 2];
    }

    for(i = 0; i < n; i++){
        cout<<arr[i]<<"  ";
    }
}