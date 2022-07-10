#include<stdio.h>
#include<string.h>
int check(char s){
    char str[10]={'a','e','i','o','u','A','E','I','O','U'};
    int i;
    for (i=0; i<10; i++){
        if (str[i]==s){
            return 1;
        }
    }
    return 0;
}
int main(){
    char str[100];
    scanf("%s",str);
    int l=strlen(str);
    int i=0,j=l-1;
    while (i<j){
        if (check(str[j])==0){
            j--;
        }
        if (check(str[i])==0){
            i++;
        }
        if (check(str[i])==1 && check(str[j])==1){
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