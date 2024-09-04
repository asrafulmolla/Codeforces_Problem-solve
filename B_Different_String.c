#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[15];
        scanf("%s",s);
        char a[15];
        strcpy(a,s);
        for(int i=0;i<strlen(s)/2;i++)
        {
            int temp=s[i];
            s[i]=s[strlen(s)-1-i];
            s[strlen(s)-1-i]=temp;
        }
        int cnt=strcmp(s,a);
        if(cnt==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n%s\n",s);
        }
    }
}