#include<iostream>
using namespace std;
int main(){
    //IMPLICIT CONVERSION
    cout<<(10/3)<<"\n";  //3
    cout<<(10/3.0)<<endl;

    cout<<'A'+1<<endl;
    cout<<'B'+1<<'\n';
    cout<<'a'+0<<endl;  //verifying values
    cout<<'A'-0<<endl;

    //EXPLICIT CONVERSION
    cout<<(int)'A'<<endl;

    float PI=3.14;
    cout<<(int)(PI)<<endl;

    cout<<(10/3)<<endl; //3
    cout<<(float)(10/3)<<endl;  //3    imp  : no typecasting happens here
    cout<<((float)10/3)<<endl;  //3.33333


    cout<<('A'+1)<<endl; //66
    cout<<(char)('A'+1); //B

    return 0;
}