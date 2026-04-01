#include<stdio.h>
void mystrrev(char str[]){
    int i,j,len;
    char temp;
    len=0;
    while(str[len]!='\0'){
        len=len+1;
    }
    i=0;
    for(i=0,j=len-1;i<len,i<j;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }


}
int main(){
    char str[50];
    printf("\nenter the string to be reversed");
    fgets(str,50,stdin);
    mystrrev(str);
    printf("reversed string");
    puts(str);
    return 0;
}