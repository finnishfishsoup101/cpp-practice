#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter 1st no";
    cin>>a;
    cout<<"enter second no";
    cin>>b;
    char oper;
    cout<<"enter the operation";
    cin>>oper;
    switch(oper){
        case '+':
                cout<<"a+b= "<<a+b<<endl;
                break;
        case '-':
                cout<<"a-b= "<<a-b<<endl;
                break;
        case '*':
                cout<<"a*b= "<<a*b<<endl;
                break;
        case '/':
                cout<<"a/b= "<<(float)a/b<<endl;
                break;
        default:
                cout<<"invalid operator"<<endl;
                break;

    }
    
}