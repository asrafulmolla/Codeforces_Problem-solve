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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    int j=n-1;
    while(i<j)
    {
        cout<<a[i]<<" "<<a[j]<<" ";
        j--;
        i++;
        if(i==j) cout<<a[j];
    }
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