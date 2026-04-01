#include<iostream>
using namespace std;

int main(){
    int income;
    cout<<"enter income ";
    cin>>income;  
    if(income<500000){
        cout<<"tax is"<<" 0%";
    }
    else if(income>=500000 && income<=1000000){
        cout<<"tax is "<<((0.2)*income);
    }
    else if(income>100000){
        cout<<"tax is "<<((0.3)*income);
    }
    return 0;
}