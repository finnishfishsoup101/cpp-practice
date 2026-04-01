#include<stdio.h>
#include<string.h>
void mystrcpy(char *q,char *p){
    int i=0;
    while(*(p+i)!='\0'){
        *(q+i)=*(p+i);
        i++;
    }
    *(q+i)='\0';
}
int main(){
    char str1[50],str2[50];
    printf("enter the string to be copied");
    fgets(str1,50,stdin);
    str1[strcspn(str1,"\n")]='\0';
    mystrcpy(str2,str1);
    printf("copied string\n");
    puts(str2);
     return 0;
}