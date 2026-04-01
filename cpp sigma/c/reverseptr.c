#include<stdio.h>
void mystrrev(char *p){
    int i=0,j,l=0;
    char temp;
    while(*(p+i)!='\0'){
        l=l+1;
        i++;
    }
    for(i=0,j=l-1;i<l,i<j;i++,j--){
        temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
    }
}
int main(){
    char str[50];
    printf("enter the string");
    fgets(str,50,stdin);
    mystrrev(str);
    printf("reversed string");
    puts(str);
    return 0;
}