#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^
]s",str);
    int i,m,ind=0,l=strlen(str);
    for (i=0; i<l; i++){
        if (str[i]==32){
            ind=i;
            break;
        }
    }
    int j=0,k=0;
    char farr[50];
    char sarr[50];
    for (i=0; i<ind; i++){
        farr[j++]=str[i];
    }
    for (i=ind+1; i<l; i++){
        sarr[k++]=str[i];
    }
    for (i=0; i<j; i++){
        int f=1;
        for (m=0; m<k; m++){
            if (farr[i]==sarr[m]){
                f=0;
                sarr[m]=32;
                break;
            }
        }
        if (f==1){
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}