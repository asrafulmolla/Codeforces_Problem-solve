//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    for (int i =0; i<n; i++)
    {
            b[i] = a[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            cnt++;
            break;
        }
    }
    if(cnt==0)
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
    int t = 1;
    // cin>>t;
    while (t--)
    {
        asraful();
    }
}