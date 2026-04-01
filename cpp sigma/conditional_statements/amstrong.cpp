#include<iostream>
using namespace std;
int main(){
    int num,csum=0,rem;
    cout<<"enter the no : ";
    cin>>num;
    int temp=num;
    for(int i=0;i<3;i++){
        rem=num%10;
        csum=csum+rem*rem*rem;
        num=num/10;
    }
    if(temp==csum){
        cout<<"armstrong no";
    }
    else{
        cout<<"not an armstrong no";
    }
    


}