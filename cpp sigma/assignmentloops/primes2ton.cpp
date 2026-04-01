#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter the number until which you want primes :  ";
    cin>>n;
    int i;
    int j;;
    for(i=2;i<=n;i++){
        bool isprime=1;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isprime=0;
            }
        }
        if(isprime==1){
            cout<<i<<endl;
        }
    }
}