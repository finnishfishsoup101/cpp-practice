#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the terms uptill which you want the series";
    cin>>n;
    int first=0;
    int second=1;
    cout<<first<<" ";
    cout<<second;
    for(int i=0;i<n;i++){
        int third=first+second;
        cout<<" "<<third<<" ";
        first=second;
        second=third;
    }
}
