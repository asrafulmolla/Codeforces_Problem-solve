#include<stdio.h>
#include <limits.h>
int asraful(int a[],int n,int max)
{
    if(n<0) return max;
    if(max<a[n])
    {
        max=a[n];
    }
    max= asraful(a,n-1,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int res=asraful(a,n-1,INT_MIN);
    printf("%d",res);
}