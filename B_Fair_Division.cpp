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
    int one=0,two=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    int cnt=abs((two*2)-one);
    if((one%2==0)&&((two)%2==0)) yes;
    else if(two%2!=0 && (one%2==0) && one!=0) yes;
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