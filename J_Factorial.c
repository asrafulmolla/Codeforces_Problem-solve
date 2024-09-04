#include<stdio.h>
#define ull unsigned long long
ull asraful(int n,ull sum)
{
    if(n==0) return sum;
    sum*=n;
    sum=asraful(n-1,sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    ull res=asraful(n,1);
    printf("%llu",res);
}