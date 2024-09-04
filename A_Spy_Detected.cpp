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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) in a[i];
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1]) continue;
        else
        {
            if(a[i]!=a[i+1] && (a[i+1]==a[i+2] || a[i+1]==a[i-2])) 
            {
                index=i;
                break;
            }
            else
            {
                index=i+1;
                break;
            }
        }
    }
    out index+1<<endl;
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