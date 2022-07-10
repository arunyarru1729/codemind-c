#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i,i1=0,j,l=strlen(str),val=0;
    for (i=0; i<l; i++){
        val=0;
        if (str[i]=='#'){
            for (j=i1; j<i-2; j++){
                printf("%c",str[j]-48+96);
            }
            val=(str[i-2]-48)*10+str[i-1]-48;
            printf("%c",val+96);
            i1=i+1;
        }
        if (i==l-1){
            for (j=i1; j<l; j++){
                val=str[j]-48;
                printf("%c",val+96);
            }
            break;
        }
    }
    return 0;
}