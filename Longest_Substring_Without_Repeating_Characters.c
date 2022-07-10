#include<stdio.h>
#include<string.h>
int check(char *str,int a,int b)
{
    int i,j;
    for (i=a; i<=b; i++)
    {
        for (j=a; j<=b; j++)
        {
            if (i!=j)
            {
                if (str[i]==str[j] || str[i]-32==str[j] || str[i]+32==str[j])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,m=0,j,l=strlen(str),ind1=0,ind2=0;
    for (i=0; i<l; i++)
    {
        for (j=i+1; j<l; j++)
        {
            int res=check(str,i,j);
            if (res==1)
            {
                if (j-i>m)
                {
                    m=j-i;
                    ind1=i;
                    ind2=j;
                }
            }
        }
    }
    if (m>=2)
    {
        for (i=ind1; i<=ind2; i++)
        {
            printf("%c",str[i]);
        }
    }
    else{
        printf("-1");
    }
    return 0;
}