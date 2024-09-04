// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    while(t--)
    {
        int x;
        cin>>x;
        int beg=0,end=n-1;
        int mid=(beg+end)/2;
        while(beg<=end)
        {
            if(a[mid]<x)
            {
                beg=mid+1;
                mid=(beg+end)/2;
            }
            else if(a[mid]==x)
            {
                cout<<"found\n";
                break;
            }
            else 
            {
                end=mid-1;
                mid=(beg+end)/2;
            }
        }
        if(beg>end)
            {
                cout<<"not found\n";
            }
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