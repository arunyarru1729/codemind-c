#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf(" %s",str2);
    char arr1[100],arr2[100];
    int i,j=0,k=0,l,f=1;
    for (i=0; i<strlen(str1); i++){
        if (str1[i]=='#'){
            j--;
        }
        else{
            arr1[j++]=str1[i];
        }
    }
    for (i=0; i<strlen(str2); i++){
        if (str2[i]=='#'){
            k--;
        }
        else{
            arr2[k++]=str2[i];
        }
    }
    if (j==k){
        for (i=0; i<j; i++){
            if (arr1[i]!=arr2[i]){
                f=0;
                break;
            }
        }
        if (f==1){
            printf("True");
        }
        else{
            printf("False");
        }
    }
    else{
        printf("False");
    }
    return 0;
}