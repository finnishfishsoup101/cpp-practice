#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    //1st pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
    cout<<endl;
    }
    //2nd pattern
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
    cout<<endl;
    }
    return 0;
}