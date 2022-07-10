#include<stdio.h>
#include<string.h>
int colon(char *str,int a,int b){
    int i;
    for (i=a; i<=b; i++){
        if (str[i]==':'){
            return i;
        }
    }
    return 0;
}
int max(char *str,int a,int b,int len){
    int i,max=0;
    for (i=a; i<=b; i++){
        if (str[i]-48<=len){
            if (max<str[i]-48){
                max=str[i]-48;
            }
        }
    }
    return max;
}
int main(){
    char str[1000];
    scanf("%s",str);
    int l=strlen(str),i,j,k,i1=0,val=0,i2=0,f=0;
    int len=0;
    for (i=0; i<l; i++){
        if (str[i]==','){
            i2=colon(str,i1,i);
            len=i2-i1;
            val=max(str,i2+1,i,len);
            if (val==0){
                printf("%c",'X');
            }
            else{
                printf("%c",str[i1+val-1]);
            }
            i1=i+1;
        }
        if (i==l-1){
            i2=colon(str,i1,i);
            len=i2-i1;
            val=max(str,i2+1,i,len);
            if (val==0){
                printf("%c",'X');
            }
            else{
                printf("%c",str[i1+val-1]);
            }
            i1=i+1;
        }
    }
    return 0;
}