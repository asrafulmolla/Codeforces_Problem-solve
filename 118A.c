#include<stdio.h>
#include <string.h>

int main()
{
    int i,n;
    char s[101];
    scanf("%s", s);
    n= strlen(s);
    for(i=0; i<n; i++)
    {
         if (s[i]!='a' && s[i]!='A' && s[i]!='e'
              && s[i]!='E' && s[i]!='i' && s[i]!='I'
             && s[i]!='o' && s[i]!='O' && s[i]!='u'
             && s[i]!='U' && s[i]!='y' && s[i]!='Y')
         {
             if (s[i]>='A' && s[i]<= 'Z')
             {
                 s[i]+=32;
             }
             printf(".");
             printf("%c", s[i]);
         }
    }
    printf("\n");
}
