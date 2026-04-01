#include<iostream>
using namespace std;
int main(){
    int n,temp,rem,sum=0;
    cout<<"enter the no"<<endl;
    cin>>n;
    temp=n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==temp){
        cout<<"armstrong no";
    }
    else{
        cout<<"not an armstrong no";
    }

}