// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(t--)
    {
        int b,c;
        cin>>b>>c;
        int sum=0;
        for(int i=b-1;i<c;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}