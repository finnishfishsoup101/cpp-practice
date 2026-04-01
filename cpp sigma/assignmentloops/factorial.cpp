#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter the no whose factorial is needed";
    cin>>n;
    while(n!=0){
        fact=fact*n;
        n=n-1;
    }
    cout<<"factorial of the number is"<<fact;
}