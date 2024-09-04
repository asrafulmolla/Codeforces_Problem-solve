//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    int s=0;
    int k=2*n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=k;j++)
        {
            cout<<"*";
        }
        s++;
        k-=2;
        cout<<endl;
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