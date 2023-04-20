#include<bits\stdc++.h>
using namespace std;

int main(){
    double a,b,res,menu;

    cout<<"Press What you want to do: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;

    cin>>menu;

    switch(menu < 4){
        case 1:
        cout<<"Enter two number: ";
        cin>>a >> b;
        res = a+b;
        cout<<"Addition: "<<res<<endl;

        case 2:
        cout<<"Enter two number: ";
        cin>>a >> b;
        res = a-b;
        cout<<"Substraction: "<<res<<endl;

        case 3:
        cout<<"Enter two number: ";
        cin>>a >> b;
        res = a*b;
        cout<<"Multiplication: "<<res<<endl;

        case 4:
        cout<<"Enter two number: ";
        cin>>a >> b;
        res = a/b;
        cout<<"Division: "<<res<<endl;
    }

    return 0;
}