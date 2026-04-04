#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows";
    cin>>n;
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(k==1){
                k=k-1;
                cout<<k<<" ";
            }
            else  if(k==0){
                k=k+1;
                cout<<k<<" ";
        }
    }
    cout<<endl;
    }
    return 0;
}