//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    int a[11];
    int cnt=0;
    if(n==0)
    {
        cnt=1;
    }
    int i=0;
    while(n>0)
    {
        int rem=n%10;
        n=n/10;
        a[i]=rem;
        i++;
    }
    if(cnt==1)
    {
        cout<<0<<endl;
    }
    else
    {
        for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];
        if(j!=0)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    }
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