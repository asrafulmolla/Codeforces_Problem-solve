//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    int cnt=0;
    if(n==1)
    {
        cnt=1;
    }
    else
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                cnt=1;
                break;
            }
        }
    }
    if(cnt==0) cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}