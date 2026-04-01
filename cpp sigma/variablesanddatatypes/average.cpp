#include<iostream>
using namespace std;
int main(){
    float eng,math,hindi;   //float hoga tabhi toh correct avg aayega!!
    cout<<"enter eng marks";
    cin>>eng;
    cout<<"enter math marks";
    cin>>math;
    cout<<"enter hindi marks";
    cin>>hindi;
    float avg=(eng+hindi+math)/3;
    cout<<(eng+hindi+math)<<endl;
    cout<<"average marks are :"<<avg<<endl;
    return 0;
}