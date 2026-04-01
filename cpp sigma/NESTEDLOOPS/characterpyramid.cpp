#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows : ";
    cin>>n;
    int a=65;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(a)<<" ";
            a=a+1;
        }
    cout<<endl;  
    }
    cout<<endl;
    return 0;  
}

// int main(){
//     int n;
//     cout<<"enter the no of rows : ";
//     cin>>n;
//     char a='A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//             a=a+1;
//         }
//     cout<<endl;  //
//     }
//     return 0;  
// }