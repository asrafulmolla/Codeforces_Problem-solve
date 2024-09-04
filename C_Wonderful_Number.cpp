#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    int A=n;
    vector<int>b(32);
    vector<int>c(32);
    int i=0;
    while(n>0)
    {
        b[i]=n%2;
        n=n/2;
        i++;
    }
    int m=i;
    int j=0;
    for(int i=m-1;i>=0;i--,j++)
    {
        c[j]=b[i];
    }
    int d[m];
    for(int i=0;i<m;i++)
    {
        d[i]=c[i];
    }
    // for(int i=0;i<m;i++)
    // {
    //     cout<<d[i];
    // }
    // cout<<endl;
    //reverse(c.begin(),c.end());
    int e[m];
    for(int i=0;i<m;i++)
    {
        e[i]=d[m-i-1];
    }
    // for(int i=0;i<m;i++)
    // {
    //     cout<<e[i];
    // }
    // cout<<endl;
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        if(e[i]==d[i])
        {
            continue;
        }
        else
        {
            cnt=1;
            break;
        }
    }
    //cout<<cnt;
    if(cnt==0 && A%2!=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
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