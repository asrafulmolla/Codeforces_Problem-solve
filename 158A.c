#include <stdio.h>

int main()
{
    int n,b,count=0,i;
    int a[101];
    scanf("%d""%d", & n,& b);

    for(i=1; i<=n; i++)
    {
        scanf("%d", & a[i]);
    }

    for(i=1; i<=n; i++)
    {
        if (a[i]>=a[b] && a[i]>0)
        {
            count++;
        }
    }
    printf("%d", count);
}
