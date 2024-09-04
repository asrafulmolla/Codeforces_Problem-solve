//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    char s;
    cin>>s;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
            cout<<s;
        }
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