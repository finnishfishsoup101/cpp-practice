#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no whose table you want";
    cin>>n;
    cout<<"table of n is"<<endl;
    for(int i=1;i<=10;i++){
        cout<<n<<'*'<<i<<'='<<n*i<<endl;
    }
}