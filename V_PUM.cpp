#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    int k=3;
    int l=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=l;j<=k;j++)
        {
            printf("%d ",j);
        }
        k+=4;
        l+=4;
        printf("PUM\n");
    }
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        asraful();
    }
}