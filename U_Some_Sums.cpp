// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n,a,b;
    cin>>n>>a>>b;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int ans=0;
        int temp=i;
        while(temp>0)
        {
            int mod=temp%10;
            ans+=mod;
            temp=temp/10;
        }
        if(ans>=a && ans<=b)
        {
            sum+=i;
        }
    }
    cout<<sum;
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