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

void asraful()
{
    int x;
    cin>>x;
    int n=x*2;
    int a[n];
    int c[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    sort(a,a+n);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            continue;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<j;k++)
        {
            if(c[i]==b[k])
            {
                cout<<c[i]<<" ";
            }
        }
    }
    cout<<endl;
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