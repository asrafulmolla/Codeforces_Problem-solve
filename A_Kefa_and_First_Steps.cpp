#include<bits/stdc++.h>
#include<string.h>
#include<cctype>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define in cin>>
#define out cout<<
#define ll long long
#define ull unsigned long long int
using namespace std;

int asraful()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0;
    int cn=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i+1]>=a[i])
        {
            cnt++;
        }
        else
        {
            cn++;
            b[j]=cnt+1;
            j++;
            cnt=0;
        }
    }
    if(cn==0)
    {
        cout<<n;
        return 0;
    }
    sort(b,b+cn,greater<int>());
    cout<<b[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    //cin>>t;
    while(t--)
    {
        asraful();
    }
}