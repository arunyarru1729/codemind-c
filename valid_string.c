#include<stdio.h>
#include<string.h>
int count(char *str,int a,char s){
    int i,c=0;
    for (i=0; i<a; i++){
        if (str[i]==s){
            c++;
        }
    }
    return c;
}
int main(){
    char str[1000];
    scanf("%s",str);
    int arr[1000],i,ai=0,l=strlen(str);
    for (i=0; i<l; i++){
        int co=count(str,l,str[i]);
        arr[ai++]=co;
    }
    int c=0;
    for (i=0; i<l; i++){
        int co=count(str,l,str[i]);
        if (co!=2){
            if (c==0){
                c++;
                continue;
            }
            else{
                printf("Not Valid");
                return 0;
            }
        }
    }
    printf("Valid String");
    return 0;
}