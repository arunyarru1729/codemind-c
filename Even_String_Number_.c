#include<stdio.h>
#include<string.h>
int check(int val,int a,int *arr){
    int i;
    for (i=0; i<a; i++){
        if (arr[i]==val){
            return 0;
        }
    }
    return 1;
}
void quick(int *arr,int a){
    int i,j,k;
    for (i=1; i<a; i++){
        j=i-1;
        k=arr[i];
        while (j>=0 && arr[j]<k){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }
}
int main(){
    char str[1000];
    scanf("%s",str);
    int l=strlen(str),i,j,k;
    int arr[100],ai=0;
    for (i=0; i<l; i++){
        if (str[i]>=48 && str[i]<=57){
            if (check(str[i]-48,ai,arr)){
                arr[ai++]=str[i]-48;
            }
        }
    }
    quick(arr,ai);
    int ind=0,f=0;
    for (i=0; i<ai; i++){
        if (arr[i]%2==0){
            ind=i;
            f=1;
        }
    }
    if (f==1){
        for (i=0; i<ind; i++){
            printf("%d",arr[i]);
        }
        for (i=ind+1; i<ai; i++){
            printf("%d",arr[i]);
        }
        printf("%d",arr[ind]);
    }
    else{ 
        printf("%d",-1);
    }
    return 0;
}