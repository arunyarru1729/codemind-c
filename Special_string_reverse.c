#include<stdio.h>
#include<string.h>
int check(char s){
    if (s>=33 && s<=64){
        return 1;
    }
    return 0;
}
int main(){
    char str[100];
    scanf("%s",str);
    int l=strlen(str);
    int i=0, j=l-1;
    while (i<j){
        if (check(str[j])==1){
            j--;
        }
        if (check(str[i])==1){
            i++;
        }
        if (check(str[i])==0 && check(str[j])==0){
            char temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;
        }
    }
    for (i=0; i<l; i++){
        printf("%c",str[i]);
    }
    return 0;
}