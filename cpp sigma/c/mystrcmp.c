#include<stdio.h>
#include<string.h>
int mystrcmp(char str1[],char str2[]){
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0'){
        if(str1[i]>str2[i]){
            return 1;
        }
        else if(str1[i]<str2[i]){
            return -1;
    
        }
        i++;
    }
        if(str1[i]=='\0' && str2[i]=='\0'){
            return 0;
        }
        else if(str1[i]=='\0'){
            return -1;
        }
        else{
            return 1;
        }
        
    }
    
int main(){
    int c;
    char str1[50],str2[50];
    printf("\nenter first string");
    fgets(str1,50,stdin);
    str1[strcspn(str1,"\n")] = '\0';
    printf("\nenter second string");
    fgets(str2,50,stdin);
    str2[strcspn(str2,"\n")]='\0';
    c=mystrcmp(str1,str2);
    if(c==0){
        printf("equal strings");
    }
    else if(c>0){
        printf("string 1 greater than string 2");
    }
    else{
        printf("string 2 greater than string 1");
    }
    return 0;
}