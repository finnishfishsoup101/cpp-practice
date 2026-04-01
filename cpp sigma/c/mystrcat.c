#include<stdio.h>
#include<string.h>
void mystrcat(char str1[50],char str2[50]){
    int i=0,l=0;
    while(str1[l]!='\0'){
        l=l+1;
        l++;
    }
    while(str2[i]!='\0'){
        str1[l]=str2[i];
        i++;
        l++;
    }
    str1[l]='\0';

}
int main(){
    char str1[50],str2[50];
    printf("enter destination string");
    fgets(str1,50,stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("enter the string to be concatenated");
    fgets(str2,50,stdin);
    str2[strcspn(str2,"\n")]='\0';
    mystrcat(str1,str2);
    printf("concatenated string\n");
    puts(str1);    
    return 0;
}