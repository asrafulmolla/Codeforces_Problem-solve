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
    int n; in n;
    vector<int>a(n);
    int sum=0,even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }
    if(sum%2!=0)yes;
    else if(even >0 && odd>0) yes;
    else no;
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