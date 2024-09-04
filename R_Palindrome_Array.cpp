// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    reverse(a.begin(),a.end());
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            cnt=1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(cnt==0) cout<<"YES";
    else cout<<"NO";

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