#include<stdio.h>
void sort(int *arr,int a)
{
    int i,j,k;
    for (i=1; i<a; i++)
    {
        j=i-1;
        k=arr[i];
        while (j>=0 && arr[j]>k)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }
}
int count(int *arr,int a,int val){
    int i,c=0;
    for (i=0; i<a; i++){
        if (arr[i]==val){
            c++;
        }
    }
    return c;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a],brr[a],i,j,k=0;
    for (i=0; i<a; i++){
        scanf("%d",&arr[i]);
        brr[i]=arr[i];
    }
    sort(arr,a);
    sort(brr,a);
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            if (i!=j && brr[i]==brr[j]){
                brr[j]=-1;
            }
        }
    }
    int c=0;
    for (i=0; i<a; i++){
        if (brr[i]!=-1){
            c++;
        }
    }
    int res[c];
    for (i=0; i<a; i++){
        if (brr[i]!=-1){
            res[k++]=brr[i];
        }
    }
    for (i=0; i<c; i++){
        for (j=0; j<c-1; j++){
            if (count(arr,a,res[j])<count(arr,a,res[j+1])){
                int temp=res[j];
                res[j]=res[j+1];
                res[j+1]=temp;
            }
        }
    }
    for (i=0; i<c; i++){
        printf("%d ",res[i]);
    }
    return 0;
}