#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                cnt=1;
                break;
            }
        }
    }
    if(cnt==1) cout<<"will not take number";
    else cout<<"will take number";
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