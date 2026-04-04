#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"*";
        for(int j=0;j<=n-1;j++){
            if(i==1 || i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl;
    }
    return 0;
}