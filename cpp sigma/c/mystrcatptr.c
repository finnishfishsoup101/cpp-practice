#include<stdio.h>
void mystrcat(char *p,char *q){
    int i=0,l=0;
    while(*(p+i)!='\0'){
        l=l+1;
        i++;
    }
    i=0;
    while(*(q+i)!='\0'){
        *(p+l)=*(q+i);
        i++;
        l++;
    }
    *(p+l)='\0';
}
int main(){
    char str1[50],str2[50];
    printf("enter destination string");
    fgets(str1,50,stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("enter string to be concatenated");
    fgets(str2,50,stdin);
    str2[strcspn(str2,"\n")]='\0';
    mystrcat(str1,str2);
    printf("concatenated string\n");
    puts(str1);
    return 0;
}