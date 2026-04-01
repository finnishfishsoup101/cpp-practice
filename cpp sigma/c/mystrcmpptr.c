#include<stdio.h>
int mystrcmp(char *p,char *q){
    int i=0;
        while(*(p+i)!='\0' && *(q+i)!='\0'){
            if(*(p+i)>*(q+i)){
                return 1;
            }
            else if(*(p+i)<*(q+i)){
                return -1;
            }
            i++;        
        }
        if (*(p+i)=='\0' && *(q+i)=='\0'){
            return 0;
        }
        else if(*(p+i)=='\0'){
            return -1;
        }
        else{
            return  1;
        }
    }
int main(){
    int c;
    char str1[50],str2[50];
    printf("enter first string");
    fgets(str1,50,stdin);
    printf("enter second string");
    fgets(str2,50,stdin);
    c=mystrcmp(str1,str2);
    if(c==0){
        printf("equal strings");
    }
    else if(c==1){
        printf("str1 > str2");
    }
    else{
        printf("str2 > str1");
    }

    return 0;
}