#include<stdio.h>
#include<string.h>
int check(char *str,int a,int b){
    int i,j,l=b-a+1,k=0;
    char arr[l];
    for (i=b; i>=a; i--){
        arr[k++]=str[i];
    }
    for (i=0; i<l; i++){
        if (arr[i]!=str[a+i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char str[1000];
    scanf("%s",str);
    int l=strlen(str);
    int i,j,k,ml=0,r,n;
    char res[100];
    for (i=0; i<l; i++){
        for (j=i; j<l; j++){
            r=check(str,i,j);
            if (r==1){
                if (ml<j-i+1){
                    ml=j-i+1;
                    k=0;
                    for (n=i; n<=j; n++){
                        res[k++]=str[n];
                    }
                }
            }
        }
    }
    for (i=0; i<ml; i++){
        printf("%c",res[i]);
    }
    return 0;
}