#include<bits/stdc++.h>
#include<string.h>
#include<cctype>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define in cin>>
#define out cout<<
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int n,m; in n;in m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            //if(i%2!=0) out "#";
            if(i%4==0)
            {
                out "#";
                for(int k=2;k<=m;k++)
                {
                    out ".";
                }
                break;
            }
            else if(i%2==0)
            {
                for(int k=1;k<m;k++)
                {
                    out ".";
                }
                out "#";
                break;
            }
            else out "#";
        }
        nl;
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