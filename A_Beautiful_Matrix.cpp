#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                ans=abs(i-2)+abs(j-2);
            }
        }
    }
    cout<<ans;
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