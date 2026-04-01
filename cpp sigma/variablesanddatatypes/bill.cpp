#include<iostream>
using namespace std;
int main(){
    float pen,pencil,eraser;
    cout<<"enter the price of pen";
    cin>>pen;
    cout<<"enter the price of pencil";
    cin>>pencil;
    cout<<"enter the price of eraser";
    cin>>eraser;
    float GST=(0.18*(pen+pencil+eraser));
    cout<<"TOTAL PRICE :"<<pen+pencil+eraser<<endl;
    cout<<"GST: "<<GST<<endl;
    cout<<"TOTAL PRICE WITH GST :"<<pen+pencil+eraser+GST<<endl;
    return 0;
}