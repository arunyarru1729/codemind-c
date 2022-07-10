#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char sym;
    struct node *next;
};typedef struct node NODE;
NODE *head=NULL;
void insert(char s){
    NODE *nn,*temp;
    nn=(NODE*)malloc(sizeof(NODE));
    nn->sym=s;
    nn->next=NULL;
    if (head==NULL){
        head=nn;
    }
    else if (head->next==NULL){
        head->next=nn;
    }
    else{
        temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=nn;
    }
}
int check(char s){
    NODE *nn,*temp;
    if (head==NULL){
        return 0;
    }
    else if (head->next==NULL){
        if (head->sym=='(' && s==')'){
            head=NULL;
            return 1;
        }
        if (head->sym=='[' && s==']'){
            head=NULL;
            return 1;
        }
        if (head->sym=='{' && s=='}'){
            head=NULL;
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        nn=head;
        temp=head;
        while (1){
            temp=temp->next;
            if (temp->next==NULL){
                break;
            }
            nn=temp;
        }
        if (temp->sym=='(' && s==')'){
            nn->next=NULL;
            return 1;
        }
        else if (temp->sym=='[' && s==']'){
            nn->next=NULL;
            return 1;
        }
        else if (temp->sym=='{' && s=='}'){
            nn->next=NULL;
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char str[100];
        scanf("%s",str);
        int i,l=strlen(str),f=0;
        if (l==1){
            printf("False");
            return 0;
        }
        for (i=0; i<l; i++){
            if (str[i]=='(' || str[i]=='{' || str[i]=='['){
                insert(str[i]);
            }
            else{
                int res=check(str[i]);
                if (res==1){
                    f=1;
                }
                else{
                    f=0;
                    break;
                }
            }
        }
        if (f==1){
            printf("True
");
        }
        else{
            printf("False
");
        }
        head=NULL;
    }
    return 0;
}